/*
 * najwieksza.cxx
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
	float a;
	float b;
	float c;
	
	
	a = 0;
	b = 0;
	c = 0;
	
	cout<<"Podaj pierwszą liczbę: ";
	cin>>a;
	
	cout<<"Podaj druga liczbę: ";
	cin>>b;
	
	cout<<"Podaj trzecia liczbę: ";
	cin>>c;

	if (a > b && a > c) cout<<a;
	else if(b > a && b > c) cout<<b;
	else if (c > a && c > b) cout<<c;
	return 0;
}

