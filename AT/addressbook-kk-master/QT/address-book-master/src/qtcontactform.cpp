#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
       countryField(new QLineEdit())

{



    addRow("<FONT STYLE='background-color:red;color:white;'>First Name</font>", firstNameField);
    addRow("<FONT STYLE='background-color:red;color:white;'>Last Name</font>", lastNameField);
    addRow("<FONT STYLE='background-color:red;color:white;'>*Address</font>", addressField);
    addRow("<FONT STYLE='background-color:red;color:white;'>Phone number</font>", phoneNumberField);
    addRow("<FONT STYLE='background-color:red;color:white;'>Email</font>", emailField);
    addRow("<FONT STYLE='background-color:red;color:white;'>Country</font>", countryField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
countryField->setText("");
}
