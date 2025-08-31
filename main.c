#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    float v1, v2;
    float sum, sub, div, mult;
    int choice;
    int i = 0;
    
    while(i == 0){
        printf("  CALCULATOR  \n");
        printf("Enter the calculation: \n");
        printf("1) Sum.  \n");
        printf("2) Subtration.  \n");
        printf("3) Division.  \n");
        printf("4) Multiplication.  \n");
        printf("         \n");
        printf("Type (5) to leave the program.  \n");
        scanf("%d", &choice);

        if(choice == 5){
            exit(0);
        }
        else{
            if(choice < 1 || choice > 5 ){
                printf("Type a valid number: \n");
                system("pause");
                system("cls");
            }
            else{
                printf("Type the first number: ");
                scanf("%f", &v1);
                printf("Type the second number: ");
                scanf("%f", &v2);

                if(choice == 1){
                    sum = v1 + v2;
                    printf("%.2f + %.2f = %.2f", v1, v2, sum);
                    system("pause");
                    system("cls");
                }
                else if(choice == 2){
                    sub = v1 - v2;
                    printf("%.2f - %.2f = %.2f", v1, v2, sub);
                    system("pause");
                    system("cls");
                }
                else if(choice == 3){
                    if(v2 == 0){
                        printf("Can´t divide by zero(0).");
                        system("pause");
                        system("cls");
                    }
                    else{
                        div = v1 / v2;
                        printf("%.2f / %.2f = %.2f", v1, v2, div);
                        system("pause");
                        system("cls");
                    }
                }
                else if(choice == 4){
                    mult = v1 * v2;
                    printf("%.2f * %.2f = %.2f", v1, v2, mult);
                    system("pause");
                    system("cls");
                }


            }
        }
    }

    return 0;
}

