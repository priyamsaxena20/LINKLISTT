class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        struct Node *ptr;
        int count =0;
        ptr=head;
        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
        if(count==0)
        return -1;
        
        count=count/2;
        
        ptr=head;
        
        for(int i=1;i<=count;i++){
            ptr=ptr->next;
        }
        return ptr->data;
    }
};
/**************************************************************************************************/
2 pointer way
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        
        struct Node *slow,*fast;
      
        slow=head;
        fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(slow==NULL)
        return -1;
        return slow->data;
    }
};
