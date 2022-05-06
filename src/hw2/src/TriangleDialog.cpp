#include <QDebug>

#include "TriangleDialog.h"

TriangleDialog::TriangleDialog(const QString &title, QWidget *parent) : QDialog(parent)
{
    auto *firstSideLabel = new QLabel(tr("A:"));
    auto *secondSideLabel = new QLabel(tr("B:"));
    auto *angleLabel = new QLabel(tr("Y:"));
    auto *titleTableWidget = new QLabel(tr("Result"));

    firstSideEdit = new QLineEdit;
    secondSideEdit = new QLineEdit;
    angleEdit = new QLineEdit;

    radian = new QRadioButton(tr("Radian"));
    degree = new QRadioButton(tr("Degree"));
    degree->setChecked(true);

    auto *calculateButton = new QPushButton(tr("&Calculate"));
    auto *cancelButton = new QPushButton(tr("&Exit"));
    calculateButton->setDefault(true);

    auto *groupBox = new QGroupBox;

    setResultTable();

    auto *mainLayout = new QGridLayout;
    auto *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(calculateButton);
    buttonLayout->addWidget(cancelButton);
    mainLayout->addWidget(firstSideLabel, 0, 0);
    mainLayout->addWidget(firstSideEdit, 0, 1);
    mainLayout->addWidget(secondSideLabel, 1, 0);
    mainLayout->addWidget(secondSideEdit, 1, 1);
    mainLayout->addWidget(angleLabel, 2, 0);
    mainLayout->addWidget(angleEdit, 2, 1);
    mainLayout->addWidget(radian, 3, 0);
    mainLayout->addWidget(degree, 4, 0);
    mainLayout->addWidget(titleTableWidget, 0, 2 );
    mainLayout->addWidget(resultWidget, 1, 2, 2, 1);
    groupBox->setLayout(buttonLayout);
    mainLayout->addWidget(groupBox, 5, 1);

    setLayout(mainLayout);

    setWindowTitle(title);
}
void TriangleDialog::setResultTable()
{
    resultWidget = new QTableWidget;
}
