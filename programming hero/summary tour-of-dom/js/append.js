const thirdlist=document.getElementById('append-list');
const newli=document.createElement('li');
newli.innerText="new item added using js";
thirdlist.appendChild(newli);
  

const main=document.getElementById('main-container');
const newsection=document.createElement('section');
newsection.innerHTML=`
<h1>my dynamic section</h1>
<ul>
    <li>item 1</li>
    <li>item 2</li> 
</ul>`
main.appendChild(newsection);