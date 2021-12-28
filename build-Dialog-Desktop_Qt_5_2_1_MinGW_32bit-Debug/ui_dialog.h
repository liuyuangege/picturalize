/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *radiusLabel;
    QLabel *areaLabel;
    QLabel *areaResultLabel;
    QLineEdit *radiusLineEdit;
    QPushButton *calButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        radiusLabel = new QLabel(Dialog);
        radiusLabel->setObjectName(QStringLiteral("radiusLabel"));
        radiusLabel->setGeometry(QRect(110, 80, 72, 15));
        areaLabel = new QLabel(Dialog);
        areaLabel->setObjectName(QStringLiteral("areaLabel"));
        areaLabel->setGeometry(QRect(110, 110, 72, 15));
        areaResultLabel = new QLabel(Dialog);
        areaResultLabel->setObjectName(QStringLiteral("areaResultLabel"));
        areaResultLabel->setGeometry(QRect(160, 110, 72, 15));
        areaResultLabel->setFrameShape(QFrame::Panel);
        areaResultLabel->setFrameShadow(QFrame::Sunken);
        radiusLineEdit = new QLineEdit(Dialog);
        radiusLineEdit->setObjectName(QStringLiteral("radiusLineEdit"));
        radiusLineEdit->setGeometry(QRect(160, 80, 113, 21));
        calButton = new QPushButton(Dialog);
        calButton->setObjectName(QStringLiteral("calButton"));
        calButton->setGeometry(QRect(140, 160, 93, 28));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\345\221\265\345\221\265", 0));
        radiusLabel->setText(QApplication::translate("Dialog", "\345\215\212\345\276\204:", 0));
        areaLabel->setText(QApplication::translate("Dialog", "\351\235\242\347\247\257:", 0));
        areaResultLabel->setText(QString());
        calButton->setText(QApplication::translate("Dialog", "\350\256\241\347\256\227\351\235\242\347\247\257", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
