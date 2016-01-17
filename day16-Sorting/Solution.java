import java.util.*;

public class Solution 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int arr[]= new int[N];
        
        for (int i = 0; i < N; i++) arr[i] = sc.nextInt();
        Arrays.sort(arr);
        int minDiff = Math.abs(arr[0] - arr[1]);
        for (int i = 0; i < N -1; i++)
        {
            int diff = Math.abs(arr[i] - arr[i+1]);
            minDiff = diff < minDiff ? diff:minDiff;
        }
        
        for (int i = 0; i < N -1; i++)
        {
            int diff = Math.abs(arr[i] - arr[i+1]);
            if (diff == minDiff) System.out.printf("%d %d ",arr[i],arr[i+1]);
        }
    }
}