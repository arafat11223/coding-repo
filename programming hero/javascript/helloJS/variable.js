var age;
var price = 222;
console.log(age);
console.log(price);
var price = "hello"; //overwrite possible
console.log(price);
console.log(34);


//string 
var name = "my name is arafat";
console.log(name);
var isrich = false;
console.log(isrich);


//let variable
let a = 45;
console.log(a);
//let a=56;
console.log(a);


//const varable
const y = 10;
console.log(y);
// y=34;
// console.log(y);


//typeof
console.log(typeof price);
console.log(typeof name);
console.log(typeof a);
var x = 45.56;
console.log(typeof x);
console.log(typeof isrich);


var apple = 20;
console.log(typeof apple);
var app = '20';
var ap = 20;
console.log(typeof app);
console.log(app + apple);
console.log(ap + apple);

//convert praseInt
console.log("a string to convert a number");
var value = parseInt('30.45');
console.log(value);
var valu = parseInt("ab");
console.log(valu);
var val = parseInt("20.5");
console.log(val);
var va = parseInt(20.34);
console.log(va);

//convert praseFloat
console.log("a string to convert a number");
var value = parseFloat('30');
console.log(value);
var valu = parseFloat("ab");
console.log(valu);
var val = parseFloat("20.5");
console.log(val);
var va = parseFloat(20.34);
console.log(va);

//summation with 
console.log("toFixed--- number of digit after the decimal number");
var first = 0.1;
var second = 0.2;
var total = first + second;
console.log(total);
console.log(total.toFixed(2));
var h = 3.389;
console.log(h.toFixed(1));
console.log(typeof h);

//infinity
var c=40/0;
console.log(c);

//null datatype
console.log("null datatype");
var n=null;
console.log(n);
console.log(typeof n);


//undefined datatype
console.log("undefined datatype");
var m;
console.log(m);
console.log(typeof m);

//isNan
console.log("isNaN keyword");
console.log(isNaN("abc"));
console.log(isNaN("23"));
console.log(isNaN(8));
console.log(isNaN("abc123"));

//number.isNan
console.log("Number.isNaN keyword");
console.log(Number.isNaN("abc"));
console.log(Number.isNaN("123abc"));
console.log(Number.isNaN(3454));
console.log(Number.isNaN(NaN)); // Output: true
console.log(Number.isNaN("hello")); // Output: false (এটি `NaN` নয়, কারণ এটি স্ট্রিং)




