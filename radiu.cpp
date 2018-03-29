#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    double Pi = atan(1.0)*4;
    int r;
    scanf("%d",&r);
    double area = Pi*pow(r,2);
    printf("%.7lf", area);
    return 0;
}
