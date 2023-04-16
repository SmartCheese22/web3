#include<iostream>
#include<cmath>
#include <string>
#include<cstdlib>
#include<limits>

// using namespace std;

class Car {
private:
    std::string Make;
    std::string car_model;
    int year;
    int speed;
    int x;
    int y;

public:
    Car(std::string Make, std::string car_model, int year, int speed, int x, int y)
        : Make(Make), car_model(car_model), year(year), speed(speed), x(x), y(y) {}

    void accelerate(int speed_increment) {
        speed =speed+speed_increment;
    }

    void brake(int speed_decrement) {
        speed =speed- speed_decrement;
    }

    void move() {
        x = x + speed;
    }

    bool detect_collision(Car car2) {
        int distance = std::sqrt(std::pow(x - car2.x, 2) + std::pow(y - car2.y, 2));
        return distance == 0 ; 
    }

    float time_to_collision(Car car2) {
        int distance = std::sqrt(std::pow(x - car2.x, 2) + std::pow(y - car2.y, 2));
        if(speed<0 && car2.speed>0){
            if(x<car2.x) return INFINITY;             //Cases when collision can't occur it will return INFINITY
        }
        if(speed>0 && car2.speed<0){            
            if(x>car2.x) return INFINITY;
        }
        if(speed*car2.speed>=0){
            if(x>car2.x){
                if(car2.speed<speed) return INFINITY;
            }
            else if(x<car2.x){
                if(car2.speed>speed) return INFINITY;
            }
        }
        
        if (speed <= car2.speed) {
            return (float)distance/(car2.speed - speed);
        } else {
            return (float)distance/(speed - car2.speed);
        }
    }
};

int main(){
    
}
