class Grade extends Student{
   private int score;
    
   Grade(String fn, String ln, int ph, int sc) 
   {
       super(fn, ln, ph);
       score = sc;
   }
        
   char calculate()
   {
        if (score < 40) return 'D';
        else if (score < 60) return 'B';
        else if (score < 75) return 'A';
        else if (score < 90) return 'E';    
        else return 'O'; 
   }
}