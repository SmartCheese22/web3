The Car class is created in C++.
Also the various required attributes have been implemented and tested.
This time for collision attribute assumes that the cars are moving towards each other(which is not always true).To fix it another attribute namely angle with x axis(of the speed) (similar for acceleration and deceleration) can be included and the respective values can be modified using sine and cosine functions.This will require few modifications(like using relative speed and so on),then will the program actually work in 2D.
Collision is detected when the cars cross each other(they have been considered as a point!). So the detect_collision(car2) returns True if the cars collide.
