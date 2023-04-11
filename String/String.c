/*
01. just write a name
02. fgets(str,sizeof(str),stdin);
03.  change character 
04. Use puts 



*/

// 01. just write a name 
char str[90];
printf("Enter A name:");
scanf("%s", str);
 printf("re



 // 
 char str[90];
 printf("Enter A name:");
 fgets(str,sizeof(str),stdin);
 printf("result %s",str);


04. Use puts   
   char str[90];
 printf("Enter A name:");
 fgets(str,sizeof(str),stdin);
 printf("result");
 puts(str);