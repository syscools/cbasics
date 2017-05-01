#include <stdio.h>

int main(int argc,char *argv[])
{
    char var[64];
    sprintf(var,"[%0*d]",5,69);
    //sprintf(var,"%#g",(float)34);

    printf("%s\n",var);
    return 0;
}
