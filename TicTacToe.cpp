#include<iostream.h>
#include<graphics.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void winer(int win)
{
	clrscr();
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	setbkcolor(1);
	setcolor(14);
		settextstyle(4,0,5);
	if(win==1)
	{
		outtextxy(120,150,"PLAYER 2 WINS");
			sound(10*random(100));
			delay(5000);
			nosound();
	}
	else if(win==2)
	{
		outtextxy(100,150,"PLAYER 1 WINS");
			sound(10*random(100));
			delay(5000);
			nosound();
	}
	else
	{
		outtextxy(150,150,"GAME DRAW");
			sound(10*random(100));
			delay(5000);
			nosound();
	}
	closegraph();
}

void tictactoe()
{
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	int j,k,l,m,plr,win=0,ch,temp;
	char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';
	delay(2500);
		for(k=0;k<=640;k++)
			line(0,k,640,k);
		setcolor(15);
		line(0,60,180,60);
		line(0,120,180,120);
		line(60,0,60,180);
		line(120,0,120,180);

		gotoxy(4,2);
			cout<<a;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,2);
			cout<<b;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,2);
			cout<<c;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,6);
			cout<<d;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,6);
			cout<<e;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,6);
			cout<<f;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,10);
			cout<<g;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,10);
			cout<<h;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,10);
			cout<<i;
			sound(10*random(100));
			delay(80);
			nosound();
	for(j=1;j<=10;j++)
	{
		clrscr();
		setcolor(0);
		for(k=0;k<=640;k++)
			line(0,k,640,k);
		setcolor(15);
		line(0,60,180,60);
		line(0,120,180,120);
		line(60,0,60,180);
		line(120,0,120,180);

		gotoxy(4,2);
			cout<<a;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,2);
			cout<<b;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,2);
			cout<<c;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,6);
			cout<<d;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,6);
			cout<<e;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,6);
			cout<<f;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,10);
			cout<<g;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,10);
			cout<<h;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,10);
			cout<<i;
			sound(10*random(100));
			delay(80);
			nosound();



		if(j<10)
		{
			if(j%2==0)
				plr=2;
			else
				plr=1;
			gotoxy(1,15);
			str:
			if(plr==2)
			{
				cout<<" PLAYER 1 YOUR CHOICE : ";
				cin>>ch;

			}
			else
			{
				cout<<" PLAYER 2 YOUR CHOICE : ";
				cin>>ch;
			}

			if(ch==1&&plr==2)
			{
				if(a==''||a=='X')
					goto str;
				else
				a='';
			}
			if(ch==2&&plr==2)
			{
				if(b==''||b=='X')
					goto str;
				else
				b='';
			}
			if(ch==3&&plr==2)
			{
				if(c==''||c=='X')
					goto str;
				else
				c='';
			}
			if(ch==4&&plr==2)
			{
				if(d==''||d=='X')
					goto str;
				else
				d='';
			}
			if(ch==5&&plr==2)
			{
				if(e==''||e=='X')
					goto str;
				else
				e='';
			}
			if(ch==6&&plr==2)
			{
				if(f==''||f=='X')
					goto str;
				else
				f='';
			}
			if(ch==7&&plr==2)
			{
				if(g==''||g=='X')
					goto str;
				else
				g='';
			}
			if(ch==8&&plr==2)
			{
				if(h==''||h=='X')
					goto str;
				else
				h='';
			}
			if(ch==9&&plr==2)
			{
				if(i==''||i=='X')
					goto str;
				else
				i='';
			}
			if(ch==1&&plr==1)
			{
				if(a==''||a=='X')
					goto str;
				else
				a='X';
			}
			if(ch==2&&plr==1)
			{
				if(b==''||b=='X')
					goto str;
				else
				b='X';
			}
			if(ch==3&&plr==1)
			{
				if(c==''||c=='X')
					goto str;
				else
				c='X';
			}
			if(ch==4&&plr==1)
			{
				if(d==''||d=='X')
					goto str;
				else
				d='X';
			}
			if(ch==5&&plr==1)
			{
				if(e==''||e=='X')
					goto str;
				else
				e='X';
			}
			if(ch==6&&plr==1)
			{
				if(f==''||f=='X')
					goto str;
				else
				f='X';
			}
			if(ch==7&&plr==1)
			{
				if(g==''||g=='X')
					goto str;
				else
				g='X';
			}
			if(ch==8&&plr==1)
			{
				if(h==''||h=='X')
					goto str;
				else
				h='X';
			}
			if(ch==9&&plr==1)
			{
				if(i==''||i=='X')
					goto str;
				else
				i='X';
			}
		if(a==b&b==c)
			win=plr;
		if(d==e&&e==f)
			win=plr;
		if(g==h&&h==i)
			win=plr;
		if(a==d&&d==g)
			win=plr;
		if(b==e&&e==h)
			win=plr;
		if(c==f&&f==i)
			win=plr;
		if(a==e&&e==i)
			win=plr;
		if(c==e&&e==g)
			win=plr;
			setcolor(0);
  /*		for(k=0;k<=640;k++)
			line(0,k,640,k);
		setcolor(15);
		line(0,60,180,60);
		line(0,120,180,120);
		line(60,0,60,180);
		line(120,0,120,180); */

		gotoxy(4,2);
			cout<<a;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,2);
			cout<<b;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,2);
			cout<<c;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,6);
			cout<<d;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,6);
			cout<<e;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,6);
			cout<<f;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,10);
			cout<<g;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,10);
			cout<<h;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,10);
			cout<<i;
			sound(10*random(100));
			delay(80);
			nosound();
		}
		if(win==2||win==1)
			break;

	}

	delay(1000);

	winer(win);
	delay(5000);

	closegraph();
	getch();
}



void main(){
  tictactoe();
}
