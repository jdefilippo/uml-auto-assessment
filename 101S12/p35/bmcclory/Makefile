n = 35
# Passing a Two-Dimensional Array
test : main
	#
	# Should output 100
	#                                                                       
	echo "2 3 5 7 11 13 17 19 23" | ./a$(n)

main : p$(n).c
	gcc -Wall -ansi -g p$(n).c -o a$(n)

clean :
	rm -f a$(n)
	rm -f *~
	rm -f \#*\#
