# celciusToFahrenheitWithQT

Window that prompts user to type temperature in Celcius. Returns a window with temperature in Fahrenheit.

![image](https://user-images.githubusercontent.com/68548733/166802356-11e66e5a-743b-4f9f-9c2a-63b0464395e7.png)

![image](https://user-images.githubusercontent.com/68548733/166802430-de150ebe-74e5-4180-8d9e-ecc356bc11ba.png)

The following happens:

- Create QApplition object

- Gets celcius temperature input from user by displaying a QInputDialog object window -  input is String -> cast to integer

- Converts the celcius temperature to fahrenheit temperature according to mathematical function in convertToFahrenheit(int celcius) method

- Displays the result with a QMessageBox object
