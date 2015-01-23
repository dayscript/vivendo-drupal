// JavaScript Document
//
// Copyright 2006 Nelson Daza. nelson.daza@gmail.com. All rights reserved.
// DOM HTML 
// ----------------------------------------------------
//
// Functions.js
//
//	version 2.1.8.4 major.minor[.revision[.build]]
//
	
	/* START Pop-up Windows Script */

	function popup ( url, name, width, height, posx, posy, features )	{
		if ( typeof( posx ) == 'undefined' )
			posx = 'center';
		if ( typeof( posy ) == 'undefined' )
			posy = 'middle';
		if ( typeof( features ) == 'undefined' )
			features = '';

		if ( posx.toLowerCase ( ) == 'center' )
			posx = ( screen.width - width ) / 2;
		else if ( posx.toLowerCase ( ) == 'right' )
			posx = (screen.width - width - 30);
		else if ( posx < 0 )
			posx = screen.width - width + posx;
		else 
			posx = 0;
	
		if ( posy.toLowerCase ( ) == 'middle' )
			posy = ( screen.height - height ) / 2;
		else if ( posy.toLowerCase ( ) == 'bottom' )
			posy = ( screen.height - height - 60 );
		else if ( posy < 0 )
			posx = screen.height - height - posy - 30;
		else 
			posy = 0;
	
		if ( typeof( name ) == 'undefined' || typeof( width ) == 'undefined' || typeof( height ) == 'undefined' )
			return open( url );
		else
			return open( url, name, 'width=' + width + ',height=' + height + ',screenX=' + posx + ',left=' + posx + ',screenY=' + posy + ',top=' + posy + ',' + features );
	}
	
	/* END Pop-up Windows Script */

	function validateEmail ( email )	{
		var pos = 0;
		if ( email.length > 7 && email.indexOf ( ' ', 0 ) == -1 )	{
			pos = email.indexOf ( '@', 0 );
			if ( pos > 2 && email.indexOf ( '@', pos ) && email.indexOf ( '.', pos ) > ( pos + 2 ) )	{
				pos = email.indexOf ( '.', pos );
				if ( pos > -1 && pos < email.length - 2 )
					return true;
			}
		}			
		return false;
	}

	var font_size = 9;
	var MAX = 17;
	var MIN = 11;
	
	function changeFont( num )	{
		font_size += num;
		if( font_size > MAX )
			font_size = MAX;
		if( font_size < MIN )
			font_size = MIN;
		 document.getElementsByTagName( 'body' )[0].style.fontSize = font_size + 'px';
	}

	function toObject ( something )	{
		if ( typeof( something ) == 'string' )
			return document.getElementById ( something );
		if ( typeof( something.nodeName ) != 'undefined' )
			return something;
		return null;
	}
	
	function jumpTo ( url )	{
		document.location.href = url;
	}
	
	function hideElement ( something )	{
		something = toObject ( something );
		if ( something )	{
			something.style.visibility = 'hidden';
			something.style.display = 'none';
		}
	}
	
	function showElement ( something )	{
		something = toObject ( something );
		if ( something )	{
			something.style.visibility = 'visible';
			something.style.display = 'block';
		}
	}
	
	function changeVisibility ( something )	{
		something = toObject ( something );
		if ( something )	{
			if ( something.style.visibility == 'visible' )
				hideElement ( something );
			else
				showElement ( something );
		}
	}
	
	function setElementPosition( something, posx, posy, type )	{
		something = toObject( something );
		if( !type )
			type = 'absolute';
		something.style.position = type;
		something.style.left = posx + 'px';
		something.style.top = posy + 'px';
	}
	
	function isDate ( year, month, day )	{
		if ( year.toString().length == 0 )
			return false;
		if ( day == null )	{
			month = ( month == null ) ? '-' : month;
			if ( year.toString().indexOf( month ) == -1 )
				return false;
			
			var arr = year.toString().split( month );
			if ( arr.length != 3 )
				return false;
			year = arr[0];
			month = arr[1];
			day = arr[2];
		}
		month = month - 1;  // javascript month range : 0- 11
		var tempDate = new Date ( year, month, day );
		var nyear = ( tempDate.getYear ( ) < 1000 ) ? tempDate.getYear ( ) + 1900 : tempDate.getYear ( )
		
		return ( ( nyear == year ) && ( month == tempDate.getMonth ( ) ) && ( day == tempDate.getDate ( ) ) );
	}
	
	function imageChange ( image, source )	{
		image = toObject ( image );
		if ( image )
			image.src = source;
	}
	
	function isAlphaNumeric( text, add )	{
		var regExp = new RegExp( "[^a-no-z0-9_" + ( add ? add : "" ) + "]", "gi" );
		return !regExp.test( text );
	}
	
	function isAlpha( text, add )	{
		var regex = new RegExp( "^[A-Za-z" + add + "]+$" );
		if( regex.test( text ) )
			return true;
		return false;
	}
	
	function isNumeric( text )	{
		var regex = new RegExp( "^[0-9" + add + "]+$" );
		if( regex.test( text ) )
			return true;
		return false;
	}
	
	function checkMaxChars( something, maxChars ){
		something = toObject ( something );
		if ( something && something.value.length > maxChars )
			something.value = something.value.substring( 0, maxChars );
	}
	
	function innerChange ( something, child )	{
		something = toObject ( something );
		if ( something )	{
			while ( something.hasChildNodes( ) )
				something.removeChild( something.firstChild );
			if ( typeof ( text ) == 'string' )
				something.appendChild( document.createTextNode( child ) )
			else
				something.appendChild( child )
		}
	}
	
	function bookMark ( value )	{
		var bookData = new Array ( );
		bookData = value.split ( '|' );
		if ( document.all )
			window.external.AddFavorite ( bookData[0], bookData[1] );
		else
			alert( 'Lo Sentimos, los usuarios de Netscape o Mozilla deben agregar a \nfavoritos manualmente desde el menu o haciendo uso de <Ctrl-D>' );
	}

	/**
	 * DOM view 
	**/
	function removeElement( something )	{
		something = toObject( something );
		something.parentNode.removeChild( something );
	}
	function clearElement( something )	{
		something = toObject( something );
		something.innerHTML = '';
	}
	function hideElement ( something )	{
		something = toObject ( something );
		if ( something )	{
			something.style.visibility = 'hidden';
			something.style.display = 'none';
		}
	}
	function showElement ( something )	{
		something = toObject ( something );
		if ( something )	{
			something.style.visibility = 'visible';
			something.style.display = 'block';
		}
	}
	function changeVisibility ( something )	{
		something = toObject ( something );
		if ( something )	{
			if ( something.style.visibility == 'visible' )
				hideElement ( something );
			else
				showElement ( something );
		}
	}
	
	function setElementPosition( something, posx, posy, type )	{
		something = toObject( something );
		if( !type )
			type = 'absolute';
		something.style.position = type;
		something.style.left = posx + 'px';
		something.style.top = posy + 'px';
	}
	
	function setElementOpacity ( something, opacity )	{
		var old = something;
		something = toObject( something );
		if( !something )
			alert( something + " " + old );

		if( opacity < 0 )
			opacity = 0;
		else if( opacity > 1 )
			opacity /= 100;

		if( document.all )
			something.style.filter = 'alpha(opacity=' + ( opacity * 100 ) + ')';
		else
			something.style.MozOpacity = opacity;
		something.style.opacity = opacity;
	}
	
	String.prototype.trim = function ( )	{
		return this.replace( /^\s+|\s+$/g, '' );
	}
	String.prototype.rtrim = function ( )	{
		return this.replace( /\s+$/, '' );
	}
	String.prototype.ltrim = function ( )	{
		return this.replace( /^\s+/, '' );
	}
/**
 * Dom Positions
**/
	function getAbsolutePosition( something )	{
		something = toObject( something );
		var pos = { x: something.offsetLeft, y: something.offsetTop };
		if ( something.offsetParent )	{
			var tmp = getAbsolutePosition( something.offsetParent );
			pos.x += tmp.x;
			pos.y += tmp.y;
		}
		return pos;
	}
  
	function getRelativePosition( something )	{
		something = toObject( something );
		return { x:Number( something.style.left.replace( "px", "" ) ), y: Number( something.style.top.replace( "px", "" ) ) };
	}
  
  	function getRelativeCoordinates( event, something )	{
		something = toObject( something );
		var x, y;
		event = event || window.event;
		var el = event.target || event.srcElement;
		if ( !window.opera && typeof event.offsetX != 'undefined' )	{
			// Use offset coordinates and find common offsetParent
			var pos = { x: event.offsetX, y: event.offsetY };
			// Send the coordinates upwards through the offsetParent chain.
			var e = el;
			while (e) {
				e.mouseX = pos.x;
				e.mouseY = pos.y;
				pos.x += e.offsetLeft;
				pos.y += e.offsetTop;
				e = e.offsetParent;
			}
			// Look for the coordinates starting from the reference element.
			var e = something;
			var offset = { x: 0, y: 0 }
			while ( e )	{
				if ( typeof e.mouseX != 'undefined' )	{
					x = e.mouseX - offset.x;
					y = e.mouseY - offset.y;
					break;
				}
				offset.x += e.offsetLeft;
				offset.y += e.offsetTop;
				e = e.offsetParent;
			}
			// Reset stored coordinates
			e = el;
			while ( e )	{
				e.mouseX = undefined;
				e.mouseY = undefined;
				e = e.offsetParent;
			}
		}
		else {
			// Use absolute coordinates
			var pos = getAbsolutePosition( something );
			x = event.pageX - pos.x;
			y = event.pageY - pos.y;
		}
		// Subtract distance to middle
		return { x: x, y: y };
	}
	
/**
 * Dom sizes 
**/
	function getElementDimensions( something )	{
		return {'height': getElementHeight( something ), 'width': getElementWidth( something ) };
	}
	
	function getElementWidth ( something, includePadding, includeBorder )	{
		var width = 0;
		something = toObject( something );
		
		if ( window.getComputedStyle )	{ // FF, Safari, Opera
			var style = document.defaultView.getComputedStyle( something , null );
			if ( style.getPropertyValue( "display" ) === "none" )
				return 0;
			width = parseInt( style.getPropertyValue( "width" ) );
			
			if ( /opera/i.test( navigator.userAgent ) )	{
				// opera includes the padding and border when reporting the width/height - subtract that out
				width -= parseInt( style.getPropertyValue( "padding-left" ) );
				width -= parseInt( style.getPropertyValue( "padding-right" ) );
				width -= parseInt( style.getPropertyValue( "border-left-width" ) );
				width -= parseInt( style.getPropertyValue( "border-right-width" ) );
			}
			
			if ( includePadding ) {
				width += parseInt( style.getPropertyValue( "padding-left" ) );
				width += parseInt( style.getPropertyValue( "padding-right") );
			}
			
			if ( includeBorder ) {
				width += parseInt( style.getPropertyValue( "border-left-width" ) );
				width += parseInt( style.getPropertyValue( "border-right-width" ) );
			}
		}
		else	{ // IE
			if ( something.currentStyle["display"] === "none" )
				return 0;
			var bRegex = /thin|medium|thick/; // regex for css border width keywords
			width = something.offsetWidth; // currently the width including padding + border
			
			if ( !includeBorder )	{
				var borderLeftCSS = something.currentStyle["borderLeftWidth"];
				var borderRightCSS = something.currentStyle["borderRightWidth"];
				var temp = document.createElement( "div" );
				if ( something.offsetWidth > something.clientWidth && something.currentStyle["borderLeftStyle"] !== "none" )	{
					if ( !bRegex.test( borderLeftCSS ) )	{
						temp.style.width = borderLeftCSS;
						something.parentNode.appendChild( temp );
						width -= Math.round( temp.offsetWidth );
						something.parentNode.removeChild( temp );
					}
					else	{
						temp.style.width = "10px";
						temp.style.border = borderLeftCSS + " " + something.currentStyle["borderLeftStyle"] + " #000000";
						something.parentNode.appendChild( temp );
						width -= Math.round( ( temp.offsetWidth - 10 ) / 2 );
						something.parentNode.removeChild( temp );
					}
	
					if ( !bRegex.test( borderRightCSS ) )	{
						temp.style.width = borderRightCSS;
						something.parentNode.appendChild( temp );
						width -= Math.round( temp.offsetWidth );
						something.parentNode.removeChild( temp );
					}
					else	{
						temp.style.width = "10px";
						temp.style.border = borderRightCSS + " " + something.currentStyle["borderRightStyle"] + " #000000";
						something.parentNode.appendChild(temp);
						width -= Math.round( ( temp.offsetWidth - 10 ) / 2 );
						something.parentNode.removeChild( temp );
					}
				}
			}
			
			if ( !includePadding )	{
				var paddingLeftCSS = something.currentStyle["paddingLeft"];
				var paddingRightCSS = something.currentStyle["paddingRight"];
				var temp = document.createElement("div");
				temp.style.width = paddingLeftCSS;
				something.parentNode.appendChild( temp );
				width -= Math.round( temp.offsetWidth );
				temp.style.width = paddingRightCSS;
				width -= Math.round( temp.offsetWidth );
				something.parentNode.removeChild( temp );
			}
		}
		
		return width;
	}
	
	var getElementHeight = function ( something, includePadding, includeBorder )	{
		var height = 0;
		something = toObject( something );
		if ( window.getComputedStyle )	{ // FF, Safari, Opera
			var style = document.defaultView.getComputedStyle( something, null );
			if ( style.getPropertyValue( "display" ) === "none" )
				return 0;
			height = parseInt( style.getPropertyValue( "height" ) );
			
			if ( /opera/i.test( navigator.userAgent ) )	{
				// opera includes the padding and border when reporting the width/height - subtract that out
				height -= parseInt( style.getPropertyValue( "padding-top" ) );
				height -= parseInt( style.getPropertyValue( "padding-bottom" ) );
				height -= parseInt( style.getPropertyValue( "border-top-width" ) );
				height -= parseInt( style.getPropertyValue( "border-bottom-width" ) );
			}
			
			if ( includePadding ) {
				height += parseInt( style.getPropertyValue( "padding-top" ) );
				height += parseInt( style.getPropertyValue( "padding-bottom" ) );
			}
			
			if ( includeBorder )	{
				height += parseInt( style.getPropertyValue( "border-top-width" ) );
				height += parseInt( style.getPropertyValue( "border-bottom-width" ) );
			}
		}
		else	{ // IE
			if ( something.currentStyle["display"] === "none" )
				return 0;
			var bRegex = /thin|medium|thick/; // regex for css border width keywords
			height = something.offsetHeight; // currently the height including padding + border
		
			if ( !includeBorder )	{
				var borderTopCSS = something.currentStyle["borderTopWidth"];
				var borderBottomCSS = something.currentStyle["borderBottomWidth"];
				var temp = document.createElement( "div" );
				if ( something.offsetHeight > something.clientHeight && something.currentStyle["borderTopStyle"] !== "none" )	{
					if ( !bRegex.test( borderTopCSS ) )	{
						temp.style.width = borderTopCSS;
						something.parentNode.appendChild( temp );
						height -= Math.round( temp.offsetWidth );
						something.parentNode.removeChild( temp );
					}
					else	{
						temp.style.width = "10px";
						temp.style.border = borderTopCSS + " " + something.currentStyle["borderTopStyle"] + " #000000";
						something.parentNode.appendChild( temp );
						height -= Math.round( ( temp.offsetWidth - 10 ) / 2 );
						something.parentNode.removeChild( temp );
					}
				}
				if ( something.offsetHeight > something.clientHeight && something.currentStyle["borderBottomStyle"] !== "none" )	{
					if ( !bRegex.test( borderBottomCSS ) )	{
						temp.style.width = borderBottomCSS;
						something.parentNode.appendChild( temp );
						height -= Math.round( temp.offsetWidth );
						something.parentNode.removeChild( temp );
					}
					else	{
						temp.style.width = "10px";
						temp.style.border = borderBottomCSS + " " + something.currentStyle["borderBottomStyle"] + " #000000";
						something.parentNode.appendChild( temp );
						height -= Math.round( ( temp.offsetWidth - 10 ) / 2 );
						something.parentNode.removeChild( temp );
					}
				}
			}
		
			if ( !includePadding )	{
				var paddingTopCSS = something.currentStyle["paddingTop"];
				var paddingBottomCSS = something.currentStyle["paddingBottom"];
				var temp = document.createElement("div");
				temp.style.width = paddingTopCSS;
				something.parentNode.appendChild( temp );
				height -= Math.round( temp.offsetWidth );
				temp.style.width = paddingBottomCSS;
				height -= Math.round( temp.offsetWidth );
				something.parentNode.removeChild( temp );
			}
		}
		
		return height;
	}
	
/* COOKIES */
	function setCookie( name, value, expires, path, domain, secure )	{
		expires = ( expires ? expires : 1000 ) * 1000 * 60 * 60 * 24;
		var today = new Date( );
		var expires_date = new Date( today.getTime( ) + expires );
		var cookieString = name + "=" + escape( value ) + 
		   ( ( expires ) ? ";expires=" + expires_date.toGMTString( ) : "" ) + 
		   ( ( path ) ? ";path=" + path : "" ) + 
		   ( ( domain ) ? ";domain=" + domain : "" ) + 
		   ( ( secure ) ? ";secure" : "" );
		document.cookie = cookieString;
	}

	function getCookie( name )	{ 
		var start = document.cookie.indexOf( name + "=" );
		var len = start + name.length + 1;
		if ( ( !start ) && ( name != document.cookie.substring( 0, name.length ) ) )
			return null; 
		if ( start == -1 )
			return null; 
		var end = document.cookie.indexOf( ";", len );
		if ( end == -1 )
			end = document.cookie.length;
		return unescape( document.cookie.substring( len, end ) );
	}
	
/* EVENTS */
	function addEvent( obj, evtType, func, useCapture )	{
		obj = toObject( obj );
		if ( obj.addEventListener )	{
			obj.addEventListener( evtType, func, useCapture );
			return true;
		}
		else if ( obj.attachEvent )
			return obj.attachEvent( "on" + evtType, func );
		else
			alert( "Handler could not be attached." );
		return false;
	} 

	function removeEvent( obj, evtType, func, useCapture )	{
		if ( obj.removeEventListener )	{
			obj.removeEventListener( evtType, func, useCapture );
			return true;
		}
		else if ( obj.detachEvent )
			return obj.detachEvent( "on" + evtType, func );
		else
			alert( "Handler could not be removed." );
		return false;
	} 

	function stopProp( evt )	{
		if ( evt && evt.stopPropogation )
			evt.stopPropogation( );
		else if ( window.event && window.event.cancelBubble )
			window.event.cancelBubble = true;
	}

	function stopDef( evt )	{
		if ( evt && evt.preventDefault )
			evt.preventDefault( );
		else if ( window.event && window.event.returnValue )
			window.eventReturnValue = false;
	} 

/* STATES */
	function whenFocusOn( elem )	{
		if( !elem.normalClassName )	{
			elem.normalClassName = elem.className.replace( / ?focused$/, '' );
		}
		elem.className += ( elem.className ? ' ' : '' ) + 'focused';
		addEvent( elem, 'blur', function( evt ) { elem = ( evt.srcElement ? evt.srcElement : evt.target ); whenUnfocusOn( elem ) } );
	}
	function whenUnfocusOn( elem )	{
		elem.className = elem.normalClassName;
	}

/* TOOLTIPS */
	function createToolTip( elem, text, staticT, error )	{
		elem = toObject( elem );
		if( elem )	{
			elem.style.cursor = 'pointer';
			elem.toolTip = text;
			if( !staticT )	{
				try	{
					addEvent( elem, 'mouseover', elem.showToolTip );
					addEvent( elem, 'mouseout', function( )	{ 
							clearTimeout( window.ttInterval );
							window.ttInterval = setTimeout( hideToolTipZone, 1000 ); 
						}
					);
				}
				catch( e )	{
					alert( 'No es posible registrar los evento "over/out" para este elemento.' );
				}
				elem.showToolTip = function ( evt )	{
					elem = ( evt.srcElement ? evt.srcElement : evt.target );
					if( elem )
						showToolTipZone( elem, false );
				}
			}
			else	{
				elem.focus( );
				showToolTipZone( elem, error );
				try	{
					addEvent( elem, 'change', hideToolTipZone );
				}
				catch( e )	{
					;
				}
			}
		}
	}

	function showToolTipZone( elemTip, error )	{
		clearTimeout( window.ttInterval );
		createToolTipZone( );
		var elem = toObject( 'toolTipZone' );
		var content = toObject( 'toolTipContent' );
		content.className = ( error ? 'error' : '' );
			
		var arrow = toObject( 'toolTipArrow' );
		elemTip.toolTip = ( elemTip.toolTip ? elemTip.toolTip : elemTip.title );
		elemTip.title = '';
		content.innerHTML = elemTip.toolTip;
		var pos = getAbsolutePosition( elemTip );
		var tipDims = getElementDimensions( elemTip );
		elem.style.width = 'auto';
		showElement( elem );
		var dims = getElementDimensions( elem );
		if( dims.width > 250 )	{
			elem.style.width = '250px';
			dims = getElementDimensions( elem );
		}
		arrow.style.width = dims.width;
		elem.style.left = ( pos.x + 5 + tipDims.width ) + 'px';
		elem.style.top = ( pos.y ) + 'px';
	}
	
	function hideToolTipZone( )	{
		createToolTipZone( );
	}
	
	function createToolTipZone( )	{
		clearTimeout( window.ttInterval );
		var elem = toObject( 'toolTipZone' );
		var content = arrow = null;
		if( !elem )	{
			elem = document.createElement( 'div' );
			document.body.insertBefore( elem, document.body.firstChild );
			elem.id = 'toolTipZone';
			
			arrow = document.createElement( 'div' );
			arrow.id = 'toolTipArrow';
			elem.appendChild( arrow );
			
			content = document.createElement( 'div' );
			content.id = 'toolTipContent';
			content.style.cursor = 'default';

			addEvent( content, 'mouseover', function( )	{ clearTimeout( window.ttInterval ); } );
			addEvent( content, 'mouseout', function( )	{ 
					clearTimeout( window.ttInterval );
					window.ttInterval = setTimeout( hideToolTipZone, 1000 );
				}
			);
			addEvent( content, 'click', hideToolTipZone );
			
			elem.appendChild( content );
		}
		else
			content = toObject( 'toolTipContent' );
		
		hideElement( elem );
		content.innerHTML = '';
	}

/* HTM POPUP */
	function popupHTML( ttitle, ttext )	{
		var mPHolder = document.getElementById( 'mPHolder' );
		var title = content = arrow = null;
		if( !mPHolder )	{
			mPHolder = document.createElement( 'div' );
			mPHolder.id = 'mPHolder';
			mPHolder.style.position = 'absolute';
			mPHolder.style.top = '0px';
			mPHolder.style.left = '0px';
			mPHolder.style.height = '100%';
			mPHolder.style.width = '100%';
			document.body.appendChild( mPHolder, document.body.firstChild );
			
			var mPHolderBack = document.createElement( 'div' );
			mPHolderBack.id = 'mPHolderBack';
			setElementOpacity( mPHolderBack, 0.6 );
			mPHolderBack.style.position = 'absolute';
			mPHolderBack.style.top = '0px';
			mPHolderBack.style.left = '0px';
			mPHolderBack.style.height = '100%';
			mPHolderBack.style.width = '100%';
			mPHolder.appendChild( mPHolderBack );
			
			var mPHolderHolder = document.createElement( 'div' );
			mPHolderHolder.id = 'mPHolderHolder';
			mPHolderHolder.style.position = 'absolute';
			mPHolderHolder.style.top = '0px';
			mPHolderHolder.style.left = '0px';
			mPHolderHolder.style.height = '100%';
			mPHolderHolder.style.width = '100%';
			mPHolder.appendChild( mPHolderHolder);
			
			var mainTable = document.createElement( 'table' );
			mainTable.cellPadding = mainTable.cellSpacing = 0;
			mainTable.style.height = '100%';
			mainTable.style.width = '100%';
			mPHolderHolder.appendChild( mainTable );
			
			var mainRow = mainTable.insertRow( 0 );
			var mainCell = mainRow.insertCell( 0 );
			mainCell.id = 'mPCellHolder';
			addEvent( mainCell, 'click', function ( evt )	{
					elem = ( evt.srcElement ? evt.srcElement : evt.target );
					if( elem && elem.id == 'mPCellHolder' )
						popupHTMLClose( );
				}
			);
			
				var borderTable = document.createElement( 'table' );
				borderTable.cellPadding = borderTable.cellSpacing = 0;
				borderTable.style.width = '1050px';
				borderTable.style.height = '730px'; 
				borderTable.align = 'center';
				mainCell.appendChild( borderTable );
				//--R
				var borderRow = borderTable.insertRow( 0 );
				var borderCell = borderRow.insertCell( 0 );
					
					elem = document.createElement( 'div' );
					elem.id = 'pHTMLHolder';
					borderCell.appendChild( elem );
					
					button = document.createElement( 'div' );
					button.id = 'pHTMLButton';
					elem.appendChild( button );

					a = document.createElement( 'div' );
					a.onclick = popupHTMLClose;
					button.appendChild( a ); 
					
					title = document.createElement( 'div' );
					title.id = 'pHTMLTitle';
					elem.appendChild( title );
					
					content = document.createElement( 'div' ); 
					content.id = 'pHTMLContent'; 
					content.style.width = '1050px';
					content.style.height = '730px';
					elem.appendChild( content );
					
					var down = document.createElement( 'div' );
					down.id = 'pHTMLDown';
					elem.appendChild( down );
		}
		
		title = toObject( 'pHTMLTitle' );
		content = toObject( 'pHTMLContent' );
		if( !ttext )
			ttext = '<div class="pHTMLWait"></div>';
		content.innerHTML = ttext;
		title.innerHTML = ttitle;
		showElement( mPHolder );
		
	}

/* HTM POPUP Expovivendo*/
	function popupHTMLExpo( ttitle, ttext )	{
		var mPHolder = document.getElementById( 'mPHolder' );
		var title = content = arrow = null;
		if( !mPHolder )	{
			mPHolder = document.createElement( 'div' );
			mPHolder.id = 'mPHolder';
			mPHolder.style.position = 'absolute';
			mPHolder.style.top = '0px';
			mPHolder.style.left = '0px';
			mPHolder.style.height = '100%';
			mPHolder.style.width = '100%';
			document.body.appendChild( mPHolder, document.body.firstChild );
			
			var mPHolderBack = document.createElement( 'div' );
			mPHolderBack.id = 'mPHolderBack';
			setElementOpacity( mPHolderBack, 0.6 );
			mPHolderBack.style.position = 'absolute';
			mPHolderBack.style.top = '0px';
			mPHolderBack.style.left = '0px';
			mPHolderBack.style.height = '100%';
			mPHolderBack.style.width = '100%';
			mPHolder.appendChild( mPHolderBack );
			
			var mPHolderHolder = document.createElement( 'div' );
			mPHolderHolder.id = 'mPHolderHolder';
			mPHolderHolder.style.position = 'absolute';
			mPHolderHolder.style.top = '0px';
			mPHolderHolder.style.left = '0px';
			mPHolderHolder.style.height = '100%';
			mPHolderHolder.style.width = '100%';
			mPHolder.appendChild( mPHolderHolder);
			
			var mainTable = document.createElement( 'table' );
			mainTable.cellPadding = mainTable.cellSpacing = 0;
			mainTable.style.height = '100%';
			mainTable.style.width = '100%';
			mPHolderHolder.appendChild( mainTable );
			
			var mainRow = mainTable.insertRow( 0 );
			var mainCell = mainRow.insertCell( 0 );
			mainCell.id = 'mPCellHolder';
			addEvent( mainCell, 'click', function ( evt )	{
					elem = ( evt.srcElement ? evt.srcElement : evt.target );
					if( elem && elem.id == 'mPCellHolder' )
						popupHTMLClose( );
				}
			);
			
				var borderTable = document.createElement( 'table' );
				borderTable.cellPadding = borderTable.cellSpacing = 0;
				borderTable.style.width = '900px';
				borderTable.style.height = '700px';
				borderTable.align = 'center';
				mainCell.appendChild( borderTable );
				//--R
				var borderRow = borderTable.insertRow( 0 );
				var borderCell = borderRow.insertCell( 0 );
					
					elem = document.createElement( 'div' );
					elem.id = 'pHTMLHolder';
					borderCell.appendChild( elem );
					
					button = document.createElement( 'div' );
					button.id = 'pHTMLButton';
					elem.appendChild( button );

					a = document.createElement( 'div' );
					a.onclick = popupHTMLClose;
					button.appendChild( a ); 
					
					title = document.createElement( 'div' );
					title.id = 'pHTMLTitle';
					elem.appendChild( title );
					
					content = document.createElement( 'div' ); 
					content.id = 'pHTMLContent'; 
					content.style.width = '900px'; 
					content.style.height = '700px';
					elem.appendChild( content );
					
					var down = document.createElement( 'div' );
					down.id = 'pHTMLDown';
					elem.appendChild( down );
		}
		
		title = toObject( 'pHTMLTitle' );
		content = toObject( 'pHTMLContent' );
		if( !ttext )
			ttext = '<div class="pHTMLWait"></div>';
		content.innerHTML = ttext;
		title.innerHTML = ttitle;
		showElement( mPHolder );
		
	}

	function popupHTMLRevista( ttitle, ttext )	{
		var mPHolder = document.getElementById( 'mPHolder' );
		var title = content = arrow = null;
		if( !mPHolder )	{
			mPHolder = document.createElement( 'div' );
			mPHolder.id = 'mPHolder';
			mPHolder.style.position = 'absolute';
			mPHolder.style.top = '0px';
			mPHolder.style.left = '0px';
			mPHolder.style.height = '100%';
			mPHolder.style.width = '100%';
			document.body.appendChild( mPHolder, document.body.firstChild );
			
			var mPHolderBack = document.createElement( 'div' );
			mPHolderBack.id = 'mPHolderBack';
			setElementOpacity( mPHolderBack, 0.6 );
			mPHolderBack.style.position = 'absolute';
			mPHolderBack.style.top = '0px';
			mPHolderBack.style.left = '0px';
			mPHolderBack.style.height = '100%';
			mPHolderBack.style.width = '100%';
			mPHolder.appendChild( mPHolderBack );
			
			var mPHolderHolder = document.createElement( 'div' );
			mPHolderHolder.id = 'mPHolderHolder';
			mPHolderHolder.style.position = 'absolute';
			mPHolderHolder.style.top = '0px';
			mPHolderHolder.style.left = '0px';
			mPHolderHolder.style.height = '100%';
			mPHolderHolder.style.width = '100%';
			mPHolder.appendChild( mPHolderHolder);
			
			var mainTable = document.createElement( 'table' );
			mainTable.cellPadding = mainTable.cellSpacing = 0;
			mainTable.style.height = '100%';
			mainTable.style.width = '100%';
			mPHolderHolder.appendChild( mainTable );
			
			var mainRow = mainTable.insertRow( 0 );
			var mainCell = mainRow.insertCell( 0 );
			mainCell.id = 'mPCellHolder';
			addEvent( mainCell, 'click', function ( evt )	{
					elem = ( evt.srcElement ? evt.srcElement : evt.target );
					if( elem && elem.id == 'mPCellHolder' )
						popupHTMLClose( );
				}
			);
			
				var borderTable = document.createElement( 'table' );
				borderTable.cellPadding = borderTable.cellSpacing = 0;
				borderTable.style.width = '900px';
				borderTable.style.height = '700px';
				borderTable.align = 'center';
				mainCell.appendChild( borderTable );
				//--R
				var borderRow = borderTable.insertRow( 0 );
				var borderCell = borderRow.insertCell( 0 );
					
					elem = document.createElement( 'div' );
					elem.id = 'pHTMLHolder';
					borderCell.appendChild( elem );
					
					button = document.createElement( 'div' );
					button.id = 'pHTMLButton';
					elem.appendChild( button );

					a = document.createElement( 'div' );
					a.onclick = popupHTMLClose;
					button.appendChild( a ); 
					
					title = document.createElement( 'div' );
					title.id = 'pHTMLTitle';
					elem.appendChild( title );
					
					content = document.createElement( 'div' ); 
					content.id = 'pHTMLContent'; 
					content.style.width = '900px';
					content.style.height = '700px';
					elem.appendChild( content );
					
					var down = document.createElement( 'div' );
					down.id = 'pHTMLDown';
					elem.appendChild( down );
		}
		
		title = toObject( 'pHTMLTitle' );
		content = toObject( 'pHTMLContent' );
		if( !ttext )
			ttext = '<div class="pHTMLWait"></div>';
		content.innerHTML = ttext;
		title.innerHTML = ttitle;
		showElement( mPHolder );
		
	}

	function popupHTMLClose( )	{
		var elem = document.getElementById( 'mPHolder' );
		if( elem )
			hideElement( elem );
		return false;
	}	
/**
 * DEBUG
**/
	function objectToString ( obj, ident, maxlevel )	{
		var text = "";
		var tab = "";
		ident = ( ident ? Number( ident ): 0 );
		maxlevel = ( maxlevel ? Number( maxlevel ) : 7 );
		
		if ( maxlevel == -1 )
			return "";
		
		for ( var c = 0; c < ident; c ++ )
			tab += "  ";
		text += ( ( obj && typeof( obj ) != "string" && typeof( obj.length ) != "undefined" ) ? 'array[' + obj.length + ']' : typeof( obj ) ) + " ";
	
		if( typeof( obj ) == 'object' )	{
			for ( subObj in obj )
				text += "\n" + tab + "  " + subObj + " => " + objectToString ( obj[subObj], ident + 1, maxlevel - 1 );
		}
		else
			text += ( typeof( obj ) == "string" ? "'" + obj + "'" : obj );
		return text;
	}

	function trace( text, clear )	{
		var elem = document.getElementById( 'trace_element' );
		if( !elem )	{
			elem = document.createElement( 'div' );
			elem.id = 'trace_element';
			elem.className = 'text table_border';
			elem.style.padding = '5px';
			elem.style.height = 100;
			elem.style.position = 'absolute';
			elem.style.top = "0px";
			elem.style.left = "0px";
			elem.style.overflow = "auto";
			document.body.appendChild( elem );
		}
		if( console && console.info )
			console.info( text );
		else
			elem.innerHTML = ( clear ? '' : elem.innerHTML ) + '<br /><pre>' + objectToString( text ) + '</pre>';
	}
	
/* GENERAL */
	
	function setHover(nav) {
		if( ( navigator.userAgent.indexOf( 'Win' ) < 0 ) || navigator.appVersion.substr(22,3) == "" || navigator.appVersion.substr(22,3) >= "8.0" )	{
			return;
		}
		
		var ieULs = nav.getElementsByTagName('ul');
		if (navigator.appVersion.substr(22,3)!="5.0" ) {
			// IE script to cover <select> elements with <iframe>s
			for (j=0; j<ieULs.length; j++) {
				var ieMat=document.createElement('iframe');
				if(document.location.protocol == "https:")
					ieMat.src="//0";
				else if(window.opera != "undefined")
					ieMat.src="";
				else
					ieMat.src="javascript:false";
				ieMat.scrolling="no";
				ieMat.frameBorder="0";
				ieMat.style.width=ieULs[j].offsetWidth+"px";
				ieMat.style.height=ieULs[j].offsetHeight+"px";
				ieMat.style.zIndex="-1";
				ieULs[j].insertBefore(ieMat, ieULs[j].childNodes[0]);
				ieULs[j].style.zIndex="101";
			}
			// IE script to change class on mouseover
			var ieLIs = nav.getElementsByTagName('li');
			for (var i=0; i<ieLIs.length; i++) if (ieLIs[i]) {
				// Add a sfhover class to the li.
				ieLIs[i].onmouseover=function() {
					if(!/\bsfhover\b/.test(this.className))
						this.className+=" sfhover";
				}
				ieLIs[i].onmouseout=function( evt ) {
				//	var event = ( evt ? evt : window.event );
					//if( event && this.contains && !this.contains(event.toElement))
						this.className=this.className.replace(' sfhover', '');
				}
			}
		} else {
			// IE 5.0 doesn't support iframes so hide the select statements on hover and show on mouse out.
			// IE script to change class on mouseover
			var ieLIs = document.getElementById('nav').getElementsByTagName('li');
			for (var i=0; i<ieLIs.length; i++) if (ieLIs[i]) {
				ieLIs[i].onmouseover=function() {this.className+=" sfhover";hideSelects();}
				ieLIs[i].onmouseout=function() {this.className=this.className.replace(' sfhover', '');showSelects()}
			}
		}
	}

	// If IE 5.0 hide and show the select statements.
	function hideSelects(){
		var oSelects=document.getElementsByTagName("select");
		for(var i=0;i<oSelects.length;i++)
			oSelects[i].className+=" hide";
	}

	function showSelects(){
		var oSelects=document.getElementsByTagName("select");
		for(var i=0;i<oSelects.length;i++)
			oSelects[i].className=oSelects[i].className.replace(" hide","");
	}
/* END MENU */

/* IMAGE SCROLLER */ 
function ImageScroller( zonesHolder, zonesIndex, visibleZones, zoneWidth, leftButton, rightButton, totalZones, transition )	{
	this.holder = toObject( zonesHolder );
	this.zones = new Array( );
	this.zonesIndex = zonesIndex;
	this.actualZone = -1;
	this.transition = ( transition ? transition : 'easeOutQuad' );
	this.leftButton = toObject( leftButton );
	this.rightButton = toObject( rightButton );
	this.visibleZones = visibleZones;
	this.zoneWidth = zoneWidth;
	this.totalZones = totalZones;
	this.leftEdge = 0;

	this.onInit = function ( pos, selected ){ };
	this.onChange = function ( pos, selected ){ };
	
	this.init = function ( )	{
		if( !this.holder )
			return;
		
		if( this.totalZones > 0 )	{
			for( var c = 0; c < totalZones; c ++ )	{
				var zone = toObject( this.zonesIndex + '' + c );
				if( zone && zone.style )
					this.zones.push( zone );
			}
		}
		else	{
			var zone = this.holder.firstChild;
			while( zone )	{
				if( zone && zone.style )
					this.zones.push( zone );
				zone = zone.nextSibling;
			}
		}

		var rmiddle = Math.ceil( this.zones.length / 2 ) - 1;
		var centerPos = Math.floor( ( this.visibleZones - 1 ) / 2 ) * this.zoneWidth;

		for( var c = 0; c < rmiddle; c ++ )
			this.zones.unshift( this.zones.pop( ) );

		this.leftEdge = centerPos - ( rmiddle * this.zoneWidth );
		if( this.visibleZones < this.totalZones )	{
			this.leftButton.scroller = this;
			this.rightButton.scroller = this;
			addEvent( this.leftButton, 'click', this.moveRight );
			addEvent( this.rightButton, 'click', this.moveLeft );
		}
		else	{
			this.leftEdge = Math.round( ( this.visibleZones - this.zones.length ) * this.zoneWidth / 2 );
			hideElement( this.leftButton );
			hideElement( this.rightButton );
		}

		var posLeft = this.leftEdge;
		for( var c = 0; c < this.zones.length; c ++ )	{
			var zone = this.zones[c];
			this.onInit( zone.id.replace( this.zonesIndex, '' ), ( c == rmiddle || this.zones.length <= this.visibleZones ) );
			zone.style.left = posLeft + 'px';
			posLeft += this.zoneWidth;
		}
		this.actualZone = rmiddle;
	}

	this.move = function ( direction )	{

		direction = direction % 2;
		this.onChange( this.zones[this.actualZone].id.replace( this.zonesIndex, '' ), false );

		hideElement( this.leftButton );
		hideElement( this.rightButton );
		
		if( direction > 0 )	{ // Left
			var elem = this.zones.shift( );
			elem.style.left = this.leftEdge +  ( this.zones.length * this.zoneWidth ) + 'px';
			this.zones.push( elem );
		}
		else	{
			var elem = this.zones.pop( );
			elem.style.left = this.leftEdge + 'px';
			this.zones.unshift( elem );
		}

		this.onChange( this.zones[this.actualZone].id.replace( this.zonesIndex, '' ), true );
		
		var posLeft = this.leftEdge;
		for( var c = 0; c < this.zones.length; c ++ )	{
			var params = {
				suffix:{'left':'px'}, 
				transition: this.transition,
				time:.75,
				left:posLeft,
				onComplete: new Function ( "showElement( '" + this.leftButton.id + "' );showElement( '" + this.rightButton.id + "' );" )
			};
			JSTweener.addTween( this.zones[c].style, params );
			posLeft += this.zoneWidth;
		}
	}
	
	this.moveLeft = function( evt )	{
		var scroller = ( evt ? ( evt.srcElement ? evt.srcElement.scroller : evt.target.scroller ) : this );
		scroller.move( 1 );
	}

	this.moveRight = function( evt )	{
		var scroller = ( evt ? ( evt.srcElement ? evt.srcElement.scroller : evt.target.scroller ) : this );
		scroller.move( -1 );
	}

	return this;
}
/* END IMAGE SCROLLER */

	function inputFocus ( obj, def )	{
		if( obj && obj.value.trim( ) == def )
			obj.value = '';
	}
	
	function inputBlur ( obj, def )	{
		if( obj && obj.value.trim( ) == '' )
			obj.value = def;
	}
	
	window.executeScript = function(text) {
		var startPos = text.indexOf('<script');
		if (startPos >= 0)
			startPos = text.indexOf('>', startPos) + 1;
		while (startPos >= 0) {
			var endPos = text.indexOf('<\/script>', startPos);
			var script = text.substring(startPos, endPos);
			if (window.execScript)
				window.execScript(script);
			else
				window.eval(script);
			if (endPos > startPos) {
				startPos = text.indexOf('<script', endPos);
				if (startPos >= 0)
					startPos = text.indexOf('>', startPos) + 1;
			}
		}
	}

	function sendForm( formObject, idContent, mode ){
		var idcont = document.getElementById(idContent);
		var idform = document.getElementById(formObject);
		
		if ( idcont == undefined){
			alert ("Zona de Contenido no Existe");
			return;
		}
		
		if ( idform == undefined ){
			alert ("Formulario no Existe");
			return;
		}
				
		var cObj = null; 
		
		if( idform.enctype == "multipart/form-data" ){
			
			YAHOO.util.Connect.setForm(idform, true);
			
			var uploadHandler = {
				upload: function(o) {
					idcont.innerHTML = o.responseText;
					executeScript(o.responseText);
				}
			};
			
			cObj = YAHOO.util.Connect.asyncRequest('POST', idform.action, uploadHandler);
			
		}else{
			
			YAHOO.util.Connect.setForm(idform);
			
			var callback = {
			  success: function(o) {
				idcont.innerHTML = o.responseText;
				executeScript(o.responseText);
			  },
			  failure: function(o) {
				idcont.innerHTML = ( mode!='silent' ? 'Error en la Comunicacion.' : '' );
			  }
			};
			
			cObj = YAHOO.util.Connect.asyncRequest('POST', idform.action, callback);
		}
						
		mode != 'silent' ? idcont.innerHTML = "<img src='/site/images/loader.gif' border='0'>"
			: idcont.innerHTML = ' ';			
	}
	pos1 = 0;
	function moveCajasHome( direction, max1){
		max1 = max1 - 1;
		if ( direction == 'left' ) {
			if ( pos1 > 0 ) {
				$( "#cajas_home_content" ).animate( { "left" : "+=208px" }, "slow" );
				pos1--;
			} 
		} else {
			if ( pos1 < max1 ) {
				$( "#cajas_home_content" ).animate( { "left" : "-=208px" }, "slow" );
				pos1++;
			} 
		}
	}
	
	pos = 0;
	function moveConstructoraHome( direction, max){
		max = max - 1;
		if ( direction == 'left' ) {
			if ( pos > 0 ) {
				$( "#constrcutoras_home_content" ).animate( { "left" : "+=258px" }, "slow" );
				pos--;
			} 
		} else {
			if ( pos < max ) {
				$( "#constrcutoras_home_content" ).animate( { "left" : "-=258px" }, "slow" );
				pos++;
			} 
		}
	}
	
	pos2 = 0;
	function moveNews( direction, max){
		max = max - 1;
		if ( direction == 'left' ) {
			if ( pos2 > 0 ) {
				$( "#newsPageContent" ).animate( { "left" : "+=568px" }, "slow" );
				pos2--;
			} 
		} else {
			if ( pos2 < max ) {
				$( "#newsPageContent" ).animate( { "left" : "-=568px" }, "slow" );
				pos2++;
			} 
		}
	}

	actual = 0;
	pos3 = 0;
	function moveProjectsHomeImg( position, max ){
		for( i = pos3 ; i < position ; i++ ){
			moveProjectsHome( 'right', max )
		}
	}

	
	pos3 = 0;
	function moveProjectsHome( direction, max ){
		max = max - 1;
		if ( direction == 'left' ) {
			if ( pos3 > 0 ) {
				$( "#slide_home_destacados" ).animate( { "left" : "+=960px" }, "slow" );
				$( ".previews_content" ).animate( { "left" : "+=67px" }, "slow" );
				$( "#bk_" + ( pos3 ) ).css( "background-color", "#FFF" );
				$( "#bk_" + ( pos3 - 1 ) ).css( "background-color", "#C40000" );
				pos3--;
			} 
		} else {
			if ( pos3 < max ) {
				$( "#slide_home_destacados" ).animate( { "left" : "-=960px" }, "slow" );
				$( ".previews_content" ).animate( { "left" : "-=67px" }, "slow" );
				$( "#bk_" + ( pos3 ) ).css( "background-color", "#FFF" );
				$( "#bk_" + ( pos3 + 1 ) ).css( "background-color", "#C40000" );
				pos3++;
			} 
		}
	}
	 
	pos4 = 0;
	function moveProjectsDetail( direction, max ){
		max = max - 1;		
		if ( direction == 'left' ) {
			if ( pos4 > 0 ) {
				$( "#slideProjectContnt" ).animate( { "left" : "+=634px" }, "slow" );
				$( "#previews_content" ).animate( { "left" : "+=92px" }, "slow" );
				$( "#pj_" + ( pos4 ) ).css( "background-color", "#FFF" );
				$( "#pj_" + ( pos4 - 1 ) ).css( "background-color", "#C40000" );
				pos4--;
			} 
		} else {
			if ( pos4 < max ) {				
				$( "#slideProjectContnt" ).animate( { "left" : "-=634px" }, "slow" );				
				$( "#previews_content" ).animate( { "left" : "-=92px" }, "slow" );
				$( "#pj_" + ( pos4 ) ).css( "background-color", "#FFF" );
				$( "#pj_" + ( pos4 + 1 ) ).css( "background-color", "#C40000" );
				pos4++;
			} 
		}
	}
	
	function changeImg( id, j ){
		pos4Aux = pos4;
		direction = 'right';
		if( pos4Aux != id ){
			for( i=pos4Aux ; i < id ; i++ ){
				moveProjectsDetail( direction, j )
			}
		}
	}
	
	aux = "";
	function showImageTag (imgName, obj) {
		
		$( obj ).css( "background-position", "-67px" );
		
		img = '<img width="640" height="340" src="/tmp_img/' + imgName + '" border="0" />';
		div = '<div id="img_tags">' + img + '</div>';
		aux = $( "#zoom_content" ).html(  );
		$( "#zoom_content" ).html( img );
		
	}
	
	function hiddeImageTag( obj ){
		
		$( obj ).css( "background-position", "-37px" );
		$( "#zoom_content" ).html( aux );
		
	}
