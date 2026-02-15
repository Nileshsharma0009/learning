
export const  resgiter =   (req , res) =>{
     const {name , email, password } = req.body ;

     if(!name ||  !email || ! password){
        return res.status(400).json({error : "all fieldsa are required"});
     }

}