#include<unistd.h>

int main(){

ft_putchar();

}

void ft_putchar(void){

char letra = 'a';
while(letra<='z'){ write(1,&letra,1);

letra++;

}
}

