default:
	make multi

clean:
	rm *.a
	rm *.o
	rm *.so

32:
	gcc -c -m32 rand32.c -o rand32.o
	ar rcs librand32.a rand32.o
	gcc -shared -m32 rand32.o -o librand32.so
64:
	gcc -c -m64 rand64.c -o rand64.o
	ar rcs librand64.a rand64.o
	gcc -shared -m64 rand64.o -o librand64.so

multi:
	gcc -c rand32.c -o rand32.o
	gcc -c rand64.c -o rand64.o
	ar rcs librand.a rand32.o rand64.o
	gcc -shared rand32.o rand64.o -o librand.so