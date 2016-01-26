import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        for (int i=0; i<T; i++) 
        {
            int N = sc.nextInt();
            // Fast check if number is divisible by 2
            if (N < 2 || (N > 2 && (N&1) == 0)) System.out.println("Not prime");
            else
            {
                boolean isPrime = true;
                for (int j = 2; j < (int)Math.sqrt(N); j++) 
                {
                    if (N%j == 0) 
                    {
                        isPrime = false;
                        break;
                    }
                }
                System.out.println(isPrime?"Prime":"Not prime");
            }
        }
    }
}