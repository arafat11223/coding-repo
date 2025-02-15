let numbers=[1,2,3,4,5,6];
const name=['arafat','tamim'];
const passed=[true,false,true,true];
console.log(numbers.length);
console.log(numbers);
console.log(numbers[3]);
numbers[2]=789;
console.log(numbers);


//push ,pop
console.log('push, pop');
let friends=['salam','kalam','balam'];
console.log(friends);
friends.push('gelam');
friends.push('jailam');
console.log(friends);

friends.pop();
console.log(friends);
const a=friends.pop();
console.log(friends);
console.log(a);

//shift unshift
console.log('shift','unshift');
friends.shift();
console.log(friends);
friends.unshift('hello');
console.log(friends);

//includes
console.log('includes');
let arr=[112,3434,234];
console.log(arr.includes(234));
console.log(arr.includes(23));
if(arr.includes(112))
{
    console.log('you are little bit cooder');
}

//indexof
console.log('indexof');
console.log(arr.indexOf(234));
console.log(arr.indexOf(23));

//Array.isarray
console.log('Array.isArray');
let n=['hello','cooder'];
let age='twenty';
console.log(Array.isArray(n));
console.log(Array.isArray(age));

//join(separator)
console.log('join(separator)');
let fruits=['apple','banana','orange'];
console.log(fruits.join());
console.log(fruits.join("-"));
console.log(fruits.join(''));

//concat()
console.log("concat()");
let arr1=["apple","orange"];
let arr2=["banana","abc"];
console.log(arr1.concat(arr2));

let str1="hello";
let str2="cooder";
console.log(str1.concat(" ",str2));



