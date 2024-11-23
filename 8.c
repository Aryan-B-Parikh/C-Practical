//Documentation :Made a restaurent menu card and take a input as customer choice in menu card and show the output As Total Amount of bill and when customer enter a '0' while show order is complete.
//Header File.
#include<stdio.h>

 void main(){

     int cc,tc = 0,cost; // cc is customer choice , tc is total cost.

 // display the Restaurant Menu;
     printf("!!! Welcome In Online Menu !!!\n");
    printf("Your Manu Card:\n1. Burger price => 150 Rupees.\n2. Pizza price => 200 Rupees.\n3. Pasta price => 120 Rupees.\n4. Sandwich price => 100 Rupees\n5. French Fries => 80 Rupees.");
    printf("\n0. Finish your Order.");

     while(1){
         // take input As customer choice.
         printf("\n\nEnter a choice (range 0 to 5) :");
          scanf("%d",&cc);

          switch(cc){

              case 1:
                cost = 150;
                 printf("Burgur Is Added in Your Cart (cost => 150 Rupees)");
                 break;

              case 2:
                cost = 200;
                 printf("Pizza is Added in Your Cart (cost => 200 Rupees)");
                 break;

              case 3:
                cost = 120;
                 printf("Pasta is Added in Your Cart (cost => 120 Rupees)");
                 break;

              case 4:
                cost = 100;
                 printf("Sandwich is Added in Your Cart (cost => 100 Rupees)");
                 break;

              case 5:
                cost = 80;
                 printf("French Fries is Added in Your Cart (Cost => 80 Rupees)");
                 break;

              case 0:  // out of loop.
    printf("__________________________________________________________");
                 printf("\norder is complete.\n");
                       printf("\nYour Total Amount is : %d Rupees",tc);
                            printf("\n\nThank you for Visiting!!");

         printf("\n\n24CE070_ARYAN");
                 break;

          default:  // when customer is Enter invalid input this sentance is Run.
              printf("Your input is Invalid\n please input number in Range of 0 to  5.");
                 continue;
          }
         tc+=cost; // add item cost..
     }
 }

