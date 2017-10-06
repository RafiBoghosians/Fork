all:
	compile run
compile:
	gcc -o Fork Fork.c
run:
	./Fork
