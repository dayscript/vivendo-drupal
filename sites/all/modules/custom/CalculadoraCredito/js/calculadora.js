jQuery(document).ready(function(){
		jQuery("#mostrar_resultado").fadeOut(100);
		jQuery( "#valor_compra" ).keyup(function() {
				var ValorCompra = jQuery("#valor_compra").val();
				
				if(ValorCompra= "" || !/^([0-9])*$/.test(ValorCompra)){
		                
		                jQuery("#mensaje1").fadeIn("slow");
		                
		            }
		});

		jQuery( "#valor_inicial" ).keyup(function() {
					var ValorCompra = jQuery("#valor_compra").val();
			    	var ValorInicial = jQuery("#valor_inicial").val();
			    	ValorCompraPorsentaje= ValorCompra*0.30;

					if(ValorInicial <= ValorCompraPorsentaje)  {
		                jQuery("#mensaje2").fadeIn("slow");
		            }   
	    });
            jQuery('#valor_inicial').number(true, 2);
            jQuery('#valor_compra').number(true, 2);
 });

function ocultar(){
	jQuery("#mensaje1").fadeOut("slow");
	jQuery("#mensaje2").fadeOut("slow");
}
setInterval("ocultar()",5000);


function calcular(){
	var ValorCompra  = jQuery("#valor_compra").val();
	parseFloat(ValorCompra);
	var ValorInicial = jQuery("#valor_inicial").val();
	parseFloat(ValorInicial);
	var ValorTasa = jQuery("#tasa").val();
	parseFloat(ValorTasa);
	var ValorPeriodos =jQuery("#periodos").val();
	parseFloat(ValorPeriodos);

    var Tasa = ValorTasa / 100;
    
    var Interes = 1+Tasa;
        
    var Periodos= Math.abs(ValorPeriodos)*-1;
    
    var Potencia = Math.pow(Interes,Periodos);
    var PotenciaTotal=  1-Potencia;
   
    var PotenciaInteres=  PotenciaTotal / Tasa;
    
    Capital = ValorCompra - ValorInicial;
 	
 	
  	ResultadoFinal = Capital/PotenciaInteres;

  	parseInt( ResultadoFinal );
	   
  	MostrarResultado( ResultadoFinal, ValorPeriodos, Capital );
}

function MostrarResultado(ResultadoFinal,ValorPeriodos,ValorCompra){
		            
    jQuery("#items_calculadora").fadeOut("slow");

    jQuery("#mostrar_resultado").delay(500).fadeIn(2000);

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

    document.getElementById("text-respuesta").innerHTML = "A continuación se muestra el resultado obtenido con la información que usted a proporcionado. Tenga en cuenta que estos valores son de referencia únicamente.";
    //document.getElementById("respuesta").innerHTML = "Valor del credito:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<strong>"+ FormatNumber(ValorCompra)+ "</strong><br> Valor De Cuota:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<strong>"+ FormatNumber(ResultadoFinal)+"</strong><br>Numero de coutas:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<strong>"+ValorPeriodos+"  Meses</strong>";
    
    jQuery( '#respuesta' ).each(function(){
      jQuery(this).append('<div class="results credit">Valor del credito: <strong>'+ValorCompra+'</strong></div>');
      jQuery(this).append('<div class="results cout">Valor de cuota: <strong>'+ValorCompra+'</strong></div>');
      jQuery(this).append('<div class="results counts">Numero de cuotas: <strong>'+ValorPeriodos+'</strong></div>');
      
      jQuery(this).find('.results').each(function(){
        jQuery(this).find('strong').number(true);
      });
      
    });
}

function recalcular(){
 	jQuery("#mostrar_resultado").fadeOut(500);
 	jQuery("#items_calculadora").fadeIn(500);
}

