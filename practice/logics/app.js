import express from "express";
import cors from "cors"

const app = express() ;

app.use(
    cors([
        origin:[
            "url 2" ,
            "url 3",
        ],

        credentials:  true ,
    ])
);

app.use(express.json()) ;
app.use(cookieParser()) ;

app.get("/api/health" , (req , res) => {
    res.json({ok: true});
});
app.get("/api/health" , (req , res) => {
    res.json({ok: true});
});
app.get("/api/health" , (req , res) => {
    res.json({ok: true});
});


app.use("api/auth",authRoutes);
