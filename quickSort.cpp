#include<cstdio>

using namespace std;

void QuickSort(int *arrayList, int startIndex, int endIndex)
{
    int i = startIndex;
    int j = endIndex;
    if(i >= j)
        return;
    int standard = arrayList[startIndex];
    while(i<j)
    {
        while(i<j&&arrayList[j] >= standard)
            j--;
        arrayList[i] = arrayList[j];
        while(i<j&&arrayList[i] < standard)
            i++;
        arrayList[j] = arrayList[i];
    }
    arrayList[i] = standard;
    QuickSort(arrayList,startIndex,i-1);
    QuickSort(arrayList,i+1,endIndex);
}

int main()
{
    int n;
    scanf("%d", &n);
    int s[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    QuickSort(s,0,n-1);
    for(int i = 0; i < n; i ++)
        printf("%d ",s[i]);
    printf("\n");
    return 0;
}
