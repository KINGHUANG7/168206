#include <stdio.h>
int main()
{
   int a,b,c,d;
    for(a=1;a>=0;a--) 
        for(b=1;b>=0;b--) //1:是小偷 0:不是
            for(c=1;c>=0;c--)
                for(d=1;d>=0;d--)
                    if(((a==0)+(d==1)+(b==1)+(d==0)==1)&&(a+b+c+d==1)) //4人的说法中有1个真的，且只有一个小偷
                    {
						if(a==1){
							printf("A是小偷\n");
						}
						if(b==1){
							printf("B是小偷\n");
						}
						if(c==1){
							printf("C是小偷\n");
						}
						if(d==1){
							printf("D是小偷\n");
						}
                    }
    return 0;

}

