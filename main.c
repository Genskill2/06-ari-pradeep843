#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>

string ari(string);


void test1() {
  string s1="The town was large enough to support three inns, and all their common rooms were rife with rumors. Arianne sent her men into each of them, to hear what they might hear. In the Broken Shield, Daemon Sand was told that the great septry on the Holf of Men had been burned and looted by raiders from the sea, and a hundred young novices from the motherhouse on Maiden Isle carried off into slavery.";
  assert(strcmp(ari(s1), "Eleventh Grade") == 0);
}

void test2() { 
 string s2="A mouse took a stroll through the deep dark wood. A fox saw the mouse, and the mouse looked good. Where are you going to, little brown mouse? Come and have lunch in my underground house.";
  assert(strcmp(ari(s2), "Third Grade") == 0);
}

void test3() {
  string s3="Exhaled respiratory particles can build-up within enclosed spaces with inadequate ventilation. The risk of COVID-19 infection increases especially in spaces where people engage in physical exertion or raise their voice (e.g., exercising, shouting, singing) as this increases exhalation of respiratory droplets. Prolonged exposure to these conditions, typically more than 15 minutes, leads to higher risk of infection.";
  assert(strcmp(ari(s3), "Professor") == 0);
 }

int main(void) {
  test1();
  test2();
  test3();
}

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
