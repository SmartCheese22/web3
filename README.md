The Car class is created in C++.
Also the various required attributes have been implemented and tested. 
The move method implemented here changes the x coordinate of the car by the amount of its speed. As the speed in y direction is not know I took an assumption that move will lead to increase in x coordinate only.
This time for collision attribute assumes that the cars are moving towards each other(which is not true as mentioned earlier that they actually in my code move only along the x axis).To fix it another attribute namely angle with x axis(of the speed) (similar for acceleration and deceleration) can be included and the respective values can be modified using sine and cosine functions.This will require few modifications(like using relative speed and so on),then will the program actually work in 2D.
Collision is detected when the cars cross each other(they have been considered as a point!) i.e. when distance between them equals zero. So the detect_collision(car2) returns True if the cars collide.
