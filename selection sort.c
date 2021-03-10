#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void selection(int number[], int count);

int main(int argc, char *argv[]) {
	int i, count, temp, number[10];
	
	printf("Enter how many values in the array?: ");
	scanf("%d",&count);
	printf("Enter numbers: ", count);
	   
	for(i=0;i<count;i++)
    	scanf("%d",&number[i]);	
    	
    selection(number, count);
    
    for(i=0;i<count;i++)
    	printf("%d ",number[i]);
	return 0;
}

void selection(int number[], int count) { 
    int i, j, temp, min;
	
	for (i = 0; i < count; i++) {
		min = i;
		for (j = i + 1; j < count; j++) 	//Find the index of the smallest number 
			if(number[j] < number[min]) 
				min = j;			
		
		temp = number[i];				//swap 2 numbers
        number[i] = number[min];
        number[min] = temp;  
    }
    
}  



