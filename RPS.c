#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sad(){
  printf("                               ****                                  \n");
  printf("                       *                  *                          \n");
  printf("                  *                            *                     \n");
  printf("              *                                    *                 \n");
  printf("           *                                          *              \n");
  printf("        *                                                *           \n");
  printf("      *                                                    *         \n");
  printf("    *       *             *           *              *       *       \n");
  printf("   *         *           *             *            *         *      \n");
  printf("   *           *        *                *        *           *      \n");
  printf("   *             * ** *                    * ** *             *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                          * * *                           *      \n");
  printf("   *                       *         *                        *      \n");
  printf("   *                    *               *                     *      \n");
  printf("   *                  *                   *                   *      \n");
  printf("    *               *                       *                *       \n");
  printf("      *            *                         *             *         \n");
  printf("        *                                                *           \n");
  printf("           *                                          *              \n");
  printf("              *                                    *                 \n");
  printf("                  *                            *                     \n");
  printf("                       *                  *                          \n");
  printf("                               ****                                  \n");
  printf("                                                                     \n");
};
void winner(){
  printf("                               ****                                  \n");
  printf("                       *                  *                          \n");
  printf("                  *                            *                     \n");
  printf("              *                                    *                 \n");
  printf("           *                                          *              \n");
  printf("        *                                                *           \n");
  printf("      *                                                    *         \n");
  printf("    *       *             *           *              *       *       \n");
  printf("   *         *           *             *            *         *      \n");
  printf("   *           *        *                *        *           *      \n");
  printf("   *             * ** *                    * ** *             *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                *                        *                *      \n");
  printf("   *                 *                      *                 *      \n");
  printf("   *                  *                    *                  *      \n");
  printf("    *                   *                *                   *       \n");
  printf("      *                   *            *                   *         \n");
  printf("        *                     * * *                      *           \n");
  printf("           *                                          *              \n");
  printf("              *                                    *                 \n");
  printf("                  *                            *                     \n");
  printf("                       *                  *                          \n");
  printf("                               ****                                  \n");
  printf("                                                                     \n");
};
void tie(){
  printf("                               ****                                  \n");
  printf("                       *                  *                          \n");
  printf("                  *                            *                     \n");
  printf("              *                                    *                 \n");
  printf("           *                                          *              \n");
  printf("        *                                                *           \n");
  printf("      *                                                    *         \n");
  printf("    *       *             *           *              *       *       \n");
  printf("   *         *************             **************         *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                                                          *      \n");
  printf("   *                **************************                *      \n");
  printf("    *                                                        *       \n");
  printf("      *                                                    *         \n");
  printf("        *                                                *           \n");
  printf("           *                                          *              \n");
  printf("              *                                    *                 \n");
  printf("                  *                            *                     \n");
  printf("                       *                  *                          \n");
  printf("                               ****                                  \n");
  printf("                                                                     \n");
};


void main(){
 srand((unsigned)time(NULL));
 int computer;
 computer = (rand()%3 + 1);
 printf("%d\n", computer);
 printf("---------------------------------------\n");
 printf("Hello guy, type your option for a game.\n");
 printf("1 - Rock.\n");
 printf("2 - Paper.\n");
 printf("3 - Scissors\n");
 printf("---------------------------------------\n");
 int user_option;
 printf("You -> ");
 scanf("%d", &user_option);
 printf("Computer -> %d\n", computer);

 switch(computer){
  case 1: 
   if(user_option == 1){
    printf("A tie\n");
    tie();
   }else if(user_option == 2){
          printf("Winner\n");
          winner();
         }else if(user_option == 3){
                printf("Loser...\n");
                sad();
               }
  break;
  case 2:
   if (user_option == 1){
    printf("Loser...\n");
    sad();
   }else if (user_option == 2){
          printf("A tie\n");
          tie();
         }else if (user_option == 3){
                printf("Winner\n");
                winner();
               }
  break;
  case 3: 
   if (user_option == 1){
    printf("Loser\n");
    sad();
   }else if (user_option == 2){
          printf("Winner\n");
          winner();
         }else if (user_option == 3){
                printf("A tie...\n");
                tie();
               }
  break;
  default:
   printf("Enter one valid option.\n");
   break;
 };
}
 














