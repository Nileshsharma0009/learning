import { secureHeapUsed } from "crypto";
import gentoken from "../utils/gentoken.js";

const register = (_req, res) => {
    const { name, email, password } = req.body;

    if (!name || !email || !password) {
        return res.status(400).json({error :"all fillds are required"}) ;

    }

    const emailExist =  User.findone({email} );

    if(exmailExist){
        return res.status(400).json({error : "email alredy existed"} );

    }


    const haspassword = becrypt.hash(password , 10) ;

    const user =  await User.create({
        name , email , password : hashPassword ,

    })

    res.status(201).json({message : "registration sucessful" ,

        user :{
            id :user._id,
            name: user.name ,
            email : user.email ,
        },
    });
}


const signup =  (req,res) => {
    try{

        const {email , password} = req.body ;

        if(!email || !password){
            return res.status(400).json({error : "all fields are required"});
        }
        const existUser =  await User.findOne({email});
            if(existUser){
                return res.status(400).json({error : "user already exists"});
            }

            const hashPassword = await bcrypt.hash(password , 10);

            const user = await User.create({
                email , password : hashPassword ,
            })

            const token = await  gentoken(user.id) ;

            res.cookie("token" ,token, {
                httpOnly : true ,
                secure:isProd ,
                sameSite : is
            })

    }catch(error){
        res.status(500).json({error : "server error"});

    }
}


const Login =  async  (req , res) =>{
    try {
        const {email , password} = req.body ;

        if(!email || !password){
            return res.status(400).json({error : "all fields are required"});
        }

        const user
    }
}