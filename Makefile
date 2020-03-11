convertCSV.exe: CSVreader.o main.o
	g++ main.o CSVreader.o -o convertCSV.exe 

CSVreader.o: CSVreader.cpp CSVreader.h
	g++ -c CSVreader.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o convertCSV.exe
