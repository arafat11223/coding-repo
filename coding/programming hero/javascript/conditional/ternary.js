// condition ? do something when true : do something when false
const age=12;
age<=18 ? console.log('ghumai thako') : console.log("vote dao");

let price=500;
const is=true;
// if(is===false)
// {
//     price=0;
// }
// else
// {
//     price=price+100;
// }
// console.log(price);

price=is===false ? 0 :price+100;
console.log(price);


//semi advanced ternary
console.log('semi advanced ternary');
let pr=1300;
const isleader=true;
// if(isleader===true)
// {
//     if(pr>=1000)
//     {
//         pr/=2;
//     }
//     else
//     {
//         priprce=0;
//     }


// }
// else
// {
//     pr=pr+100;

// }
// console.log(pr);

pr= isleader===true ? 
        pr>=1000 ? pr/=2 : 0 
    :pr+100;

console.log(pr);   