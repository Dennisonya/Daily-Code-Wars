//Implement a function that meets these 
//requirements:
//Accepts a case-insensitive hexadecimal 
//color string as its parameter (ex. "#FF9933" //or "#ff9933")
//Returns a Map<String, int> with the
 //structure {r: 255, g: 153, b: 51} where r, g,
  //and b range from 0 through 255
//Note: your implementation does not need
//to support the shorthand form of 
//hexadecimal notation (ie "#FFF")
//(5kyu) Convert A Hex String To RGB

function hexStringToRGB(hexString) {
 
    let rgb = { r:"" ,g:"",b:""}
    
    
   //remove the beginning  # if present
   if(hexString.startsWith('#')){
     hexString = hexString.slice(1)
   }
     //convert the hexadecimal to base 10 numbers
    rgb.r = parseInt(hexString.slice(0,2),16)
    rgb.g = parseInt(hexString.slice(2,4), 16)
    rgb.b = parseInt(hexString.slice(4,6),16)
    
    return rgb
  }