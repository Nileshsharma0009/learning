
export const  resgiter =  async (req , res) =>{
     const {name , email, password } = req.body ;

     if(!name ||  !email || ! password){
        return res.status(400).json({error : "all fieldsa are required"});
     }
  
     const emailExist =  await  User.findOne({email})
     if(emailExist){
      return  res.status(400).json({message :"email already exists"})
     }

     const hashPassword = await bcrypt.hash(password ,10)  ;

     const  user = await User.create({
      name , email , password :hashPassword,

     });

     res.status(201).json({message : "registration sucessful" ,
      user :{
          id=user._id,
          name:user.name ,
          email:user.email,
      }
     })

}





export const  signup = async (req , res) => {

   try{
      const {email , password} = req.body ;

      if(!email || !password){
         return res.status(400).json({error : "all fields are required"});
      }



      const existUser = await User.findOne({email})

      if(existUser){
         return res.status(400).json({error : "invalid credentials"});
      }
      

      const hashPassword = await bcrypt.hash(password , 10) ;

          const user = await  User.create({
               email , password : hashPassword
          })

          const token = jwt.sign({id : user._id} , process.env.JWT_SECRET , {expiresIn : "1d"})

          res.status(200).json({message : "login successful" , token})


          res.cookie("token" ,toke ,{
               httpOnly: true ,
               secure: process.env.NODE_ENV === "production" ,
               sameSite: "strict" ,
               maxAge : 24 * 60 * 60 * 1000 ,
          })
          res.status(200).json({message : "login successful" , token})

              res.status(201).json({
      user: { id: user._id, name: user.name, email: user.email, createdAt: user.createdAt, updatedAt: user.updatedAt },

    });
        

              


          
   }catch(errr){
    console.error(errr);
    res.status(500).json({error : "server error"})
   }
}


