#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Node declaration 
struct Node
{
    string data;
    Node* next;
    Node(string text) : data(text), next(NULL) {}
};


// linked list class to create a linked list
class linkedList
{
private:
    Node* head;

public:
    // constructor
    linkedList() : head(NULL) {}

    // insert a node  function to insert a node at the end of the linked list
    void insert(string data,int line_index)
    {
        Node* new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            Node* current_node = head;
            int count = 1;
            while (count < line_index-1)
            {
                current_node = current_node->next;
                
                count++;
            }
            Node* next = current_node->next;
            current_node->next = new_node;
            new_node->next = next;
        }
    }

    // delete a node function to delete a node in the linked list 
    void delet(int line_index){
        int count = 1;
        Node* current_node = head;
        Node* prev = NULL;

        if(count==1){
            head = head->next;
            return;
        }

        if(current_node == NULL){
            cout<<"It's empty! ";
            return;
        }

        while(count<line_index){
            prev = current_node;
            current_node = current_node->next;
            count++;
        }
        prev->next = current_node->next;
    }

    // show all nodes function to show the linked list
    void show(){
        Node* temp = head;
        int count = 1;
        while(temp!=NULL){
            cout<<count<<"-"<<temp->data<<endl;
            temp = temp->next;
            count++;
        }
    }

    // access the node in a linked list
    string access(int line_index){
        Node* current_node = head;
        int count = 1;
        while(count <= line_index){
            current_node = current_node->next;
            count++;
        }
        return current_node->data;
    }

};

// class line_editor to implement editor functions

class lineEditor{
    linkedList LL;
    int count = 1 ;

    // create file function 
    void createFile(string filename){
    }

    // save file function 
    void save(string filename){
    }

    // delete file function 
    void deletefile(string filename){}

    //

};

int main(){
    
}