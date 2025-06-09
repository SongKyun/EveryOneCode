#include "First_Program.h"
#include <iostream>

/*typedef struct Animal
{
    char name[30];
    int age;

    int health;
    int food;
    int clean;
} Animal;

void create_animal(Animal *animal)
{
    std::cout << "동물의 이름? ";
    std::cin >> animal->name;

    std::cout << "동물의 나이? ";
    std::cin >> animal->age;

    animal->health = 100;
    animal->food = 100;
    animal->clean = 100;
}

void play(Animal *animal)
{
    animal->health += 10;
    animal->food += 30;
    animal->clean += 20;
}

void one_day_pass(Animal *animal)
{
    animal->health -= 10;
    animal->food -= 30;
    animal->clean -= 20;
}

void show_stat(Animal *animal)
{
    std::cout << animal->name << "의 상태" << std::endl;
    std::cout << "체력    : " << animal->health << std::endl;
    std::cout << "배부름   : " << animal->food << std::endl;
    std::cout << "청결    : " << animal->clean << std::endl;
}*/

/*int change_val(int &p)
{
    p = 3;
    return 0;
}*/

//int main()
//{
    /*Animal *list[10];
    int animal_num = 0;

    for (;;)
    {
        std::cout << "1. 동물 추가하기" << std::endl;
        std::cout << "2. 놀기 " << std::endl;
        std :: cout << "3. 상태 보기 " << std::endl;

        int input;
        std::cin >> input;

        switch (input)
        {
            int play_with;
            case 1:
                list[animal_num] = new Animal;
                create_animal(list[animal_num]);

                animal_num++;
                break;
            case 2:
                std::cout << "누구랑 놀게? : ";
                std::cin >> play_with;

                if (play_with < animal_num) play(list[play_with]);

                break;
            case 3:
                std::cout << "누구껄 보게? : ";
                std::cin >> play_with;
                if (play_with < animal_num) show_stat(list[play_with]);
                break;
        }
        for (int i = 0; i < animal_num; i++)
        {
            one_day_pass(list[i]);
        }
    }

    for (int i = 0; i < animal_num; i++)
    {
        delete list[i];
    }*/
    
    /*int arr_size;
    std::cout << "array size: ";
    std::cin >> arr_size;
    int *list = new int[arr_size];
    for (int i = 0; i < arr_size; i++) { std::cin >> list[i]; }
    for (int i = 0; i < arr_size; i++) { std::cout << i << "th element of list : " << list[i] << std::endl;}
    delete[] list;
    return 0;*/
    
    /*int* p = new int;
    *p = 10;

    std::cout << *p << std::endl;

    delete p;
    return 0;*/
    
    /*int a = 3;
    int& another_a = a;

    another_a = 5;
    std::cout<< "a : " << a << std::endl;
    std::cout << "another_a : " << another_a << std::endl;*/
    
    /*std::cout << "Hello World!" << std::endl;
    std::cout <<"hi" << std::endl << "my name is" << "Psi" << std::endl;
    return 0;*/
//}

/*class Animal
{
private:
    int food;
    int weight;

public:
    void set_animal(int _food, int _weight)
    {
        food = _food;
        weight = _weight;
    }
};

int main()
{
    Animal animal;
    animal.set_animal(1, 10);

    return 0;
}*/

/*class Date
{
    int year_;
    int month_;
    int day_;

    // 윤년 판단 함수
    bool IsLeapYear(int year) const
    {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }

    // 각 달의 최대 일수를 반환
    int GetMaxDay(int year, int month) const
    {
        static const int days_in_month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (month == 2 && IsLeapYear(year))
        {
            return 29;
        }
        return days_in_month[month];
    }
    
    public:
    void SetDate(int year, int month, int date)
    {
        year_ = year;
        month_ = month;
        day_ = date;
    }
    
    void AddDay(int inc)
    {
        day_ += inc;
        while (true)
        {
            int max_day = GetMaxDay(year_, month_);
            if (day_ <= max_day)
                break;
            day_ -= max_day;
            AddMonth(1); // 월 + 1, 연도 보정
        }
    }
    
    void AddMonth(int inc)
    {
        month_ += inc;
        while (month_ > 12)
        {
            month_ -= 12;
            AddYear(1);
        }
        // 현재 월의 최대일보다 날짜가 크면 보정
        int max_day = GetMaxDay(year_, month_);
        if (day_ > max_day)
        {
            day_ = max_day;
        }
    }
    
    void AddYear(int inc)
    {
        year_ += inc;
        if (month_ == 2 && 29 && IsLeapYear(year_))
        {
            day_ = 28; // 윤년 아님 -> 2월 28일로 보정
        }
    }

    void ShowDate()
    {
        std::cout << year_ << "/" << month_ << "/" << day_ << std::endl;
    }
};

int main()
{
    Date date;
    date.SetDate(2012,2,28);
    date.AddDay(3);
    date.ShowDate();

    date.AddMonth(10);
    date.ShowDate();

    date.AddYear(1);
    date.ShowDate();

    return 0;
}*/