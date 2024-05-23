#pragma once
#include "QtWidgetsApplication3.h"
#include "ui_QtWidgetsApplication3.h" // Include the generated header file
#include <iostream>
#include <iomanip>
#include <sstream>
#include "uFCoder.h"
#include "ui_QtWidgetsApplication3.h"



class QtWidgetsApplication3 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication3(QWidget* parent = nullptr);
    ~QtWidgetsApplication3();

private slots:
    void readRFID();

private:
    Ui::QtWidgetsApplication3* ui; // Declare the ui object
    void displayCardID(const std::string& cardID);
};
