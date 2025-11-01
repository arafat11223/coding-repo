// default-> if value is no provided then it will take dafault value
function add(num1, num2=0)
{
    const sum = num1 + num2;
    console.log(num1 , num2 , sum);
    return sum;
}
const result = add(5,10);
const re=add(4);
// -----------------
const a=10;
const b=20;
const resultt=('the sum of '+ a +' and '+b+' is :'+ (a+b));
console.log(resultt);
const resulttt=`the sum of ${a} and ${b} is : ${a+b}`;
console.log(resulttt);