#include <iostream>

class RobotArm {
private:
    int joint1_angle;
    int joint2_angle;
    int joint3_angle;

public:
    RobotArm() : joint1_angle(0), joint2_angle(0), joint3_angle(0) {}

    void setJointAngles(int angle1, int angle2, int angle3) {
        joint1_angle = angle1;
        joint2_angle = angle2;
        joint3_angle = angle3;
    }

    void move() {
        std::cout << "Moving robot arm to joint angles: (" << joint1_angle << ", "
                  << joint2_angle << ", " << joint3_angle << ")" << std::endl;
        // Code to move the robot arm to the specified joint angles would go here
    }
};

struct Sample {
    std::string canColor;
    std::string lidColor;
    int canSize;
    std::string sampleColor;
};

bool compareCanColor(const Sample& sample1, const Sample& sample2) {
    return sample1.canColor < sample2.canColor;
}

// Other comparison functions (compareLidColor, compareCanSize, compareSampleColor) remain the same

void sortSamples(Sample samples[], int numSamples) {
    std::sort(samples, samples + numSamples, compareCanColor);
    // Additional sorting based on other attributes can be added here
}

int main() {
    RobotArm myRobotArm;

    // Set joint angles
    myRobotArm.setJointAngles(45, 90, -30);

    // Create sample array and sort
    const int numSamples = 5;
    Sample samples[numSamples] = {
        {"Red", "Blue", 10, "Yellow"},
        {"Blue", "Red", 15, "Green"},
        {"Green", "Green", 12, "Blue"},
        {"Red", "Blue", 20, "Red"},
        {"Green", "Red", 18, "Yellow"}
    };

    sortSamples(samples, numSamples);

    // Move the robot arm
    myRobotArm.move();

    return 0;
}
