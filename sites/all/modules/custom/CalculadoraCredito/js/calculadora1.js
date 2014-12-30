jQuery(document).ready(function(){
		jQuery("#mostrar_resultado1").fadeOut(100);
		jQuery( "#valor_compra1" ).keyup(function() {
				var ValorCompra = jQuery("#valor_compra1").val();
				
				if(ValorCompra= "" || !/^([0-9])*$/.test(ValorCompra)){
		                jQuery("#mensaje11").fadeIn("slow");
		                
		            }
		});

		jQuery( "#valor_inicial1" ).keyup(function() {
					var ValorCompra = jQuery("#valor_compra1").val();
			    	var ValorInicial = jQuery("#valor_inicial1").val();
			    	ValorCompraPorsentaje= ValorCompra*0.30;

					if(ValorInicial <= ValorCompraPorsentaje)  {
		                jQuery("#mensaje21").fadeIn("slow");
		            }   
	    });
 });

function ocultar1(){
	jQuery("#mensaje11").fadeOut("slow");
	jQuery("#mensaje21").fadeOut("slow");
}
setInterval("ocultar1()",5000);


function calcular1(){
	var ValorCompra  = jQuery("#valor_compra1").val();
	parseFloat(ValorCompra);
	var ValorInicial = jQuery("#valor_inicial1").val();
	parseFloat(ValorInicial);
	var ValorTasa = jQuery("#tasa1").val();
	parseFloat(ValorTasa);
	var ValorPeriodos =jQuery("#periodos1").val();
	parseFloat(ValorPeriodos);

    var Tasa = ValorTasa / 100;
    
    var Interes = 1+Tasa;
        
    var Periodos= Math.abs(ValorPeriodos)*-1;
    
    var Potencia = Math.pow(Interes,Periodos);
    var PotenciaTotal=  1-Potencia;
   
    var PotenciaInteres=  PotenciaTotal / Tasa;
    
    Capital= ValorCompra-ValorInicial;
 	
 	
  	ResultadoFinal= Capital/PotenciaInteres;

  	parseInt(ResultadoFinal);
	   
  	MostrarResultado1(ResultadoFinal,ValorPeriodos,ValorCompra);
}

function MostrarResultado1(ResultadoFinal,ValorPeriodos,ValorCompra){
		            
    jQuery("#items_calculadora1").fadeOut("slow");

    jQuery("#mostrar_resultado1").delay(500).fadeIn(2000);

    var formatNumber = {
	 separador: ".", // separador para los miles
	 sepDecimal: ',', // separador para los decimales
	 formatear:function (num){
	  num +='';
	  var splitStr = num.split('.');
	  var splitLeft = splitStr[0];
	  var splitRight = splitStr.length > 1 ? this.sepDecimal + splitStr[0] : '';
	  var regx = /(\d+)(\d{3})/;
	  while (regx.test(splitLeft)) {
	  splitLeft = splitLeft.replace(regx, '$1' + this.separador + '$2');
	  }
	  
	  return this.simbol + splitLeft  +splitRight;
	 },
	 new:function(num, simbol){
	  this.simbol = simbol ||'';
	   return this.formatear(num);
	   }
    }

    document.getElementById("text-respuesta1").innerHTML = "A continuación se muestra el resultado obtenido con la información que usted a proporcionado. Tenga en cuenta que estos valores son de referencia únicamente.";
    document.getElementById("respuesta1").innerHTML = "Valor del credito:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<strong>"+ formatNumber.new(ValorCompra, "$")+ "</strong><br> Valor De Cuota:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<strong>"+ formatNumber.new(ResultadoFinal, "$")+"</strong><br>Numero de coutas:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<strong>"+ValorPeriodos+"  Meses</strong>";
}

function recalcular1(){
 	jQuery("#mostrar_resultado1").fadeOut(500);
 	jQuery("#items_calculadora1").fadeIn(500);
}

