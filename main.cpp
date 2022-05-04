#include <QApplication>
#include <QTextStream>
#include <QInputDialog>
#include <QMessageBox>
#include <QDebug>

using namespace std;

int convertToFahrenheit(int celcius){
    int fahrenheit = (9*celcius)/5 + 32;
    return fahrenheit;
}

int main(int argc, char* argv[]){
    QApplication app(argc, argv);

    int celcius =  QInputDialog::getText(0, "Temperature converter", "Enter a temperature in Celcius:").toInt();

    int fahrenheit = convertToFahrenheit(celcius);

    QMessageBox::information(0, "The temperature in Fahrenheit is: ", QString::number(fahrenheit));

    return app.exec();
}



