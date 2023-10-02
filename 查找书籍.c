#include <stdio.h>

struct book
{
    char name[33];
    double price;
};
int main()
{
    int n;
    struct book arr[10];
    scanf("%d", &n);
    int i;
    for(i=0; i<n; i++)
    {
		getchar();
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        scanf("%lf", &arr[i].price);
    }
    int index1=0;
    int index2=0;
    for(i=1; i<n; i++)
    {
       if(arr[i].price>=arr[index1].price) index1=i;
       if(arr[i].price<=arr[index2].price) index2=i;
    }
	printf("\n");
    printf("%.2lf, %s\n", arr[index1].price, arr[index1].name);
    printf("%.2lf, %s\n", arr[index2].price, arr[index2].name);
    return 0;
}
