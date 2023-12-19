test: src/AdiLinkedList.c tests.c
	gcc -Iinclude src/AdiLinkedList.c tests.c -o bin/test