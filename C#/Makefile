default:
	make multi

clean:
	rm *.dll

32:
	gmcs /target:library Source/Rand/Rand32.cs /out:RandSharp32.dll

64:
	gmcs /target:library Source/Rand/Rand64.cs /out:RandSharp64.dll

multi:
	gmcs /target:library Source/Rand/Rand32.cs Source/Rand/Rand64.cs /out:RandSharpMulti.dll
