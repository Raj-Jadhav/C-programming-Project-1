#include <stdio.h>
#include <stdbool.h>

//Function to check if the door is locked
bool isDoorLocked() {
    printf("You check the door and find that its locked.\n");
    return true;

}


//Function to find the entity with the key and verify age
bool getKey() {
    int age;
    printf("you find the entity with the key.\n");
    printf("Entity: Are you above 18? (Enter your age):  ");
    scanf("%d", &age);


    if (age >= 18) {
        printf("Entity: Here is the key.\n");
        return true; //key is granted
    } else {
        printf("Entity: Sorry, you are not eligible for the key.\n");
        return false; //key is not granted
    }
}

//Function to open the door if the key is obtained
void openDoor() {
    printf("You return to the door and use the key to open it.\n");
    printf("the door is now open!\n");
}


int main() {
    // Set 1: Check the door
    if (isDoorLocked()) {
        // Step 2: Find the entity and get the key
        if (getKey()) {
            // Step 3: Open the door
            openDoor();
        } else {
            printf("You could not get the key. The door remains locked.\n");
        }
    } else {
        printf("The door is already unlocked.\n");
    }
    
    return 0;
}
