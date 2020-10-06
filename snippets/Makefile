test-compte: test-compte.o compte.o
	g++ -o test-compte test-compte.o compte.o 

test-compte.o: test-compte.cpp compte.h
	g++ -c test-compte.cpp 

compte.o: compte.cpp compte.h
	g++ -c compte.cpp

comptead.o: comptead.cpp comptead.h compte.h
	g++ -c comptead.cpp 

compterenum.o: compterenum.cpp compterenum.h compte.h
	g++ -c compterenum.cpp 

test-agence: test-agence.o compte.o compterenum.o
	g++ -o test-agence test-agence.o compterenum.o compte.o 

test-agence.o: test-agence.cpp compterenum.h compte.h
	g++ -c test-agence.cpp 

emplace_back: emplace_back.o
	g++ -std=c++11 -o emplace_back emplace_back.o	

emplace_back.o: emplace_back.cpp
	g++ -std=c++11 -c emplace_back.cpp 

smart_pointers: smart_pointers.o
	g++ -std=c++11 -o smart_pointers smart_pointers.o

smart_pointers.o: smart_pointers.cpp 
	g++ -std=c++11 -c smart_pointers.cpp 
