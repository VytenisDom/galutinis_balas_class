# galutinis_balas

# Release v0.1
Two applications - main.cpp and main_vect.cpp.
main.cpp stores information into C arrays
main_vect.cpp stores information into vectors.

# Release v0.2
One application - main_vect.cpp.
It stores information into vectors.

# Release v0.3
One application - main_vect.cpp.
It stores information into vectors.
File input and output.
Inputs and outputs are secured from wrong value types.
Functions and header file are now separated.

# Release v1.0
Three applications:
- vect
- list
- deque
Comparing those three programs:
Vector:
1000:
nuskaitymas: 9.88362 ms
rusiavimas: 1.69312 ms

10000:
nuskaitymas: 83.853 ms
rusiavimas: 11.3569 ms

100000:
nuskaitymas: 889.805 ms
rusiavimas: 89.2976 ms

-----------------------------

List:
1000:
nuskaitymas: 8.74101 ms
rusiavimas: 4.3781 ms

10000:
nuskaitymas: 68.7714 ms
rusiavimas: 531.297 ms

100000:
nuskaitymas: 690.475 ms
rusiavimas: 98921.1 ms

-----------------------------

Deque:
1000:
nuskaitymas: 12.4705 ms
rusiavimas: 7.56914 ms

10000:
nuskaitymas: 115.13 ms
rusiavimas: 34.5681 ms

100000:
nuskaitymas: 1182.05 ms
rusiavimas: 381.798 ms

# Release v1.1
Three applications:
- vect
- list
- deque

# Struct changet to Class

Comparing those three programs:
Vector:
1000:
nuskaitymas: 9.88362 ms
nuskaitymas class: 9.78208 ms
rusiavimas: 38.0968 ms
rusiavimas class: 38.5048 ms

10000:
nuskaitymas: 83.853 ms
nuskaitymas class: 80.4708 ms
rusiavimas: 3301.62 ms
rusiavimas class: 3322.8 ms

-----------------------------

List:
1000:
nuskaitymas: 8.74101 ms
nuskaitymas class: 6.41533 ms
rusiavimas: 3.20756 ms
rusiavimas class: 2.24833 ms

10000:
nuskaitymas: 64.9942 ms
nuskaitymas class: 73.2753 ms
rusiavimas: 297.288 ms
rusiavimas class: 312.394 ms


-----------------------------

Deque:
1000:
nuskaitymas: 12.4846 ms
nuskaitymas class: 12.9323 ms
rusiavimas: 28.0806 ms
rusiavimas class: 27.1918 ms

10000:
nuskaitymas: 118.204 ms
nuskaitymas class: 110.323 ms
rusiavimas: 2466.91 ms
rusiavimas class: 2470.75 ms

# Release v1.2
Custom "<<" operator added.

PC specs:
- CPU: Quad-Core Intel Core i7 2,2 GHz
- RAM: 16 GB DDR3
- SSD: 251 GB PCI

# How to run the program
1. Clone project [Galutinis balas v1.2](https://github.com/krispis1/galutinis_balas_class/tree/v1.2) to your computer.
2. Open BASH or ZSHELL inside the folder.
3. Select one of the program folders.
4. Run `g++ -std=c++11 -o <any_name> <main_vect.cpp || main_list.cpp || main_deque.cpp> funcs.cpp`.
5. Run the program by `./<any_name>`.
