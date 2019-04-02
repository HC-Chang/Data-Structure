all: generate

generate: main.c ref/binary_tree.c
	gcc -o main.exe main.c
	./main.exe

clean:
	rm -f main.exe