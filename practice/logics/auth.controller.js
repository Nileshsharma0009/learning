

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
