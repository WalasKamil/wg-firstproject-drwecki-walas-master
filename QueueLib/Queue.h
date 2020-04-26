#pragma once
#include <vector>
class Queue
{
private:
	
	std::vector<int> values;

public: 

	void insert(int liczba) noexcept;
	int remove();
	int count() const noexcept;
	void display() const;
	Queue operator+(int liczba) const noexcept;
	Queue operator+(Queue v) noexcept;
	Queue operator*(int liczba) noexcept;
	Queue operator/(int liczba);
	Queue operator-(int liczba) noexcept;
	void operator+=(int liczba);
	void operator+=(Queue v) noexcept;
	void operator*=(int liczba) noexcept;
	void operator/=(int liczba);
	void operator-=(int liczba) noexcept;
	
};

