default:
	make multi

clean:
	rm *.o
	rm *.so
	rm *.a

32:
	dmd -c -m32 rand/rand32.d -ofrand32.o
	ar rcs librandd32s.a rand32.o
	dmd -m32 -shared rand32.o -oflibrandd32d.so

64:
	dmd -c -m64 rand/rand64.d -ofrand64.o
	ar rcs librandd64s.a rand64.o
	dmd -m64 -shared rand64.o -oflibrandd64d.so

multi:
	dmd -c rand/rand32.d -ofrand32.o
	dmd -c rand/rand64.d -ofrand64.o
	ar rcs libranddms.a rand32.o rand64.o
	dmd -shared rand32.o rand64.o -oflibranddmd.so	
