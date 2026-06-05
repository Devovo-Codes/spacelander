#include <iostream>

using namespace std;

int main() {
    //Basic Physic Variables aka the starting position
    float positionY = 100.0;
    float velocityY = 0.0;
    float gravity = -0.1;
    float thrust = 0.3;
    int fuel = 20;
    int choice = 0; //storage of the player's choice

    cout << "--- Lunar Lander Simulation ---" << endl;
    cout << "You are in charge of a Lunar Lander with your goal to touchdown with a speed slower than -2.0 m/s. \n" << endl;

    le (positionY > 0.0) {
        cout << "Altitude: " << positionY << " m | "
             << "Velocity: " << velocityY << " m/s | "
             << "Fuel: " << fuel << " units" << endl;

        cout << "Enter 1 to BURN fuel or 0 to COAST: ";
        cin >> choice;

        if (choice == 1 && fuel > 0) {
            velocityY += thrust;
            fuel -= 1;
            cout << "Thrusters Firing! " << endl;
        } else if (choice == 1 && fuel <=0) {
            cout << ">> Out of Fuel! Engines are unable to fire!" << endl;
        }

        velocityY += gravity; // Gravity being applied

        positionY += velocityY; // Update the position based on the new velocity

        cout << "-----------------------------------" << endl;

        t << "\n--- Touchdown! ---" << endl;
        t << "Final Landing Velocity: " << velocityY << " m/s" << endl;

        if (velocityY > -2.0) {
            cout << "Congratulations! You have successfully landed the Lunar Lander!" << endl;
        } else {
            cout << "Crash! The Lunar Lander has crashed on the surface." << endl;
        }
    }
}