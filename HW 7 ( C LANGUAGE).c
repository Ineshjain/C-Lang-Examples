# include <stdio.h>;
main()
{
    printf("\t\t\t\tLETS CALCULATE YOUR SALARY!!");
    int bs,gs,ns,hra,da,pf;
    bs=gs=ns=hra=da=pf=0;
    printf("\nWHAT IS YOUR BASIC SALARY?: ");
    scanf("%d", &bs);
hra=0.2*bs;
da=0.1*bs;
pf=0.05*bs;
gs=bs+hra+da;
ns=gs-pf;
printf("\nYOUR HRA IS:%d",hra);
printf("\nYOUR DA IS:%d",da);
printf("\nYOUR PF IS:%d",pf);
printf("\nYOUR GROSS SALARY IS:%d",gs);
printf("\nYOUR NET SALARY IS :%d",ns);
    getch();
}
