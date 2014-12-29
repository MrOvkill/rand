default:
	make multi

clean:
	rm *.a
	rm *.o
	rm *.so

32:
	gcc -c -m32 rand32.c -o rand32.o
	# The Random Library ( librand ) 32-bit ( 32 ) static ( s ) 
	ar rcs librand32s.a rand32.o
	# The Random Library ( librand ) 32-bit ( 32 ) dynamic ( d ) 
	gcc -shared -m32 rand32.o -o librand32d.so
64:
	gcc -c -m64 rand64.c -o rand64.o
	# The Random Library ( librand ) 64-bit ( 64 ) static ( s ) 
	ar rcs librand64s.a rand64.o
	# The Random Library ( librand ) 64-bit ( 64 ) dynamic ( d ) 
	gcc -shared -m64 rand64.o -o librand64d.so

multi:
	gcc -c rand32.c -o rand32.o
	gcc -c rand64.c -o rand64.o
	# The Random Library ( librand ) Multi-arch ( m ) static ( s ) 
	ar rcs librandms.a rand32.o rand64.o
	# The Random Library ( librand ) Multi-arch ( m ) dynamic ( d ) 
	gcc -shared rand32.o rand64.o -o librandmd.so