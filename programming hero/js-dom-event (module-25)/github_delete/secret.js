document.getElementById('delete-confirm').addEventListener('keyup',function(event){
    const text=event.target.value;
    console.log(text);
    const btn=document.getElementById('btn-delete');
    if(text==='delete')
    {
        btn.removeAttribute('disabled')

    }
    else
    {
        btn.setAttribute('disabled',true);
    }

})
document.getElementById("btn-delete").addEventListener('click',function(){
    document.getElementById("secret-info").style.display = "none";
})