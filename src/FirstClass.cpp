#include <iostream>
#include <cstring>
class Hero
{
private:
    int health;
    char level;
    char* name;

public:
    Hero(/* args */);
    ~Hero();
    void setHealth(int health);
    void setLevel(char level);
    void setName(char name[]);
    Hero(Hero& obj);
    int getHealth();
    char getLevel();
    char* getName();
};

Hero::Hero(/* args */)
{
    std::cout<<"constructor called";
    name = new char[100];
}

Hero::~Hero()
{
}
//copy construtor
Hero::Hero(Hero& obj)
{
    char *temp= new char[strlen(obj.name)+1];
    strcpy(temp,obj.name);
    this->health=obj.health;
    this->level=obj.level;
    this->name=temp;
    //strcpy(this->name,obj.name);
    
}
void Hero::setHealth(int health)
{
    this->health=health;
}
int Hero::getHealth()
{
    return health;
}
void Hero::setLevel(char level)
{
    this->level=level;
}
char Hero::getLevel()
{
    return level;
}
void Hero::setName(char name[])
{
    strcpy(this->name,name);
}
char* Hero::getName()
{
    return name;
}

int main()
{
    char arr[11]= "jayvardhan";
    Hero ramesh;
    ramesh.setLevel('A');
    ramesh.setHealth(100);
    ramesh.setName(arr);
    std::cout<<"Health is ->"<<ramesh.getHealth()<<std::endl;
    std::cout<<"Level is ->"<<ramesh.getLevel()<<std::endl;
    std::cout<<"name is ->"<<ramesh.getName()<<std::endl;

    Hero suresh(ramesh);   

     std::cout<<"Health is ->"<<suresh.getHealth()<<std::endl;
    std::cout<<"Level is ->"<<suresh.getLevel()<<std::endl;
    std::cout<<"name is ->"<<suresh.getName()<<std::endl;

    arr[0]='N';
    ramesh.setName(arr);
     std::cout<<"Health is ->"<<ramesh.getHealth()<<std::endl;
    std::cout<<"Level is ->"<<ramesh.getLevel()<<std::endl;
    std::cout<<"name is ->"<<ramesh.getName()<<std::endl;

    std::cout<<"Health is ->"<<suresh.getHealth()<<std::endl;
    std::cout<<"Level is ->"<<suresh.getLevel()<<std::endl;
    std::cout<<"name is ->"<<suresh.getName()<<std::endl;
    // Hero ramesh;
    // ramesh.setHealth(10);
    // ramesh.setLevel('A');

    // std::cout<<"Health is ->"<<ramesh.getHealth()<<std::endl;
    // std::cout<<"Level is ->"<<ramesh.getLevel()<<std::endl;

    // Hero ritesh(ramesh);

    //  std::cout<<"Health is ->"<<ritesh.getHealth()<<std::endl;
    //  std::cout<<"Level is ->"<<ritesh.getLevel()<<std::endl;
    
}