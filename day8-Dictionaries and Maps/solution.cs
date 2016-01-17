using System;
using System.Collections.Generic;
using System.IO;

class Solution 
{
    static void Main(String[] args) 
    {
        Dictionary<string, string> phonebook = new Dictionary<string, string>();
        int N = Int32.Parse(Console.ReadLine());
        
        for (int i=0; i<N; i++)
        {
            string name = Console.ReadLine();
            string phone = Console.ReadLine();
            phonebook.Add(name, phone);
        }
        
        while (true)
        {
            string query = Console.ReadLine();
            if (query == null) break;
            else Console.WriteLine(phonebook.ContainsKey(query)?query+"="+phonebook[query]:"Not found");
        }
    }
}