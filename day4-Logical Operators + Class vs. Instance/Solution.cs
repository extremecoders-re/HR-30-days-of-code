class Person {
    public int age;     
    
	public Person(int initial_Age) 
    {
        // Add some more code to run some checks on initial_AgeOfPerson
        if (initial_Age < 0) 
        {
            age = 0;
            Console.WriteLine("This person is not valid, setting age to 0.");
        }
        else 
            age = initial_Age;
     }
    
     public void amIOld() {
        // Do some computations in here and print out the correct statement to the console
         if (age < 13) Console.WriteLine("You are young.");
         else if (age < 18) Console.WriteLine("You are a teenager.");
         else Console.WriteLine("You are old.");
     }

     public void yearPasses() {
        // Increment the age of the person in here
         age++;
     }
