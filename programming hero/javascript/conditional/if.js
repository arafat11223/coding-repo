if(10<13)
{
    console.log("yes");
}

//multi level
const price=7000;
if(price>=5000)
{
    //10% discount
    const discount=(price*10)/100;
    console.log(discount);
    const pay=price-discount;
    console.log(pay);
}
else if(price>=2500)
{
    //5% discount
    const discount=(price*5)/100;
    console.log(discount);
    const pay=price-discount;
    console.log(pay);

}
else
{
    console.log(price);
}


const age=75,p=500;
if(age<=17)
{
    console.log("you can eat for free");
}
else if(age>=60)
{
    //40% discount
    const dis=(p*40)/100;
    console.log(dis);
    const payment=p-dis;
    console.log(payment);
}
else
{
    console.log(p)
}
