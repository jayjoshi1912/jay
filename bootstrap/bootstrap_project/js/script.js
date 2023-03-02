var headings = document.querySelectorAll('.same_2');
var contents = document.querySelectorAll('.hh')
function opentab(tabname) {
    
contents.forEach(content =>{
    console.log(content);
    
})
content.classList.add('hidden')
document.getElementById(tabname).classList.remove('hidden')
}
