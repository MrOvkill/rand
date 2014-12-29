default:
	make multi

clean:
	rm *.a
	rm *.o
	rm *.so

32:
	g++ -c -m32 rand32.cxx -o rand32.o
	# The Random Library ( librand ) for C++ ( pp ) 32-bit ( 32 ) static ( s ) 
	ar rcs librandpp32s.a rand32.o
	# The Random Library ( librand ) for C++ ( pp ) 32-bit ( 32 ) dynamic ( d ) 
	g++ -shared -m32 rand32.o -o librandpp32d.so

64:
	g++ -c -m64 rand64.cxx -o rand64.o
	# The Random Library ( librand ) for C++ ( pp ) 64-bit ( 64 ) static ( s ) 
	ar rcs librandpp64s.a rand64.o
	# The Random Library ( librand ) for C++ ( pp ) 64-bit ( 64 ) dynamic ( d ) 
	g++ -shared -m64 rand64.o -o librandpp64d.so

multi:
	g++ -c rand32.cxx -o rand32.o
	g++ -c rand64.cxx -o rand64.o
	# The Random Library ( librand ) for C++ ( pp ) Multiarch ( m ) static ( s ) 
	ar rcs librandppms.a rand32.o rand64.o
	# The Random Library ( librand ) for C++ ( pp ) Multiarch ( m ) dynamic ( d ) 
	g++ -shared rand32.o rand64.o -o librandppmd.so