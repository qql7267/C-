#ifndef MYTIME0_H_
#define MYTIME0_H_

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time &T) const;
	void Show() const;
	//添加加法运算符
	Time operator+(const Time &t) const;
	//其他重载运算符
	Time operator-(const Time &t) const;
	Time operator*(double mult) const;
};

#endif // !MYTIME0_H_
