

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