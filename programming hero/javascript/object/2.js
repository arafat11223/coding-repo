const collage={
    name:'pkfc',
    class:[11,12],
    event:['science fair','bijoy uthshb'],
    unique:{
        color:'white',
        builtIn:"11 january 1123",
        result:{
            gpa:5,
            merit:'top'
        }
    }
}
console.log(collage.event);
collage.event[1]="16 december";
console.log(collage.event);
console.log(collage.unique.color);
collage.unique.result.merit='TOP TOP';
console.log(collage.unique.result.gpa);
console.log(collage.unique.result.merit);

console.log("-------------");
for(let key in collage)
{
    console.log(key,":"+collage[key]);
    //console.log(collage[key]);

}