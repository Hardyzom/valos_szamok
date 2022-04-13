#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BEMENET "valos_szamok.txt"
#define BUFFER 1000

int main(){
    FILE* fp = fopen(BEMENET,"r");
    char line[BUFFER];
    double osszeg = 0;
    while(fgets(line,BUFFER,fp)!= NULL){
        line[strlen(line)-1]= '\0';
        for(int i = 1;i<strlen(line);i++){
            if(line[i] == ','){
                line[i] = '.';
            }
        }
        osszeg+=atof(line);
    }
    fclose(fp);
    printf("%.20lf\n",osszeg);


return 0;

}