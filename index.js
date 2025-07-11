import express from "express";
const app = express();
const port = 3000;
app.get("/", (req, res) => {
const now = new Date();
const day = date.getDay();
console.log(day);
});