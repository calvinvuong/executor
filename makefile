make : main.c
	gcc main.c -o exec.out

run: make
	./exec.out

clean:
	rm -rf *~
	rm exec.out
