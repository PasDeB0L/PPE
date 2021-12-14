#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("start python\n");

    system("python3 movement/mouseLeft.py");
    system("python3 movement/mouseDown.py");
    system("python3 movement/mouseRight.py");
    system("python3 movement/mouseUp.py");

    printf("python finieshed\n");
    return 0;
}


// int main()
// {
//     char chr;
    
//     scanf("%c",&chr);     
//     printf("You entered %c.", chr);  
//     return 0;
// }  



// #include<stdio.h>

// int main()
// {
//     printf("donner un entier: ");
//     int key = getch();
//     if(key=='1')
//     printf("merci");
//     return 0;
// }