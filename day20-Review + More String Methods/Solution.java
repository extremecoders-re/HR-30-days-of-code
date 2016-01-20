import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;

public class Solution 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String text = sc.nextLine();
        
        StringTokenizer st = new StringTokenizer(text, "![,?.\\_'@+] ");
        System.out.println(st.countTokens());
        while (st.hasMoreTokens()) System.out.println(st.nextToken());
    }
}
