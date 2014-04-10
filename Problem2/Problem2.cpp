#include<iostream>

struct node
{
    int value;
    int index;
    node *next;
};

int main()
{
    int sum=0;
    bool done = false;

    int f_curr = 1;
    int f_last = 1;
    int term=1;

    node *head = new node;
    node *next = new node;
    next->next = NULL;
    head->value = f_last;
    head->index = 1;
    head->next = next;

    while(!done)
    {
        if(f_curr < 4000000)
        {
            int temp = f_curr;
            f_curr = f_curr + f_last;
            f_last = temp;
            term++;
            /*node *new_node = new node;
            new_node->next = NULL;
            next->next = new_node;
            next->value = f_curr;
            next->index = term;
            next = new_node;*/
            if(f_last%2 == 0)
                sum+=f_last;
        }
        else
            done = true;
    }
    std::cout << "Sum is " << sum << "\n";
    /*node *iter = head;
    while(iter->next != NULL)
    {
        std::cout << iter->index << ": " << iter->value << "\n";
        iter = iter->next;
    }*/
}
