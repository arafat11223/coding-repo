// document.getElementById('more-btn').addEventListener('mouseover',function(){
//     console.log("event triggered");
// })

// document.getElementById('text-field').addEventListener('focus',function(){
//     console.log('event triggered inside the inut field');
// })
// document.getElementById('text-field').addEventListener('focus',function(){
//     console.log('event triggered inside the inut field');
// })
// 
// document.getElementById('text-field').addEventListener('keypress',function(event){
//     console.log(event.target.value);
// })
document.getElementById('text-field').addEventListener('keyup',function(event){
    console.log(event.target.value);
})