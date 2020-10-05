
struct pathStack
{
    int data;
    struct pathStack *next;
};
struct pathStack *top=NULL;

void push(int val)
{
    struct pathStack *temp;
    temp = (struct pathStack*)malloc(sizeof(struct pathStack));
    temp->data = val;
    temp->next = top;
    top = temp;
}

void popDisplay()
{
    struct pathStack *temp;
    if (top==NULL)
        printf("\n ** Destination Arrived **");
    else
    {
        temp = top;
        printf(" %d ",temp->data);
        returnAddress(temp->data);
        top = top->next;
        free(temp);
    }
}

int empty()
{
    if (top == NULL)
        return 0;
    else
        return 1;
}
