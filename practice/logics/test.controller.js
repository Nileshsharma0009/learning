
const submitTest = async (req ,res) => {
    try{
       const {mockId , answers} = req.body ;
         const userId = req.user.id ;

         let result = await Result.fimdOne({userId,mockId}) ;

         if(result){
            return res.status(409).json({
                message :"your have alraedy submitted this test" ,
                resultid:result,

            })
         }

         const finalanswer =  result ?{...result.answers ,...answers} : answers ;

         const 

    }catch(err){

    }
}