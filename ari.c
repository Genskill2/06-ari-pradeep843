#include <stdio.h>
#include<ctype.h>
#include<math.h>
#include <cs50.h>
#include<string.h> 
string ari(string s){
int l=strlen(s);
int a=0,b=0,c=0;
for(int i=0;i<l;i++) {
if(isalnum(s[i]))
{
a++;
}
if(s[i]==' ') { b++;
} 
if(s[i]=='.' || s[i]=='?' || s[i]=='!') {c++; 
}
} 
float arri; 
arri=4.71* ((float)a/b) + 0.5* ((float)b/c) -21.43;
int n=ceil(arri);
switch(n) {
case 1:return "Kindergarten"; 
break;
case 2:return "First/Second Grade";
break;
case 3:return "Third Grade";
break;
case 4:return "Fourth Grade";
break;
case 5:return "Fifth Grade";
break;
case 6:return "Sixth Grade";
break;
case 7:return "Seventh Grade";
break;
case 8:return "Eighth Grade";
break;
case 9:return "Ninth Grade";
break;
case 10:return "Tenth Grade";
break;
case 11:return "Eleventh Grade";
break; 
case 12:return "Twelfth Grade";
break;
case 13:return "College student";
break; 
case 14:return "Professor"; 
break;
} 
}
