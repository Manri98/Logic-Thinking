
function myFunction(){ 
	var num=10;
	var div=document.getElementsByClassName('progreso')[0];
	var divWidth=div.offsetWidth;
	div.style.width=(divWidth-num)+'px';
	var estado=(divWidth-num);

	if(estado < 350){
		var texto=document.getElementById('texto');
		var nuevo = "pene";
		var texto.innerHTML = nuevo;
	}
}

function mifuncion() {
    var d = new Date();
    var n = d.getHours();
var m = d.getMinutes();
    document.getElementById("demo").innerHTML = n+":"+m;
}