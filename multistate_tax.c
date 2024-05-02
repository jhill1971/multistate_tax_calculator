/*
Create a tax calculator that handles multiple states and multiple counties
within each state. The program prompts the user for the order amount and 
the state where each order will be shipped. 

For Wisconsin residents, prompt for the county of residence.
For Eau Claire County add an additional 0.005 tax.
For Dunn County, add an additional 0.004 tax.
Illinois residents must be charged 8% tax with no county-level charge.
All other states are not charged tax.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    double order_amount;
    char state[15];
    char county[20];
    double tax = 0.00;
    double total;
    
    // Get user input
    printf("What is the order amount? ");
    scanf("%lf", &order_amount);
    printf("What state do you live in? ");
    while((getchar())!= '\n');
    fgets(state, 15, stdin);
    // Remove the newline character from state
    state[strcspn(state, "\n")] = '\0';
    
    // Variations according to state
    if (strcmp("Illinois", state) == 0){
        tax = order_amount * 0.08;
        total = order_amount + tax;
    }
    else if (strcmp("Wisconsin", state) == 0){
        printf("What county are you in? ");
        fgets(county, 20, stdin);
        county[strcspn(county, "\n")] = '\0';
        if (strcmp("Eau Claire", county) == 0){
            tax = (order_amount * .055) + (order_amount * .005);
        }
        else if(strcmp("Dunn", county) == 0){
            tax = (order_amount * .055) + (order_amount * .004);
        }
        else {
            tax = order_amount * 0.055;
        }
        total = order_amount + tax;

    }
    else{
        total = order_amount;
    }

    // Output
    printf("\nYour order amount is: $%.2lf\n", order_amount);
    printf("Your tax is: $%.2lf\n", tax);
    printf("Your total is: $%.2lf\n", total);
   
    return 0;
}

