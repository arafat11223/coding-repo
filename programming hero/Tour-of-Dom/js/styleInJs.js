
console.log('Hello World');
const sections=document.querySelectorAll('section');
for(const section of sections){
    section.style.border='2px solid red';
    section.style.padding='10px';
    section.style.margin='10px';
    section.style.backgroundColor='lightblue';
}
const placecontainer=document.getElementById('places-container');
placecontainer.style.backgroundColor='lightgreen';
placecontainer.classList.remove('front-text');

