/**
 * @file credit.c
 * @author Matthew Olsen
 * @date September 22nd, 2015
 * @brief determine if a credit card is valid using Luhn's algorithm.
 * @todo implement user interface to enter card numbers
 * @bug None
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_DIGITS 16
#define VALID 0
#define INVALID -1

void convert_card(int card[], char num[], int num_digits);
void print_card(int card[], int size);
void multiply_every_other(int card[], int size);
int sum_digits(int card[], int size);
int is_invalid(int digit_sum);

int main(void)
{
        int digit_sum = 0;

	int card[NUM_DIGITS];
	/* char visa[] = "4012888888881881"; */ /* valid card */
	char visa[] = "4012888888881882"; /*invalid card */
	convert_card(card, visa, NUM_DIGITS);
        
        multiply_every_other(card, NUM_DIGITS);
        digit_sum = sum_digits(card, NUM_DIGITS);  
              
	print_card(card, NUM_DIGITS);
        /* printf("Sum: %d\n", digit_sum); */ /* error check */

        if(is_invalid(digit_sum)) {
                printf("The card is invalid.\n");
        } else { 
                printf("The card is valid.\n"); 
        }
		
	return 0;

}

/** 
 * converts string array of numbers to single digit integer array
 * @param card[] the array of integers in int type
 * @param num[] the array of numbers in char type
 * @param num_digits the of length both card[] and num[]
 */
void convert_card(int card[], char num[], int num_digits)
{
	int i;

	for(i = 0; i < num_digits; i++) 		
		card[i] = num[i] - '0';
	
}

/**
 * prints the integers currently in card[], one integer per line
 * @param card[] the array with integer values
 * @param size the size of card[]
 */
void print_card(int card[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("card[%d] = %d\n", i, card[i]);
}

/** 
 * Implements step 1 of Luhn algorithm: multiply every other digit 
 * in given array by two, starting from second to last digit
 * @param card[] the array containing the card's original digits
 * @param size the length of card[]
 */
void multiply_every_other(int card[], int size)
{
        int rep;

        for(rep = size - 2; rep >= 0; rep -= 2) {
                card[rep] = card[rep] * 2;
        }
}

/**
 * Implements step 2 of Luhn algorithm: finds the summation of 
 * every singular digit from given array
 * @param card[] the array containing the digits
 * @param size the length of card[]
 */
int sum_digits(int card[], int size)
{
        int sum = 0;
        int rep;

        for(rep = 0; rep < size; rep++) {
                sum+= (card[rep] / 10) + (card[rep] % 10); /* adds tens digit plus ones digit */
        }
        return sum;                
}

/** 
 * Implements step 3 of Luhn algorithm: if the digit summation
 * modulo of 10 doesn't equal zero, the card is invalid
 * @param digit_sum the sum of every single digit from step 2 of Luhn's algorithm
 * @return 0 if vaild, -1 otherwise
 */
int is_invalid(int digit_sum)
{
        return (digit_sum % 10) != 0 ? INVALID : VALID;
}
