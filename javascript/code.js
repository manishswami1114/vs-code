var grade='C';  
var result = 0;  
switch(grade)  
{  
case 'A':  
        result+=10;  
case 'B':  
        result+=9;  
case 'C':  
        result+=8;  
case 'D':
        result+=6;  
default:  
        result+=4;  
}  
document.write(result);