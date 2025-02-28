// const name="arafat";
// let age=56;
// const school="iiuc";
const subject={
    name:"arafat",
    age:20,
    school:"iiuc",
}
//console.log(subject);
console.log(subject.school);
console.log(subject);
console.log("---------------");


const person={
    name:"tamim",
    age:21,
    profession:"developer",
    salary:400,
    "fav place":['cox','sylet','bandanban']


}
//console.log(person);
console.log(person["fav place"]);
console.log(person.age);
person.age=25;
console.log(person.age);

console.log("-----key,values,entries----");
let computer={
    model:"hp",
    ram:"8gb",
    price:30000,
    hdd:"256gb"
}
console.log(Object.keys(computer));
let values=console.log(Object.values(computer));
console.log(Object.entries(computer));