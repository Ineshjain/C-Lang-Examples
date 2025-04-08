# include<stdio.h>
int main()
{
    float height,weight,bmi;
    printf("ENTER YOUR HEIGHT: ");
    scanf("%f",&height);
     printf("ENTER YOUR WEIGHT: ");
    scanf("%f",&weight);
    bmi=weight/(height*height);
    printf("YOUR BMI IS: %f\n",bmi);
}
