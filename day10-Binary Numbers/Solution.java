import java.io.*;
import java.util.*;

public class Solution 
{
    public static void main(String[] args) 
    {
        char[] binary = new char[31];
        int T, N;
        
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        
        for (int i = 0, numDigits = -1; i < T; i++, numDigits = -1)
        {
            N = sc.nextInt();
            do
            {
                binary[++numDigits] = (char)(48 + (N & 1));
                N >>= 1;
            } while (N > 0);
            
            while (numDigits >= 0) System.out.print(binary[numDigits--]);
            System.out.println();
        }
        
    }
}
