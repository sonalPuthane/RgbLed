#ifndef SRP_RGB_1_H
#define SRP_RGB_1_H

#include <Arduino.h>  // Include Arduino functions

class Rgb {
private:
    int redPin;   // Pin number for red
    int greenPin; // Pin number for green
    int bluePin;  // Pin number for blue

public:
    bool begin(int red, int green, int blue);
	bool begin(int red, int green);
	bool begin(int red); // Initialize RGB LED
    void set(int r, int g, int b);
	void set(int r,int g); 
	void set(int r);            // Set RGB LED color
};

#endif

