class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty()) return NULL;
        while(s1.size()>1)
        {
            int element=s1.top();
            s2.push(element);
            s1.pop();
        }
        int z=s1.top();
        s1.pop();
        while(!s2.empty())
        {
            int e=s2.top();
            s1.push(e);
            s2.pop();
        }
        return z;
    }
    
    int peek() {
        while(s1.size()>1)
        {
            int element=s1.top();
            s2.push(element);
            s1.pop();
        }
        int z=s1.top();
        s2.push(z);
        s1.pop();
        while(!s2.empty())
        {
            int e=s2.top();
            s1.push(e);
            s2.pop();
        }
        return z;
    }
    int size()
    {
        return s1.size()+s2.size();
    }
    bool empty() {
        return size()==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */