	// Add your code here

    Difference(int a[])
    {
        elements = a;
    }

    void computeDifference()
    {
        maximumDifference = -1;
        for (int i = 0; i < elements.length; i++)
        {
            for (int j = i+1; j < elements.length; j++)
            {
                int absDiff = Math.abs(elements[i] - elements[j]);
                maximumDifference = (absDiff > maximumDifference ? absDiff : maximumDifference);
            }
            
        }
    }
