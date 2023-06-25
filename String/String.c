med /*
01. just write a name
02. fgets(str,sizeof(str),stdin);
03. change character 
04.  write function for allow space of charctr 



*/

// 01. just write a name 
char str[90];
printf("Enter A name:");
scanf("%s", str);
 printf("re



 // she dont allow space 
 //mozahid Ahmed
 //output ---- mozahid
 char str[90];
 printf("Enter A name:");
 fgets(str,sizeof(str),stdin);
 printf("result %s",str);


04. write name with space  
 //mozahid ahmed
 //mozahid Ahmed
 char str[90];
 printf("Enter A name:");
 fgets(str,sizeof(str),stdin);
 printf("result");
 puts(str);
