function handlebtn()
{
    console.log('button clicked');
    const handlestatus=document.getElementById('handle-status');
    handlestatus.innerText='handle by function attached on onclick attribute';
}

document.getElementById('event-listener').addEventListener('click',function(){
    const handelerstatus=document.getElementById('handle-status');
    handelerstatus.innerText='text updated by event listener button';
})

document.getElementById('update-button').addEventListener('click',function(){
    const inputfield=document.getElementById('input-field');
    const inputtext=inputfield.value;

    const p=document.getElementById('input-text-update');
    p.innerText=inputtext;

})