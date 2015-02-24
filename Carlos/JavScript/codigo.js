
function myFunction(){ 
	var num=10;
	var parrafo = document.getElementsByClassName('parrafo').innerHTML;
	var div=document.getElementsByClassName('progreso')[0];
	var divWidth=div.offsetWidth;

	div.style.width=(divWidth-num)+'px';

	
	if(div.style.width<100){
		document.getElementsByClassName('parrafo').innerHTML = "LAMENTABLE";
		document.getElementById("*").style.font-family = "cursive";	
	}

	if(div.style.width>100 && div.style.width<200){
		document.getElementsByClassName('parrafo').innerHTML = "Sigue intentandolo";	
		document.getElementById("*").style.font-family = "charcoal";
	}

	if(div.style.width>200 && div.style.width<300){
		document.getElementsByClassName('parrafo').innerHTML = "Casi casi....";	
		document.getElementById("*").style.font-family = "gadget";
	}

	if(div.style.width>300 && div.style.width<400){
		document.getElementsByClassName('parrafo').innerHTML = "YEEAHHHHH!!!";	
		document.getElementById("*").style.font-family = "helvetica";
	}

}
 
