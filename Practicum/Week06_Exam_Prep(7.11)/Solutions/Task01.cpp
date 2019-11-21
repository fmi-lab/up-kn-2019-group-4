#include <iostream>
#include <cmath>

//subtask one
void isInsideOfSquare() {
	int squareX, squareY, length, pointX, pointY;
	std::cout << "Enter square lower left point coordinates, the length of the side and the coords of the point" << std::endl;;
	std::cin >> squareX >> squareY >> length >> pointX >> pointY;

	if (pointX < squareX + length && pointX > squareX &&
		pointY < squareY + length && pointY > squareY) {
		std::cout << "It is inside";
	} else {
		std::cout << "Outside";
	}
}

//subtask two
void isInsideOfCircle() {
	int circleX, circleY, rad, pointX, pointY;
	std::cout << "Enter circle center coordinates, the radius and the coords of the point" << std::endl;;
	std::cin >> circleX >> circleY >> rad >> pointX >> pointY;
	//Calculates the length of the line segment between the center of the circle and the point
	int length = sqrt((pointX - circleX) * (pointX - circleX) + (pointY - circleY) * (pointY - circleY));
	
	if (length < rad) { 
		std::cout << "It is inside"; 
	} else {
		std::cout << "Outside";
	}
	
}

//subtask 3
void isInsideSpecificTriangle() {
	double x1, y1, x, y;
	std::cout << "Enter points of triangle (x1,0) and (0,y1) and then for the point" << std::endl;
	std::cin >> x1 >> y1 >> x >> y;

	if (x >= 0 && y >= 0 && y - y1 * (1 - x / x1) < 0) {
		std::cout << "It is inside";
	} else {
		std::cout << "Outside or wrong input";
	}
}

int main() {
	//isInsideOfSquare();
	//isInsideOfCircle();
	isInsideSpecificTriangle();
}