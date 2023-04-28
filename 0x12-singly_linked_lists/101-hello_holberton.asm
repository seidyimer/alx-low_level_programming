<<<<<<< HEAD
   global    main
=======
 global    main
>>>>>>> 7c8d162607126a14f97b9f417af26876357e6f3e
          extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
format: db `Hello, Holberton\n`,0
