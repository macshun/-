#include <stdio.h>
#include <windows.h>
int main()
{
    double x,y,i;
    int a,b;
    x = 3.0;
    do{
        i = 2.0;
        do{
            y = x / i;
            a = (int)y;
            if(y != a)//�����ж��Ƿ�Ϊ����
            {
                if(i == x - 1)
                {
                    b = (int)x;
                    printf("%d\n",b);
                }
            }
            i++;
        }while(y != a);
        x++;
    }while(x <= 10000.0);//3��10000������
    system("pause");//��ֹ����
    return 0;
}
