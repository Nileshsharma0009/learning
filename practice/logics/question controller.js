

const getQuestion = async(req , res) => {
    try {
     
        const {mockIUD , sectionn ,subjetv} = req.param ;

        const  questoion = await Question.find({
            mockIUD , sectionn ,subjetv
        } ,{})

        res.status(200).json(question);

    }catch(error){
      res,status(500).json({message:"failed to fetch"})
    }

}


const getmyresult = async(req , res) =>{
    try{
        const results = await  Result.find({
            userId:req.user.id,

        }).sort({createdAt : -1}) ;

        res.json(results) ;

    }catch(err){
       console.error(err) ;
       res.status(500).json({message:"failed to fetch results"}) ;
    }
}
