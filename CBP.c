#include <stdio.h>
struct item
{
    char name[30];
    float p; //p=Price
    int q;//q=Quantity
};
void main ()
{
    struct item s[20];
    int i,n;
    float bill=0,d;
    printf("Enter no of items\n");
    scanf("%d",&n);
    printf("Enter name of item,price and quantity\n");
    for(i=0;i<n;i++)
    {
      scanf("%s%f%d",s[i].name,&s[i].p,&s[i].q);
    }
    printf("/***** XYZ super market *****/\n");
    printf("  Item\t                    Price\t                Quantity\t\n");
    for(i=0;i<n;i++)
    {
        printf("  %-15s\t      %-15.2f\t     %-15d\t\n",s[i].name,s[i].p,s[i].q);
        bill+=s[i].p*s[i].q;
    }
    printf("Bill is %.2f\n",bill);
    if (bill>=500)
    {
        bill=bill-bill*0.05;
    }
    else if (bill<=1000&&bill>500)
    {
        bill=bill-bill*0.01;
    }
    printf("/****Total bill is %.2f****/ ",bill);

}
