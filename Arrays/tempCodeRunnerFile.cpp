 int sum=0,position=0;
   for(int i=0;i<input1;i++){
       sum=input2[i]+1;
       if(sum<10)
       input2[i]=sum;
       else
       input2[i]=0;

   }
   for(int i=0;i<input1;i++){
       if(input2[i]!=0)
       position=i+1;
   }
   return position;