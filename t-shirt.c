#include<stdio.h>
int main()
{
int l,n,w,h,i;
scanf("%d",&l);
scanf("%d",&n);
for(i=0;i<n;i++)
{ scanf("%d",&w);
scanf("%d",&h);
if(w<l||h<l)
printf("UPLOAD ANOTHER\n");
else if(w==h)
printf("ACCEPTED\n");
else
printf("CROP IT\n");
}
return 0;
}

