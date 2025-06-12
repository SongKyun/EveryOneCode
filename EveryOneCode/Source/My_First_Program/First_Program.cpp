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

/*class Date
{
public:
    Date() = default;
    explicit Date(int month, int day);

    void print() const { std::cout << month_ << "/" << day_ << std::endl; }

private:
    int month_{1};
    int day_{1};
};

Date::Date(int month, int day)
    : month_{month}, day_{day}
{
    std::cout << "인자 2개인 생성자 호출" << std::endl;
    if (month < 1 || month > 12 || day < 1 || day > 31)
        throw std::out_of_range("잘못된 날짜");
}

int main()
{
    Date today;
    Date piDay(3,14);
    today.print();
    piDay.print();
}*/

/*class Point
{
    int x, y;

public:
    Point(int pos_x, int pos_y) : x(pos_x), y(pos_y) {}

    int GetX() const { return x; }
    int GetY() const { return y; }

    double Distance(const Point &other) const
    { return sqrt(pow(x-other.x, 2) + pow(y-other.y, 2)); }
};

class Geometry
{
public:
    Geometry() : num_points(0) {}

    void AddPoint(const Point &point)
    {
        if (num_points >= 100)
        {
            std::cout << "더 이상 점을 추가할 수 없다." << std::endl;
            return;
        }
        point_array[num_points++] = new Point(point.GetX(), point.GetY());
    }

    void PrintDistance()
    {
        for (int i = 0; i < num_points; ++i)
        {
            for (int j = 0; j < num_points; ++j)
            {
                double dist = point_array[i]->Distance(*point_array[j]);
                std::cout << "점 " << i << "과 점" << j << " 사이 거리: " << dist << std::endl;
            }
        }
    }

    void PrintNumMeets()
    {
        int count = 0;
        // 모든 점쌍 조합으로 직선 생성
        for (int i = 0; i < num_points; ++i)
        {
            for (int j = i + 1; j < num_points; ++j)
            {
                Point *p1 = point_array[i];
                Point *p2 = point_array[j];

                int a = p1->GetY() - p2->GetY();
                int b = p2->GetX() - p1->GetX();
                int c = p1->GetX() * p2->GetY() - p1->GetY() * p2->GetX();

                // 만들어진 직선과 나머지 점쌍을 비교
                for (int k = 0; k < num_points; ++k)
                {
                    for (int l = k + 1; l < num_points; ++l)
                    {
                        if ((k == i) || (l == j) || (k == j && l == j)) continue;

                        int f1 = a * point_array[k]->GetX() + b * point_array[k]->GetY() + c;
                        int f2 = a * point_array[l]->GetX() + b * point_array[l]->GetY() + c;

                        if (f1 * f2 < 0)
                        {
                            ++count;
                        }
                    }
                }
            }
        }
        // 실제 교점 수는 중복 제거 필요 (보정)
        std::cout << "직선들 간의 교점 개수 (추정치) : " << count / 2 << std::endl;
    }

~Geometry() { for (int i = 0; i < num_points; ++i) { delete point_array[i]; } }
    
private:
    Point *point_array[100];
    int num_points;
};

int main() {
    Geometry geo;
    geo.AddPoint(Point(0, 0));
    geo.AddPoint(Point(1, 1));
    geo.AddPoint(Point(1, 0));
    geo.AddPoint(Point(0, 1));

    geo.PrintDistance();
    geo.PrintNumMeets();
    return 0;
}*/

/*#include <vector>
#include <memory>     // unique_ptr
#include <cmath>      // sqrt, pow

// Point 클래스: 2차원 좌표를 저장하고 거리 계산 기능 제공
class Point {
    int x, y;

public:
    Point(int pos_x, int pos_y) : x(pos_x), y(pos_y) {}

    int GetX() const { return x; }
    int GetY() const { return y; }

    // 다른 점과의 거리 계산
    double Distance(const Point& other) const {
        return std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
    }
};

// Geometry 클래스: 여러 점을 관리하며 기하 연산을 수행
class Geometry {
public:
    // 점을 추가하는 함수
    void AddPoint(const Point& point) {
        points.emplace_back(std::make_unique<Point>(point));
    }

    // 모든 점들 간의 거리를 출력
    void PrintDistance() const {
        for (size_t i = 0; i < points.size(); ++i) {
            for (size_t j = i + 1; j < points.size(); ++j) {
                double dist = points[i]->Distance(*points[j]);
                std::cout << "점 " << i << "과 점 " << j << " 사이 거리: " << dist << std::endl;
            }
        }
    }

    // 모든 점쌍으로 생성되는 직선들의 교점 개수를 출력 (정확한 교점 계산 아님)
    void PrintNumMeets() const {
        int count = 0;

        for (size_t i = 0; i < points.size(); ++i) {
            for (size_t j = i + 1; j < points.size(); ++j) {
                const auto& p1 = points[i];
                const auto& p2 = points[j];

                int a = p1->GetY() - p2->GetY();
                int b = p2->GetX() - p1->GetX();
                int c = p1->GetX() * p2->GetY() - p2->GetX() * p1->GetY();

                for (size_t k = 0; k < points.size(); ++k) {
                    for (size_t l = k + 1; l < points.size(); ++l) {
                        if ((k == i && l == j) || (k == j && l == i)) continue;

                        int f1 = a * points[k]->GetX() + b * points[k]->GetY() + c;
                        int f2 = a * points[l]->GetX() + b * points[l]->GetY() + c;

                        if (f1 * f2 < 0) {
                            ++count;
                        }
                    }
                }
            }
        }

        std::cout << "직선들 간의 교점 개수 (추정치): " << count / 2 << std::endl;
    }

private:
    // unique_ptr로 점 객체들을 관리 → 메모리 자동 해제
    std::vector<std::unique_ptr<Point>> points;
};

int main() {
    Geometry g;
    g.AddPoint(Point(0, 0));
    g.AddPoint(Point(1, 0));
    g.AddPoint(Point(0, 1));
    g.AddPoint(Point(1, 1));

    g.PrintDistance();
    g.PrintNumMeets();

    return 0;
}*/