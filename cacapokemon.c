#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

  int main (int argc, char*argv[]){
  int i ; 
char pokemon;
pokemon = *argv[1];
char*args [2];

  
if (argc>1){
pokemon=* argv[1];
i=fork();

args[1]=NULL;
if(i==0){
 if(pokemon=='p'){
args[0]="./pikachu";
execv("./pikachu",args);
}else{}

if(pokemon=='s'){
args[0]="./squirtle";
execv("./squirtle",args);
}

else{}

if(pokemon=='b'){
args[0]="./bulbasaur";
execv("./bulbasaur",args);

}else{}

if(pokemon=='c'){
args[0]="./charmander";
execv("./charmander",args);
}
 }
  

}}
