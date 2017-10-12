/********************************************************************************
** Form generated from reading UI file 'selectcamerasdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCAMERASDIALOG_H
#define UI_SELECTCAMERASDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SelectCamerasDialog
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *leftCameraComboBox;
    QComboBox *rightCameraComboBox;
    QLabel *leftCameraLabel;
    QLabel *rightCameraLabel;
    QLineEdit *calibFileNameEdit;
    QPushButton *selectFileButton;
    QCheckBox *rectifyCheckBox;

    void setupUi(QDialog *SelectCamerasDialog)
    {
        if (SelectCamerasDialog->objectName().isEmpty())
            SelectCamerasDialog->setObjectName(QString::fromUtf8("SelectCamerasDialog"));
        SelectCamerasDialog->resize(625, 237);
        buttonBox = new QDialogButtonBox(SelectCamerasDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 190, 591, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        leftCameraComboBox = new QComboBox(SelectCamerasDialog);
        leftCameraComboBox->setObjectName(QString::fromUtf8("leftCameraComboBox"));
        leftCameraComboBox->setGeometry(QRect(20, 60, 271, 31));
        rightCameraComboBox = new QComboBox(SelectCamerasDialog);
        rightCameraComboBox->setObjectName(QString::fromUtf8("rightCameraComboBox"));
        rightCameraComboBox->setGeometry(QRect(340, 60, 271, 31));
        leftCameraLabel = new QLabel(SelectCamerasDialog);
        leftCameraLabel->setObjectName(QString::fromUtf8("leftCameraLabel"));
        leftCameraLabel->setGeometry(QRect(20, 30, 111, 17));
        rightCameraLabel = new QLabel(SelectCamerasDialog);
        rightCameraLabel->setObjectName(QString::fromUtf8("rightCameraLabel"));
        rightCameraLabel->setGeometry(QRect(340, 30, 111, 17));
        calibFileNameEdit = new QLineEdit(SelectCamerasDialog);
        calibFileNameEdit->setObjectName(QString::fromUtf8("calibFileNameEdit"));
        calibFileNameEdit->setGeometry(QRect(20, 110, 541, 31));
        selectFileButton = new QPushButton(SelectCamerasDialog);
        selectFileButton->setObjectName(QString::fromUtf8("selectFileButton"));
        selectFileButton->setGeometry(QRect(570, 110, 41, 31));
        rectifyCheckBox = new QCheckBox(SelectCamerasDialog);
        rectifyCheckBox->setObjectName(QString::fromUtf8("rectifyCheckBox"));
        rectifyCheckBox->setGeometry(QRect(20, 160, 261, 22));
        rectifyCheckBox->setChecked(true);

        retranslateUi(SelectCamerasDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectCamerasDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SelectCamerasDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SelectCamerasDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectCamerasDialog)
    {
        SelectCamerasDialog->setWindowTitle(QApplication::translate("SelectCamerasDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        leftCameraLabel->setText(QApplication::translate("SelectCamerasDialog", "Left camera (E)", 0, QApplication::UnicodeUTF8));
        rightCameraLabel->setText(QApplication::translate("SelectCamerasDialog", "Right camera", 0, QApplication::UnicodeUTF8));
        selectFileButton->setText(QApplication::translate("SelectCamerasDialog", "...", 0, QApplication::UnicodeUTF8));
        rectifyCheckBox->setText(QApplication::translate("SelectCamerasDialog", "Rectify", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SelectCamerasDialog: public Ui_SelectCamerasDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCAMERASDIALOG_H
