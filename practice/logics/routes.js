
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


