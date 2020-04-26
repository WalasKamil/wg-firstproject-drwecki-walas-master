#include "pch.h"
#include "Queue.h"
#include <vector>
#include <iostream>

void Queue::insert(int liczba) noexcept
{
	values.insert(values.begin(), liczba);
}

int Queue::remove()
{
	int v =values.back();
	values.pop_back();
	return v;
}


int Queue::count() const noexcept
{
	return values.size();
}

void Queue::display() const
{
	for (int i = 0; i < values.size(); i++)
	{
		std::cout << values[i]<<", ";
	}
}

Queue Queue::operator+(int liczba) const noexcept
{
	Queue wynik;

	for (auto n : values)
		wynik.values.push_back(n + liczba);
	return wynik;
}

Queue Queue::operator+(Queue v) noexcept
{
	Queue wynik;
	
	for (auto n : v.values)
		wynik.values.push_back(n);
	for (auto n : values)
		wynik.values.push_back(n);
	return wynik;
}

Queue Queue::operator*(int liczba) noexcept
{
	Queue wynik;
	for (auto n : values)
		wynik.values.push_back(n*liczba);	
	return wynik;
}
Queue Queue::operator/(int liczba)
{
	Queue wynik;
	if (liczba == 0)
		throw std::exception();
	for (auto n : values)
		wynik.values.push_back(n/liczba);		
	return wynik;
}

Queue Queue::operator-(int liczba) noexcept
{
	Queue wynik;
	for (auto n : values)
		wynik.values.push_back(n-liczba);	
	return wynik;
}

void Queue::operator+=(int liczba)
{
	
	for (int i = 0; i < values.size(); i++)
	{
		values[i] += liczba;
	}
}

void Queue::operator+=(Queue v) noexcept
{
	for (auto n : v.values)
		values.push_back(n);	
}

void Queue::operator*=(int liczba) noexcept
{
	for (int i = 0; i < values.size(); i++)
	{
		values[i] *= liczba;
	}
}

void Queue::operator/=(int liczba)
{
	if (liczba == 0)
		throw std::exception();
	for(int i = 0; i < values.size(); i++)
	{
		values[i] /= liczba;
	}
}

void Queue::operator-=(int liczba) noexcept
{
	for (int i = 0; i < values.size(); i++)
	{
		values[i] -= liczba;
	}
}







