//  const items=document.getElementsByClassName('item');
//  for(const item of items)
//  {
//     item.addEventListener('click',function(event){
//         // console.log(event.target);
//         // console.log(event.target.innerText);
//         event.target.parentNode.removeChild(event.target);
//     })
//  }

document.getElementById('list-container').addEventListener('click',function(event){
    event.target.parentNode.removeChild(event.target);
})
    
 document.getElementById('btn-add-item').addEventListener('click',function(){
    const listcontainer=document.getElementById('list-container');
    const newlist=document.createElement('li');
    newlist.innerText='brand new item added';
    newlist.classList.add('item'); //class add
    listcontainer.appendChild(newlist);
 })