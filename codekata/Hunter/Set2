#include<stdio.h>
#include<string.h>

int top=-1,stack[33];

void push(int item,int len)
{
	if(top<len)
	{
	top=top+1;
	stack[top]=item;
	}
}

int pop()
{
	return(stack[top--]);
}


void main()
{

	char s[22];
	int len,i,count=0;
	printf("Enter string\n");
	scanf("%s",s);
	
	len=strlen(s);
	for(i=0;i<len;i++)
	{
	push(s[i],len);
	}

	for(i=0;i<len;i++)
	{
		if(s[i]==pop())
		{
		count++;
		}
	}
	
	if(count==len)
	{
	printf("palidrome\n");
	}
	else
	{
	printf("not palidrome\n");
	}
}
