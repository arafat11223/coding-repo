let numbers=[1,2,3,4,5,6,7];
console.log(numbers);
numbers.reverse();
console.log(numbers);

console.log("-------------");
let num=[10,11,12,13,14,15];
let rev=[];
for(let i=0;i<num.length;i++)
{
    rev.unshift(num[i]);
}
// for(let revv of num)
// {
//     rev.unshift(revv);
// }
console.log(rev);

console.log('-----sort------');
let n=[2,5,6,7,74,2,1,4,6,8,12,9,95,3,56,8,6]
n.sort();//not working properly
console.log(n);
let name=['kamal','jamal','karim','raju','rahim','anas'];
name.sort();//working properly
console.log(name);
