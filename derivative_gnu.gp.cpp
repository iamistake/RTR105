#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>
set terminal png size 500,500
set output "lab_work3.png"

set xlabel "x"
set ylabel "y"
set grid



plot [-10:10] x*x + 2*x +1 title "f(x) gp",\
	2*x + 2 title "f'(x) gp",\
	"derivative.dat" every::1 using 1:2 with lines title "f(x) file",\
	"derivative.dat" every::1 using 1:3 with lines title "f'(x) fd ",\
	"derivative.dat" every::1 using 1:4 with lines title "f'(x) af ",\
	"derivative.dat" every::1 using 1:5 with lines title "f''(x) df ",\
	"derivative.dat" every::1 using 1:6 with lines title "f''(x) af "



