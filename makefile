compile: main.c
		gcc main.c -o sort

run: sort
		./sort
		
clean: sort
		rm sort