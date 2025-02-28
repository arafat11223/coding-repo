let sen="i am learning web development";
let reverse='';
for(let w of sen)
{
    reverse=w+reverse;
    //console.log(w);
}
console.log(reverse);
for(let i=sen.length-1;i>0;i--)
{
    reverse+=sen[i];
}
console.log(reverse);

let re=sen.split('').reverse().join("");
console.log(re);