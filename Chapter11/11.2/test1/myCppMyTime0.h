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
	//��Ӽӷ������
	Time operator+(const Time &t) const;
	//�������������
	Time operator-(const Time &t) const;
	Time operator*(double mult) const;
};

#endif // !MYTIME0_H_
