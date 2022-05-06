#ifndef TRIANGLEDIALOG_H
#define TRIANGLEDIALOG_H

#include <QtWidgets>

class TriangleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TriangleDialog(const QString &title, QWidget *parent = nullptr);
private:
    void setResultTable();

    QLineEdit *firstSideEdit;
    QLineEdit *secondSideEdit;
    QLineEdit *angleEdit;
    QTableWidget *resultWidget;
    QRadioButton *radian;
    QRadioButton *degree;

};


#endif //TRIANGLEDIALOG_H
