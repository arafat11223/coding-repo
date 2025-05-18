console.log('append.js loaded');
// createElement
// 1.where to add
const fruitlist=document.getElementById('fruits-list');
// 2.what to add
const li=document.createElement('li');
li.innerText='Mango';
// add the child
fruitlist.appendChild(li);


const maincontainer=document.getElementById('main-container');
const section=document.createElement('section');
const h1=document.createElement('h1');
h1.innerText='my food list';
section.appendChild(h1);
const ul=document.createElement('ul');

const li1=document.createElement('li');
li1.innerText='Pizza';
ul.appendChild(li1);

const li2=document.createElement('li');
li2.innerText='biriyani';
ul.appendChild(li2);

const li3=document.createElement('li');
li3.innerText='burger';
ul.appendChild(li3);

section.appendChild(ul);
maincontainer.appendChild(section);


// set innerHTML directly
const sectiondress=document.createElement('section');
sectiondress.innerHTML=`
<h1>My Dress List</h1>
<ul>
    <li>Shirt</li>
    <li>Pant</li>
    <li>Jacket</li>
</ul>
`
maincontainer.appendChild(sectiondress);