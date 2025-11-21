#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*parkir kursor
|  |  |
|  |  |
*/
int main() {
       
    int mainMenu;
    // Main menu
    printf("Welcome to the Math Quiz!\n");
    printf("\n");
    printf("1. Start the quiz\n");
    printf("2. Exit\n");

    // Mode selection menu
    scanf("%d", &mainMenu);
    if(mainMenu == 1){
        int mode;
        printf("Select mode\n"); 
        printf("1. Easy\n");
        printf("2. Medium\n");
        printf("3. Hard\n");
        printf("4. Back to main menu\n");
        scanf("%d", &mode);
        if(mode == 1){
            printf("Easy mode selected\n");
            // Start easy mode quiz
            srand(time(NULL));
            int minEasy = 1; // Angka minimum untuk easy mode
            int maxEasy = 20; // Angka maksimum untuk easy mode
            int num1Easy = (rand() % (maxEasy - minEasy + 1)) + minEasy; // Generate random number interval 1 - 20
            int num2Easy = (rand() % (maxEasy - minEasy + 1)) + minEasy; // Generate random number interval 1 - 20
            int randomNumber = (rand() % (maxEasy - minEasy + 1)) + minEasy;
            int answer;
            printf("What is %d + %d?\n", num1Easy, num2Easy);
            scanf("%d", &answer);
            if(answer == num1Easy + num2Easy){
                printf("Correct!\n"); // Jika jawaban benar
            }
            else{
                printf("Incorrect. Try Again!\n");
                // Ask the question again (loop) until its correct
                while(1){
                    printf("What is %d + %d?\n", num1Easy, num2Easy);
                    scanf("%d", &answer);
                    if(answer == num1Easy + num2Easy){
                        printf("Correct!\n"); // Jika jawaban benar
                        break;
                    }
                    else{
                        printf("Incorrect. Try Again!\n"); // Jika jawaban salah
                    }
                }
            }
        }
        else if(mode == 2){
            printf("Medium mode selected\n");
            // Start medium mode quiz
            srand(time(NULL));
            int minMedium = 21; // Angka minimum untuk medium mode
            int maxMedium = 50; // Angka maksimum untuk medium mode
            int num1Medium = (rand() % (maxMedium - minMedium + 1)) + minMedium; // Generate random number interval 21 - 50
            int num2Medium = (rand() % (maxMedium - minMedium + 1)) + minMedium; // Generate random number interval 21 - 50
            int randomNumber = (rand() % (maxMedium - minMedium + 1)) + minMedium;
            int answer;
            printf("What is %d x %d?\n", num1Medium, num2Medium);
            scanf("%d", &answer);
            if(answer == num1Medium * num2Medium){
                printf("Correct!\n"); // Jika jawaban benar
            }
            else{
                printf("Incorrect. Try Again!\n"); // Jika jawaban salah
                // Ask the question again (loop) until its correct
                while(1){
                    printf("What is %d x %d?\n", num1Medium, num2Medium);
                    scanf("%d", &answer);
                    if(answer == num1Medium * num2Medium){
                        printf("Correct!\n"); // Jika jawaban benar
                        break;
                    }
                    else{
                        printf("Incorrect. Try Again!\n"); // Jika jawaban salah
                    }
                }
            }
        }
                else if(mode == 3){
            printf("Hard mode selected\n");
            // Start hard mode quiz
            srand(time(NULL));
            int minHard = 51; // Angka minimum untuk hard mode
            int maxHard = 100; // Angka maksimum untuk hard mode
            int num1Hard = (rand() % (maxHard - minHard + 1)) + minHard; // Generate random number interval 51 - 100
            int num2Hard = (rand() % (maxHard - minHard + 1)) + minHard; // Generate random number interval 51 - 100
            int randomNumber = (rand() % (maxHard - minHard + 1)) + minHard;
            int answer;
            printf("What is %d x %d?\n", num1Hard, num2Hard);
            scanf("%d", &answer);
            if(answer == num1Hard * num2Hard){
                printf("Correct!\n"); // Jika jawaban benar
            }
            else{
                printf("Incorrect. Try Again!\n"); // Jika jawaban salah
                // Ask the question again (loop) until its correct
                while(1){
                    printf("What is %d x %d?\n", num1Hard, num2Hard);
                    scanf("%d", &answer);
                    if(answer == num1Hard * num2Hard){
                        printf("Correct!\n"); // Jika jawaban benar
                        break;
                    }
                    else{
                        printf("Incorrect. Try Again!\n"); // Jika jawaban salah
                    }
                }
            }
        }
        else if(mode == 4){
            main(); // Back to main menu
        }
        else{
            printf("Invalid input\n"); // Input tidak sesuai dengan pilihan
        }       
    }
    else if(mainMenu == 2){
        return 0; // Exit the program
    }
    else{
        printf("Invalid input\n"); // Input tidak sesuai dengan pilihan
    }

    




    return 0;
}
