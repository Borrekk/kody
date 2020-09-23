/*
 * bmi.cxx
 * 
 * Copyright 2020  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float waga; 
	float wzrost;
	float bmi;
	
	wzrost = 0;
	waga = 0;
	bmi =  0;
	
	
	
	
	 
	cout <<"Podaj swoją wagę(kg)";
	cin>>waga;
	
	cout<<"Podaj swój wzrost(cm)";
	cin>>wzrost;
	
	wzrost = wzrost/100; 
	
	bmi = waga/(wzrost*wzrost);
	 
	 
	cout<<bmi ;
	
	if (bmi < 18.49) 
		cout<<" Masz niedowage";
    else if (bmi >= 18.5 and bmi < 24.99) 
		cout<<" Twoje Bmi jest w normie";
    else if (bmi >= 25 and bmi < 29.9) 
		cout<<" Masz Nadwage";
    else if (bmi>= 30 and bmi<50)  
		cout<<" Jestes Otyly";
	
	 
	return 0;
}

