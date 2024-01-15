# Almost a Circle - 0x0C Python Project

## Overview
This Python project, "Almost a Circle," is part of the 0x0C curriculum. The project focuses on implementing classes and inheritance in Python to create a representation of geometric shapes, specifically rectangles and squares, that will eventually lead to a class representing an almost-circle shape.

## Project Structure
The project is organized as follows:

- **models/rectangle.py**: Contains the Rectangle class definition.
- **models/square.py**: Contains the Square class definition (a subclass of Rectangle).
- **models/base.py**: Contains the base class `Base` to manage the `id` attribute for all classes.
- **models/__init__.py**: Empty file indicating that the `models` directory should be considered a Python package.
- **tests/test_models/...**: Directory containing test files to validate the functionality of the implemented classes.

## Requirements
- Python 3.x
- No external libraries are required for this project.

## Usage
1. Clone the repository:
   ```bash
   git clone https://github.com/WayneRu95/almost-a-circle.git

1.Navigate to the project directory:
cd almost-a-circle

2.Run the tests:
python -m unittest discover tests

Classes and Inheritance
Base Class (Base):

Manages the id attribute for all classes.
Rectangle Class:

Represents a rectangle.
Inherits from the Base class.
Implements methods to set/get attributes and calculate the area.
Square Class:

Represents a square.
Inherits from the Rectangle class.
Overrides methods as necessary.
How to Contribute
If you'd like to contribute to the project, feel free to:

Fork the repository.
Create a new branch for your feature: git checkout -b feature-name
Commit your changes: git commit -m 'Add some feature'
Push to the branch: git push origin feature-name
Submit a pull request.

