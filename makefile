all: hw4

hw4: 
	g++ -o hw4 main.cpp content.cpp communication.cpp -lpthread

clean:
	rm hw4 *.o


