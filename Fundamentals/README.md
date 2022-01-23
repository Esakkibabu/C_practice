# Online Compilier 
 https://www.onlinegdb.com/online_c_compiler# 

# Program Structure 

Preprocessor section

Definition section

Global declaration section

Main()

{

	Declaration part
	Executable part
	
}

Sub program section

Body of sub program

![Test Image 3](/Fundamentals/images/C_char_set.JPG)
![Test Image 4](/Fundamentals/images/C_tokens.JPG)
![Test Image 5](/Fundamentals/images/Constant.JPG)
![Test Image 6](/Fundamentals/images/Data_Types.JPG)
![Test Image 7](/Fundamentals/images/Variable.JPG)

# Delimiters
 Some syntactic meaning Eg. # : ; () [ ] ,
 
# Type Qualifier or Type modifiers

4 types of qualifiers
● Short
● Long
● Signed
● Unsigned
● Sizeof operator - Special operator

# Managing Input and Output statement

# Type Conversion

# Format Specifier
	used in during Input and Output
Character   %c 
Integer     %d %i 
unsigned    %u
float        %f 
Octal       %o
Hexadecimal  %x %X 
string        "%s\n"
string         %s 
address       %p 
double        %lf 

# Storage Class
    represent the visibility and location of variables.
	
 [1] Variable Scope.
 [2] location where the variable will be stored.
 [3] lifetime of a variable.
 [4] Deterime memory location of variable of function.
 [5] who can access a variable?
 
|Storage Specifier         |  Storage     | intial value  |   scope              | Life                    | 
|--------------------------|--------------|---------------|----------------------|----------------------   |
|auto 			   | stack    	  |  Garbage      | within block         | end of block            |
|extern 		   | Data Segment |   0	          | global multiple file | till end program        |
|static 		   | Data Segment |   0           | within block         | till end program 	   |
|register 		   | CPU Register |  Garbage      | within block	 | end of block	           |
|--------------------------|--------------|---------------|----------------------|-------------------------|

auto -> default storage class
	 -> again same variable used for other operation which within brackets.
	 
extern -> It is a global variable
       -> variables are declared out of the main funciton. 
static -> It is a local variable which is capable of returning a value even when control is transformed to the function call.
        -> Contents of the variables will be retained throughout the program.
		
register -> spherical storage are within a computer CPU.

Volatile ->  memory mapped peripheral registers.
	     ->  global variables modified by an ISR.
		 ->  global variable accessed by multiple tasks within a thread applicaiton.
Two Main Reason to volatile variable:
		-> interface between the memory mapped I/O register.
		-> when using variable that are modified outside the program control flow. Eg.(ISR).
		
# Memory Layout of C 

	  |	            |  Command Line argument and environment variables	
        |    		   |
	  |-----------------|
	  |    Stack 	    |
	  |		    |
	  |-----------------|
	  |      	    |
	  |		    |
	  | --------------- |
	  |   		    |   
	  |	   Heap     |
	  |-----------------|
	  |     	    |  Intiailized to zero by execution
	  |  unintialized   |
	  |    data (BSS)   |
	  |-----------------|
	  |		    |  read from program file by execution 
	  |   Initialized   |
	  |      data 	    |
	  |-----------------|
	  |		    |
	  | 	text	    |
	  |-----------------|   
	  





 
