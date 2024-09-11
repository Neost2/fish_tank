#include <math.h>
#include <stdio.h>



int main(void)
{
	float length, width, height;
	float volume_cubid_inches, rounded_num, amount_in_gallons;

	//get diamensions
	printf("What is the length of the fish tank (to the nearest half inch); ");
	scanf("%f", &length);
	printf("What is the width of the fish tank (to the nearest half inch); ");
	scanf("%f", &width);
	printf("What is the height of the fish tank (to the nearest half inch); ");
	scanf("%f", &height);

	// do the math
	volume_cubid_inches = length * width * height;
	amount_in_gallons = volume_cubid_inches / 231;

	// show input and thenshow volume
	printf("The volume of a fish tank having length - %.1f width -- %.1f and height - %.1f is %.2f cubic inches\n", length, width, height, volume_cubid_inches);

	// show output in gallons now
	printf("The amount of water needed to fill this tank is - %.2f gallons\n", amount_in_gallons);

	// now lets do some rounding
	rounded_num = round(amount_in_gallons);
	printf("The amount of water needed using the round function is -%.2f gallons\n", rounded_num);

     // something wrong with round function
	return 0;

}
