#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication3.h" // Inclure le fichier d'en-t�te g�n�r� par Qt

namespace Ui {
    class QtWidgetsApplication3; // ou autre nom similaire
}

class QtWidgetsApplication3 : public QMainWindow
{
    Q_OBJECT



public:
    explicit QtWidgetsApplication3(QWidget* parent = nullptr);
    ~QtWidgetsApplication3();

private slots:
    void readRFID();

private:
    Ui::QtWidgetsApplication3* ui; // D�clarez ui comme un pointeur
    void displayCardID(const std::string& cardID);

};
