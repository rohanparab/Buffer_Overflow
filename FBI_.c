#include <stdio.h>

void secretFunction()
{
    //INCASE FOR FUTURE UPDATE
    printf("**Server SSH Password**\n");
    printf("Server Password : qwerty123\n");
}


void doit(){
    char buffer[20];

    printf("Enter some text:\n");
    scanf("%s", buffer);
    printf("You DATA : '%s' now belongs to us\n", buffer);
}


int main()
{
    doit();
    return 0;
}
