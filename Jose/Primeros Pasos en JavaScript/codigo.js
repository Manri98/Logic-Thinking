
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