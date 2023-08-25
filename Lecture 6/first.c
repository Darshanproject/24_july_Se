/*
Function are basic bloc we can reuse the code again and 
again.
there are 4 types function 
1  with with
2 without without
3 with without 
4 without with
 synatx:
 datatype  function_name(){  //dec
 function body  
 
 }
 
 main(){
 function_name(); //calling function
 }
*/
#include<stdio.h>
void abc();//pre define function

main(){
 abc();   //calling function
}

void abc(){   //function declaration
	printf("Calling function");   ///function body
}
