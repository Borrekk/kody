#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  bmi.py
#  
#  Copyright 2020  <>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  


def main(args):
    
    
    waga = float(input("Podaj swoją wage (kg)")) 
    wzrost = int(input("Podaj swoj wzrost (cm)")) 
    
    wzrost = wzrost/100
    
    
    bmi = waga/(wzrost*wzrost)
    
    
    
    if bmi < 18.49:
        print(bmi , "Masz niedowage")
    elif bmi >= 18.5 and bmi < 24.99:
        print( bmi,"Twoje Bmi jest w normie")
    elif bmi >= 25 and bmi < 29.9:
        print(bmi,"Masz Nadwage")
    elif bmi>= 30 and bmi<50:
        print(bmi, "Jestes otyly")
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
