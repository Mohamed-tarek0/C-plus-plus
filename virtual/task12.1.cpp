#include <iostream>
#include <string>

class person{

    public:
    virtual void get_data()=0;
    virtual void set_data()=0;

    protected :
    std::string name;
    int age;
};

class professor : public person
{
    private:
    int cur_id;
    public :
    professor(std::string name_,int age_,int id_) : cur_id{id_}
    {
        this->name=name_;
        this->age=age_;
    }
    
    void get_data() const
    {
        std::cout<<"your name is :"<<name
        <<"\nyour age is :"<<age
        <<"\nID_Professor id : "<<cur_id
        <<std::endl;
    }

    void set_data(){
        std::string Na;
        int ag,id;
        std::cout<<"Enter your name : ";
        std::cin>>Na;
        std::cout<<"Enter your age : ";
        std::cin>>ag;
        std::cout<<"Enter your id : ";
        std::cin>>id;
        name=Na;
        cur_id=id;
        age=ag;
    }

};

class student : public person
{
    private :
    static int curr_id_counter; 
    int cur_id; 
    int marks[6]; 
    public :
    student(std::string name_,int age_) :cur_id{++curr_id_counter}
    {
        this->name=name_;
        this->age=age_;
        for (int i = 0; i < 6; ++i) {
            marks[i] = 0;
        }
    }
    
    void get_data()  override
    {
        std::cout<<"your name is :"<<name
        <<"\nyour age is :"<<age
        <<"\nID_Student id : "<<cur_id
        <<std::endl;
        }
    
    void set_data(){
        std::string Na;
        int ag,id;
         std::cout<<"Enter your name : ";
        std::cin>>Na;
        std::cout<<"Enter your age : ";
        std::cin>>ag;
        std::cout<<"Enter your id : ";
        std::cin>>id;
        name=Na;
        cur_id=id;
        age=ag;
        std::cout << "Enter your marks (6 subjects): \n";

        for (int i = 0; i < 6; ++i) {
            std::cout<<"marks ("<<i+1 <<" subjects):";
            std::cin >> marks[i];
        }

    }    

};

int student::curr_id_counter = 0;

int main(){
    student s1("John", 20);
    s1.get_data();
    s1.set_data();
    s1.get_data();

}