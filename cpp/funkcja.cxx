/*
 * funkcja.py.cxx
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


void  sumuj(int l1, int l2){
	int suma =l1+l2;
	cout<<"Suma: "<<suma<<endl;
}

void  roznica(int l1, int l2){
	int roznic =l1+l2;
	cout<<"roznica: "<<roznic<<endl;
}

int pomnoz(int l1, int l2){
	int iloczyn = l1*l2;
	
	return iloczyn;
	}



int main(int argc, char **argv)
{
	
		
	int liczba1, liczba2;
	cout<<"Podaj liczby: ";
	cin>>liczba1;
	cin>>liczba2;
	
	//sumuj(liczba1,liczba2)
	//roznica(liczba1,liczba2)
	
	//int wynik = pomnoz(liczba1,liczba2);
	//cout<<"Iloczyn: "<<wynik;
	
	cout<<"Iloczyn: "<<pomnoz(liczba1,liczba2);
	
	
	return 0;
}

