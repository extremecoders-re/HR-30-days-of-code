using System;
using System.IO;

class Solution {
    static void Main(String[] args) 
    {
        int T = Convert.ToInt32(Console.ReadLine());
        for (int i = 0; i < T; i++) Console.WriteLine(Convert.ToString(Convert.ToInt32(Console.ReadLine()), 2));
    }
}