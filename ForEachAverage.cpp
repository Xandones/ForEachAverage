#include <iostream>

int main()
{
	// In this exercise we have some values for the speeds of vehicles in km/h (inside an array) and we want to calculate their average using 'foreach'.
	float RecordedSpeeds[] {70.9f, 89.5f, 65.6f, 102.5f, 123.6f, 63.4f, 74.5f, 99.5f, 68.7f};
	float AverageSpeed = 0.0;
	int Size = sizeof(RecordedSpeeds) / sizeof(RecordedSpeeds[0]);

	for (auto x : RecordedSpeeds)
		AverageSpeed += x;

	AverageSpeed /= Size;
	printf("The average speed is %.2f km/h.", AverageSpeed);
}
