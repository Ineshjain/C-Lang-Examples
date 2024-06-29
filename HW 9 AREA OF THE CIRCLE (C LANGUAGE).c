# include <stdio.h>
main()
{
    printf("\t\t\t\tLETS CALCULATE THE AREA OF THE CIRCLE\n\n");
    float radius,area;
    area = radius = 0;
    const float PI = 3.14;
    printf("ENTER THE RADIUS OF THE CIRCLE: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    printf("\nTHE AREA OF THE CIRCLE IS: %f", area);
    getch();
}
