using namespace std;

class Palindrome 
{
    private:
        char stack[1000];
        int stack_top;
        
        char queue[1000];
        int queue_front;
        int queue_rear;
        
    public:
        Palindrome(): stack_top(-1), queue_front(0), queue_rear(-1) {}
        void pushCharacter(char);
        void enqueueCharacter(char);
        char popCharacter();
        char dequeueCharacter();
};

void Palindrome::pushCharacter(char ch)
{
    stack[++stack_top] = ch;    
}    

void Palindrome::enqueueCharacter(char ch)
{
    queue[++queue_rear] = ch;
}

char Palindrome::popCharacter()
{
    return stack[stack_top--];
}

char Palindrome::dequeueCharacter()
{
    return queue[queue_front++];
}
