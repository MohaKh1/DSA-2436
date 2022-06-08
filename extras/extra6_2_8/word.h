#ifndef WORD_H
#define WORD_H
struct letter{
    char let;
    letter* next;
};

class word{
    private:
        letter* head;
        
    public:
        word(){
            head = nullptr;
            
        }
        void insert(char key, int pos=591851850){
            letter *tmp = new letter;
            tmp->let = key;
            tmp->next = nullptr;
            
            if (head==nullptr){
                head = tmp; 
            }
            
            else{
                letter *current = new letter;
                current = head;
                while(current->next!=nullptr){
                    current = current->next;
                }
                current->next = tmp;
            }
        }
                
        void insert_beg(char key){
            letter *tmp = new letter;
            tmp->let = key;
            tmp->next = nullptr;
            
            if (head==nullptr) {
                head = tmp; 
            }
            else {
                tmp->next = head;
                head = tmp;
            }
        }
        

        
        void display(){
            std::cout << "~display linked list\n";
            letter *temp;
            temp = head;
            while(temp!=nullptr){
                std::cout << temp->let;
                temp = temp->next;
            }
            std::cout << std::endl;
        }

        void delete_last(){
            std::cout << "~Deleting last element\n";

            if(head==nullptr){
                std::cout << "~LList is empty, no deletion occurred\n";
                return;
            }

            letter *tmp;
            tmp = head;
            while (tmp->next->next!=nullptr)
            {
                tmp = tmp->next;
            }
            delete tmp->next;
            tmp->next = nullptr;
        }
        
        void delete_letter(char _let, int del_index=1){
            std::cout << "~Deleting letter " << _let << std::endl;
            
            int _let_count=0;
            bool loop = true;
            letter *prev_del_node;
            prev_del_node = head;
            
            while(loop){
                prev_del_node = prev_del_node->next;
                if (prev_del_node->next->let == _let){
                    _let_count++;
                    if(_let_count==del_index){
                        loop = false;
                    }
                }
                
            }
            std::cout << prev_del_node->let << std::endl;
            letter *deletenode;
            deletenode= prev_del_node->next;
            std::cout << deletenode->let << std::endl;
            prev_del_node->next= prev_del_node->next->next;
            delete deletenode;
            

        

        }


            

    

            

            
            
            
            
    //     }

    /
    

};
#endif