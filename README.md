CSCI 2312: Programming Assignment 1

PROGRAM FUNCTION:
To take the area of of a triangle using calling to, and classes. 

TASK:
My Task was to make a 2 point to a 3 point and then to have the user enter the cordinates of
x,y,z and for the program to give the are of the 3D triangle.

To do this i created a double z in private in the file Point.h where the
x,y where done fore me. The went a long in did that with all the Contstructors, Destructors,
Mutator, Accessor in both the Point.h and Point.cpp files where again x,y done fore me.  
After that in the Point.h i went on too create the call member functions distanceTo using data type double
referencing the Point Constuctor. In the Point.cpp file is where is and the member functions
that would do the ccalculate the distanceTo using the pathagroum theroy. An The actual algathrithum
to the computeArea call member function using Heron's Theroy.

That about does it for the Point.h and Point.cpp build. as for the Main build or PA1.cpp
this is where ill gather the data and use the call functions i made in Point.h. But first ill have to make a call 
funcation for the computeArea that references Point constructor and A, B, and C so i put that at the top like you requested. Then i decided a loop would be the quickest form
to get the data. So i created Three loops that looped three times each time. Using the PointInput variable inside each 
loop so it could just be a temp variable for each of the individual loops. I made variabe adress 0=x,
and 1=y and 2=z with my if statemnets then would set them with my setX ,setY and , setZ Mutators.
which brought me to my last step. Now that i have everything i need to print out the calculated data.
to do this i use cout and set the precision to 2 as requested and then cout on the same line the computeArea
which will call out to my computerArea function holding the Heron's theroy in Point.cpp. then print
it to the screen

Conclusion:
This progam should be able to find the Area of all 3D Triangles. 

Also im sorry that this format is so crazy im writing it in notepad.

P.S i forgot to upload this when i uploaded the rest. So the ReadMe file is late.
