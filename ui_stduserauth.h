/********************************************************************************
** Form generated from reading ui file 'stduserauth.ui'
**
** Created: Mon 26. Oct 15:36:35 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_STDUSERAUTH_H
#define UI_STDUSERAUTH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StdUserAuth
{
public:
    QPushButton *cmdOK;
    QPushButton *cmdClose;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtUser;
    QLineEdit *txtPwd;
    QCheckBox *cbSavePassword;

    void setupUi(QDialog *StdUserAuth)
    {
        if (StdUserAuth->objectName().isEmpty())
            StdUserAuth->setObjectName(QString::fromUtf8("StdUserAuth"));
        StdUserAuth->setWindowModality(Qt::WindowModal);
        StdUserAuth->resize(220, 153);
        StdUserAuth->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        StdUserAuth->setWindowIcon(icon);
        cmdOK = new QPushButton(StdUserAuth);
        cmdOK->setObjectName(QString::fromUtf8("cmdOK"));
        cmdOK->setGeometry(QRect(60, 120, 75, 24));
        cmdClose = new QPushButton(StdUserAuth);
        cmdClose->setObjectName(QString::fromUtf8("cmdClose"));
        cmdClose->setGeometry(QRect(138, 120, 75, 24));
        groupBox = new QGroupBox(StdUserAuth);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 201, 101));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 21, 61, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 43, 61, 16));
        txtUser = new QLineEdit(groupBox);
        txtUser->setObjectName(QString::fromUtf8("txtUser"));
        txtUser->setGeometry(QRect(70, 20, 121, 20));
        txtPwd = new QLineEdit(groupBox);
        txtPwd->setObjectName(QString::fromUtf8("txtPwd"));
        txtPwd->setGeometry(QRect(70, 40, 121, 20));
        cbSavePassword = new QCheckBox(groupBox);
        cbSavePassword->setObjectName(QString::fromUtf8("cbSavePassword"));
        cbSavePassword->setGeometry(QRect(10, 69, 161, 19));

        retranslateUi(StdUserAuth);

        QMetaObject::connectSlotsByName(StdUserAuth);
    } // setupUi

    void retranslateUi(QDialog *StdUserAuth)
    {
        StdUserAuth->setWindowTitle(QApplication::translate("StdUserAuth", "User Authentication", 0, QApplication::UnicodeUTF8));
        cmdOK->setText(QApplication::translate("StdUserAuth", "C&onnect", 0, QApplication::UnicodeUTF8));
        cmdClose->setText(QApplication::translate("StdUserAuth", "&Cancel", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("StdUserAuth", "User data:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StdUserAuth", "Username:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("StdUserAuth", "Password:", 0, QApplication::UnicodeUTF8));
        cbSavePassword->setText(QApplication::translate("StdUserAuth", "Remember Username", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(StdUserAuth);
    } // retranslateUi

};

namespace Ui {
    class StdUserAuth: public Ui_StdUserAuth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STDUSERAUTH_H
