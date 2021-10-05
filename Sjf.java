public class Sjf {
   static int process[] = {4,2,3,1};
   static int bt[] = {2,3,6,21};
   static double AWT;
   static double   ATT;

     
      Sjf(int process[], int bt[]){  
        int[] wt  = new int[4];
        int[] tt  = new int[4]; 
       
        
        //waiting time 
        for(int i = 0; i < 4; i++)
        {
          if(i == 0)
          {
            wt[i] = 0;
            tt[i] = bt[i];
          }else{
            wt[i] = wt[i-1] + bt[i-1];
            tt[i] = wt[i] + bt [i];
            


          }
  

        }

        for(int i = 0; i < 4; i++){
          AWT = AWT + wt[i];
          ATT = ATT + tt[i];

        }
        for(int i = 0; i < 4; i++){
        
        System.out.println(process[i]+"      "+bt[i]+"      "+wt[i]+"      "+tt[i]); 
        }
        System.out.println("AWT = "+AWT/4+"  ATT = "+ATT/4);
      }

      public static void main(String[] args)
      {
           new Sjf(process, bt);

      }
}
