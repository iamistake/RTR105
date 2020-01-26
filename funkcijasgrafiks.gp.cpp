#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>
set terminal png size 500,500
set output "labwork2.png"
set xlabel "x"
set ylabel "y"
set grid

f(x) = x*x + 2*x + 1

plot f(x) title "x^2+2x+1",\
	'func_dati.dat' title "Plot no faila"
