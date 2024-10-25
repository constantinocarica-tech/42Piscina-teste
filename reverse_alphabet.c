
#include<unistd.h>
int main(){

reverse_alphabet();

}

void reverse_alphabet(void){

char letra = 'z';

while(letra>='a'){

write(1,&letra,1);

letra--;

}
}

