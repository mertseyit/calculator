#include<stdio.h>

//fonksiyon prototipi
int toplama(int x, int y);
int cikarma(int x, int y);
int carpma(int x, int y);
float bolme(float x, float y);


int main()
{
    int a, b;
    char islem;
    char a = 'a';
    
    printf("2 adet int deger giriniz:");
    scanf("%d %d",&a,&b);
    printf("* / + -\n");
    printf("Hangi islemi yapmak istediginizi seciniz:");
    scanf(" %c",&islem);
    
    switch(islem)
    { 
      case '+':
        printf("%d %c %d = %d", a, islem, b, toplama(a,b));
        break;
      case '*':
        printf("%d %c %d = %d", a, islem, b, carpma(a,b));
        break;
      case '-':
        printf("%d %c %d = %d", a, islem, b, cikarma(a,b));
        break;
      case '/':
        printf("%d %c %d = %.3f", a, islem, b, bolme(a,b));
        break;
    }
  
    
    return 0;
}
int toplama(int x, int y)
{
    return x+y;
}
int cikarma(int x, int y)
{
    return x-y;
}
int carpma(int x, int y)
{
    return x*y;
}
float bolme(float x, float y)
{
    return x/y;
}



