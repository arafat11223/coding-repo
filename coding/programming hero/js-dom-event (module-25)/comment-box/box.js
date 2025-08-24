document.getElementById('btn-post').addEventListener('click',function(){
    // get the comment inside the text area
    const newcomment=document.getElementById('new-comment');
    const add=newcomment.value;

    const updatelorem=document.getElementById('update-lorem');
    const p=document.createElement('p');
    p.innerText=add;
    updatelorem.appendChild(p);
    newcomment.value='';
})