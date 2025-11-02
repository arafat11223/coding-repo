// function expression
const add = function(a,b)
{
    return a+b;
}
// arrow function
const add2=(a,b)=> a+b;
const sum = add(3,10);
const sum2 = add2(5,10);
console.log(sum);
console.log(sum2);


const getAge=(person)=>person.age;
const student={
    name:'arafat',
    age:22
}
const age=getAge(student);
console.log(age);
  

const getThird=(numbers)=>numbers[2];
const num=[10,20,30,40,50];
const third=getThird(num);
console.log(third);


//no parameter
const getPi=()=>Math.PI;
console.log(getPi());


//large arrow function
const doMath=(a,b,c)=>{
    const sum=a+b+c;
    const avg=sum/3;
    return avg;
}
console.log(doMath(1,2,3));
