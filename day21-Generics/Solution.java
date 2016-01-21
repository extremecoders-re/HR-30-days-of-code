class Printer
{
   public <T> void printArray(T arr[])
   {
       for (T elem: arr) System.out.println(elem);
   }
}