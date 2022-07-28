//ASSIGNMENT-1(IDE)
//Simplify the following Boolean functions, using Karnaugh maps:
//F(A,B,C,D)=E(3,7,11,13,14,15)


int W=1,X=1,Y=0,Z=0;
int F;
void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
}
void loop()
{
   F=(Y&&Z) || (W&&X&&Z) || (W&&X&&Y);
   if(F==0){
       sevenseg(0,0,0,0,0,0,1);
   }
   else{
        sevenseg(1,0,0,1,1,1,1);
   }
}
