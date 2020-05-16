#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
char enter;
int alfa=4,c=1;
void front()
{
   setbkcolor(5);
   settextstyle(0,0,2);
   outtextxy(20,200,"PRESS ANY KEY TO START");
   settextstyle(0,0,7);
   outtextxy(20,60,"STACK JUMP");
   getch();
   /////////delay(500);
   clrscr();
   setbkcolor(4);
   settextstyle(0,0,11);
   outtextxy(60,60,"3");
   delay(1000);
   clrscr();
   setbkcolor(4);
   settextstyle(0,0,11);
   outtextxy(60,60,"2");
 delay(1000);
clrscr();

   setbkcolor(4);
   settextstyle(0,0,11);
   outtextxy(60,60,"1");
   delay(1000);
   clrscr();
   setbkcolor(4);
   settextstyle(0,0,11);
   outtextxy(60,60,"Go");
   cleardevice();








}


void level(int alfa,int c)
{ char enter;
   int edge=10,edgel=30;
   int x=320,y=450;          ///////////centre of the box
   int mx=620,my=450;
   int color=5;

   setfillstyle(1,9);
     bar(x-edge,y-edge,x+edge,y+edge);
  cleardevice();
 setbkcolor(0);
settextstyle(0,0,1);

 outtextxy(5,10,"END GAME");
 setfillstyle(1,9);
     bar(x-edge,y-edge,x+edge,y+edge);

 do
{
if(  (x+edge==mx-edgel)&&

	 ((y+edge<my+edge)&&(y+edge>my-edge) )        )
   exit(0);


  while (kbhit())
  { enter=getch();
   if (enter==72)
   {
    if((alfa==4)||(alfa==3))
    {y-=edge+2;
     setfillstyle(1,0);
     bar(x-edge,y-edge+edge+2,x+edge,y+edge+edge+2);

     setfillstyle(1,9);
     bar(x-edge,y-edge,x+edge,y+edge);
     }

     if((alfa==2)||(alfa==1))
    {y-=edge+8;
     setfillstyle(1,0);
     bar(x-edge,y-edge+edge+8,x+edge,y+edge+edge+8);

     setfillstyle(1,9);
     bar(x-edge,y-edge,x+edge,y+edge);
     }


   }
   if(  (x+edge==mx-edgel)&&

	 ((y+edge<my+edge)&&(y+edge>my-edge) )        )
   exit(0);

  }


  while(!kbhit())
  {


 setlinestyle(1,1,1);
 line(0,10,640,10);

  if(  (x+edge>mx-edgel)&&(x+edge<mx+edgel)&&(y+edge<my+edge)&&(y+edge>my-edge)         )
 exit(0);

  mx--;
    setlinestyle(0,1,1);
  line(0,450+edge,640,450+edge);
   if((my-edge==y+edge)&&(x+edge>mx-edgel)&&(x+edge<mx+edgel))

    {
    my-=2*edge;
     mx=620;
      color=random(10)+1;
    }




     if (  mx==-edgel-2    )
    mx=620;



    setfillstyle(0,0);
    bar(mx-edgel+1, my-edge ,mx+edgel+1, my+edge);

    setfillstyle(1,color);
    bar(mx-edgel, my-edge ,mx+edgel, my+edge);

    delay(alfa );

    if(y!=my)
  //  if (y>my)
    {y++;
     setfillstyle(1,0);
     bar(x-edge,y-edge-1,x+edge,y+edge-1);

     setfillstyle(1,8);
     bar(x-edge,y-edge,x+edge,y+edge);

    }

    if(  (x+edge==mx-edgel)&&( y==my)     )
   exit(0);

   if(my<=10)
   {break;}



  }
   if(my<=10)
   {cleardevice();
    setbkcolor(random(10)+1);
    settextstyle(0,0,9);
    outtextxy(60,60,"level ");
    if (c==1)
      outtextxy(410,60,"1");
    if (c==2)
      outtextxy(410,60,"2");
      if (c==3)
      outtextxy(410,60,"3");
     if (c==4)
      outtextxy(410,60,"4");


      outtextxy(20,200,"completed");
      delay(2000);

    break;
    }


}while(enter!=27);

}

void main()
{
clrscr();

   int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:/TURBOC3/BGI");
  front();
  cleardevice();
  clrscr();
  setbkcolor (0);
 do

 {



    level(alfa,c);

     alfa--  ; c++;


 } while(enter!=27);
 ////////////////
 }


