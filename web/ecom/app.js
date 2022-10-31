const wrapper = document.querySelector(".slideWrapper");
const menuItem = document.querySelectorAll(".menuItem");

const products = [
    {
        id:1,
        title :"ADIDAS",
        price : 190,
        colors: [
            {
                code:"black",
                img: "./img/adiblack.png.jpg",
            },
            {
                code:"blue",
                img: "./img/adidasblue.jpg",
            },
            {
                code:"grey",
                img: "./img/adidgrey.jpg",
            },
        ],

    
    },
    {
        id:2,
        title :"SKECHERS",
        price : 180,
        colors: [
            {
                code:"black",
                img: "./img/sketchersblack. png",
            },
            {
                code:"red",
                img: "./img/sketchersred. png",
            },
        ],
    },
    {
        id:3,
        title :"NIKE",
        price : 190,
        colors: [
            {
                code:"black",
                img: "./img/nikblackk.jpg",
            },
            {
                code:"pink",
                img: "./img/nikepink.png",
            },
            {
                code:"yellow",
                img: "./img/nikeyell.jpg",
            },
            
            
        ],
    },
    {
        id:4,
        title :"CONVERSE",
        price : 190,
        colors: [
            {
                code:"black",
                img: "./img/convblack.jpg",
            },
            {
                code:"red",
                img: "./img/convred.png.jpg",
            },
            {
                code:"grey",
                img: "./img/convegrey.jpg",
            },
        ],
    },
];
let choosenProduct = products[0]
const currentProductImg = document.querySelector(".productImg");
const currentProductTite = document.querySelector(".productTitle");
const currentProductPrice = document.querySelector(".productPrice");
const currentProductColors = document.querySelectorAll(".color");
const currentProductSizes = document.querySelectorAll(".size");

menuItem.forEach((item,index)=>{
    item.addEventListener("click", ()  =>{
        wrapper.style.transform = `translateX(${-100 * index}vw)`;
        choosenProduct = products[index]

        //change text of current product
        currentProductTite.textContent = choosenProduct.title;
        currentProductPrice.textContent = "$" + choosenProduct.price;
        currentProductImg.src = choosenProduct.colors[0].img;
        //assign new color
        currentProductColors.forEach((color,index) =>{
            
