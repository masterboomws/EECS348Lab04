#include <stdio.h>

int main() {
	int Value;
	char Scale;
	char newScale;

	printf("Enter the temperature Value: ");
	scanf("%d", &Value);
	printf("Enter the origional scale (C, F, or K): ");
	scanf(" %c", &Scale);
	printf("Enter the scale to convert to (C, F, or K): ");
	scanf(" %c", &newScale);

	float newValue;

	if (Scale == 'F') {
		if (newScale == 'C') {
			newValue = (Value - 32) / 1.8f;
		} 
		if (newScale == 'K') {
			newValue = (Value - 32)/1.8f + 273.15f;
		}
	}
	if (Scale == 'C') {
		if (newScale == 'F') {
			newValue = (Value*1.8f) + 32;
		}
		if (newScale == 'K') {
			newValue = Value + 273.15f;
		}
	}
	if (Scale == 'K') {
		if (newScale == 'F') {
			newValue = (Value - 273.15f)*1.8f + 32;
		}
		if (newScale == 'C') {
			newValue = Value - 273.15f;
		}
	}
	float tempInC;
	char Category[15];
	char Advice[50];
	if (newScale == 'C') {
		tempInC = newValue;
	} else {
		if (newScale == 'F') {
			tempInC = (newValue - 32) / 1.8f;
		} 
		if (newScale == 'k') {
			tempInC = newValue - 237.15f;
		}
	}
	if (tempInC < 0) {
		char Category[15] = "Freezing";
		char Advice[50] = "Wear a coat!";
	}
	if (tempInC >= 0 && tempInC < 10) {
		char Category[15] = "Cold";
		char Advice[50] = "Wear a jacket!";
	}
	if (tempInC >= 10 && tempInC < 25) {
		char Category[15] = "Comfortable";
		char Advice[50] = "Enjoy the weather!";
	}
	if (tempInC >= 25 && tempInC < 35) {
		char Category[15] = "Hot";
		char Advice[50] = "Drink lots of water!";
	}
	if (tempInC >= 35) {
		char Category[15] = "Extreme Heat";
		char Advice[50] = "Stay indoors!";
	}
	
	printf("Converted Temperature: %.2f %c\nTemperature Category: %s\nWeather advisory: %s\n", newValue, newScale, Category, Advice);
}	
