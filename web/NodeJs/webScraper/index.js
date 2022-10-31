const express=require("express")
const jsdom =require("jsdom")
const {JSDOM}=jsdom;
const axios=require("axios");
const app=express()
app.set('view engine','ejs');


const URL="https://www.amazon.in/s?k=apple+iphone14pro+max&crid=207AKBM75PL7C&sprefix=iphone14pro%2Caps%2C721&ref=nb_sb_ss_pltr-ranker-engagementacceptance_1_11"

async function fetchData(){
    try{
        const response= await axios.get(URL,{
              
            
        })
        const {document} =(new JSDOM(response.data)).window

        const products=[]

        document.querySelectorAll(".s-card-container").forEach(element=>{
            products.push({
                image:element.querySelector(".s-image").src,
                title:element.querySelector("h2 span").textContent,
                price:element.querySelector(".a-price-whole").textContent
            })
        })
          //console.log(products);
          return products
        

    }catch(error){
        console.log(error);
    }

}

app.get('/',async(req,res)=>{
    const products=await fetchData()
res.render("pages/index.ejs",{products});
})


//s-card-container s-image
//a-price
//h2-span

app.listen(3000,()=>
console.log("Server started") )