#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){

long num;
char *endptr;

if (argc > 3){
printf("Too many arguments entered.");
return 0;
}

num = strtol(argv[1], &endptr, 10);

if(num < 0){
printf("Error, negative number");
return 0;
}

if (*endptr != '\0'){
printf("Error, 1st argument must only contain number.");
return 0;
}

for(int i=0; i<num; i++){

printf("%s", argv[2]);

}
return 0;
}
