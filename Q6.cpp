#include <iostream>
using namespace std;

class Time24
{
protected:
    int hour;
    int min;
    int sec;

public:
    Time24()
    {
        this->setHour();
        this->setMinute();
        this->setSecond();
    }
    // get time in hour , min , sec
    void setHour()
    {
        cout << "Enter Hour:";
        cin >> hour;
        if (hour > 24)
        {
            hour = hour % 24;
        }
    }

    void setMinute()
    {
        cout << "Enter minutes:";
        cin >> min;
        if (min >= 60)
        {
            hour += min / 60;
            min %= 60;
        }
    }

    void setSecond()
    {
        cout << "Enter Second:";
        cin >> sec;
        if (sec > 60)
        {
            min += sec / 60;
            sec %= 60;
        }
    }

    virtual void show()
    {
        cout << "Time in 24 Base : " << hour << ":" << min << ":" << sec << endl;
    }
};

class Time12 : public Time24
{
    // if hour < 12 convert into 12 based with pm
    //  make string HH/MM/SS
    //  display time
public:
    int h, m, s;
    Time12()
    {
        h = hour % 12;
        m = min;
        s = sec;
    }

    void show()
    {
        if (h < 0)
        {
            h *= -1;
        }

        if (hour < 12)
        {
            cout << "Time in 12 Base : " << h << ":" << m << ":" << s << " AM" << endl;
        }
        else
        {
            cout << "Time in 12 Base : " << h << ":" << m << ":" << s << " PM" << endl;
        }
    }
};

int main()
{
    cout<<"12 Hour Based Time :"<<endl;
    Time12 t2;
    Time24 *t12 = &t2;
    cout<<endl<<"24 Hour Based Time :"<<endl;
    Time24 t24;

    cout<<endl<<endl;
    t12->show();
    t24.show();

    return 0;
}