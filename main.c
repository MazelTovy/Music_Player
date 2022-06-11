

#include "reg52.h"			 //此文件中定义了单片机的一些特殊功能寄存器
#include "SoundPlay.h"
#include"music.h"
sbit k1=P3^1;
sbit k2=P3^0;
sbit k3=P3^2;
sbit ea=P1^0;
typedef unsigned int u16;	  //对数据类型进行声明定义
typedef unsigned char u8;


void Delay1ms(unsigned int count)
{
	unsigned int i,j;
	for(i=0;i<count;i++)
	for(j=0;j<120;j++);
}

void main()
{
	
	unsigned int i;
	InitialSound();
	ea=0;
	
	while(1)
	{
		 if (k1==0){Delay1ms(50);if(k1==0) i=1;}
	
	if (k2==0){Delay1ms(50);if(k2==0) i=2;}
	
	if (k3==0){Delay1ms(50);if(k3==0) i=3;}

		switch(i)
		{
		case 1: Play(Music_Girl,0,3,500); break;
		
	
		case 2:Play(Music_Same,0,3,360);	 break;
	
		case 3://Play(Music_Two,0,3,360);
						Play(Music_PC,0,3,360);
		}
	}
}