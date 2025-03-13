#include <iostream>

#define MAX 100000

class Stack
{
public:
    Stack() { };

    void Push(long a);

    long Pop();

    int Size();

    int Empty();

    long Top();
private:
    int index = 0;
    long stack[MAX] = {0, };
};

void Stack::Push(long a)
{
    stack[index] = a;
    index++;
}

long Stack::Pop()
{
    if (index != 0)
    {
        int temp = stack[index - 1];
        stack[index - 1] = 0;
        index--;
        return temp;
    }
    else
    {
        return -1;
    }
}

int Stack::Size()
{
    return index;
}

int Stack::Empty()
{
    if (index != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

long Stack::Top()
{
    if (index != 0)
    {
        return stack[index - 1];
    }
    else
    {
        return -1;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int nCMD;
    std::string cmd;
    long num;

    Stack* s = new Stack();

    std::cin >> nCMD;

    for (int i = 0; i < nCMD; i++)
    {
        std::cin >> cmd;
        if (cmd == "push")
        {
            std::cin >> num;
            s->Push(num);
        }
        else
        {
            if (cmd == "pop")
            {
                std::cout << s->Pop() << std::endl;
            }
            else if (cmd == "empty")
            {
                std::cout << s->Empty() << std::endl;
            }
            else if (cmd == "size")
            {
                std::cout << s->Size() << std::endl;
            }
            else if (cmd == "top")
            {
                std::cout << s->Top() << std::endl;
            }
        }
        
    }
}
