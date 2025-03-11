function routine() {
    console.log('serius ho arafat');
    console.log('tui ki mara khaiti cas');
    console.log('taile porte boi');
}
routine();

function square(number) {
    console.log(number);
    const borgo = number * number;
    //console.log(borgo);
    return borgo;
}
square(5);
console.log("------------");
console.log(square(12));

console.log('------------');
function str_size(str) {
    console.log(str);
    const size = str.length;
    console.log(size);
}
str_size("hello");

console.log('-------------');
function sumnumbers(ar) {
    console.log(ar);
    console.log(arr.length);
    let sum = 0;
    // for(const i=0;i<ar.length;i++)
    // {
    //     sum+=ar[i];
    // }
    for (let num of ar) {
        sum = sum + num;
    }
    return sum;
}
let arr = [2, 4, 5, 7, 9, 1];
const sum = sumnumbers(arr);
console.log(sum);