#include <stdio.h>
#include <string.h>

int main(){

char list [8][20]={"kira","fate","kenshi","kuroshitsuji","joster","shingekinokyojin","okami","kakegurui"};
char bukva[1];
int count=0;

printf ("\nSpisok:\n");
for (int i=0; i<8; i++) {
	for (int j=0; j<20; j++)
    
	printf("%c", list[i][j]) ;
}

printf ("\nVvedite bukvu-");
scanf("%c", &bukva);
for(int i=0; i<8;i++){

if (strncmp (bukva,list[i],1)==0){
    count++;   
  }
}
 if (count==0)
 printf("\nTakih slov net");
 
 else 
 printf ("\nKolicestvo slov= %d", count);
 
return 0;
}
