let name = "arafat";
let f_name = 'toslim';
let m_name = `shahnaj`;
console.log(name);
console.log(f_name);
console.log(m_name);

const x = "Ramgonj High school";
console.log(x.toLowerCase());
console.log(x.toUpperCase());

const drink = "water";
const liquid = " water";
if (drink == liquid) {
    console.log("panir opor nam jibon");
}
else {
    console.log("somudre pani aceh khaite pari na");

}

//trim
console.log("----trim(),trimStart(),trimEnd()----");
const h="     hello cooder    ";
const s="  sudur budur";
console.log(h.trimEnd(),s.trimStart());
console.log(h.trim());
if (drink.trim() == liquid.trim()) {
    console.log("panir opor nam jibon");
}
else {
    console.log("somudre pani aceh khaite pari na");

}

//slice(index,index)
console.log("----slice(start,end)----");
let address="lakshmipur";
console.log(address.slice(2,5));  

let num=[2,34,5,3,2,4,5,6,6];
const c=num.slice(3,6);
console.log(c);
const d=num.slice(-6,-2);
console.log(d);

const y=address.slice();
console.log(y);

//split
console.log("----split(separator,limit)----");
let text="i am a hard working person";
console.log(text.split(" "));
console.log(text.split(""));
console.log(text.split(" ",2));

console.log("----split and join----");
let test2="boka-choda";
console.log(test2.split("-").join(" "))
