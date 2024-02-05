//calculate BMI 

#include <iostream> 
#include <math.h> 
using namespace std; 

//class create
class bmical{
    public:
    
    float bmi,height,weight;
    //function create
    float BMICALCULATOR(float height, float weight) 
    { 
	    bmi = weight / pow(height, 2); 
	    return bmi; 
    } 
};

int main() 
{ 
	//class object
    bmical obj;
    
	float height; 
	float weight;
	float bmi;
	
	cout << "Please enter your height in meters:";
    cin >> height;
    cout << "please enter your weight in kg:";
    cin >> weight;
	// Function call 
	bmi = obj.BMICALCULATOR(height, weight); 
	cout << "The BMI is "<< bmi <<endl<< " so "; 
	
	// Conditions to find out BMI category 
	if (bmi < 18) 
		cout << "underweight"; 

	else if (bmi >= 18 && bmi < 24) 
		cout << "Healthy"; 

	else if (bmi >= 24 && bmi < 30) 
		cout << "overweight"; 

	else if (bmi >= 30) 
		cout << "Suffering from Obesity"; 

	return 0; 
} 


