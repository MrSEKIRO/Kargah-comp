#include <stdio.h>

main()
{
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d%d",&x1,&y1);
	scanf("%d%d",&x2,&y2);
	scanf("%d%d",&x3,&y3);
	if((x1!=x3)&&(y1!=y3))
	{
		x4=x1+x3-x2;
		y4=y1+y3-y2;
		printf("%d %d",x4,y4);
	}
	else
	{
		x4=x1+x2-x3;
		y4=y1+y2-y3;
		printf("%d %d",x4,y4);
	}
}
