/********************************************************************************
** Form generated from reading UI file 'appinfo.ui'
**
** Created: Thu 12. Jan 13:39:27 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPINFO_H
#define UI_APPINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_appInfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *cmdClose;
    QLabel *label_12;
    QLabel *label_11;

    void setupUi(QDialog *appInfo)
    {
        if (appInfo->objectName().isEmpty())
            appInfo->setObjectName(QString::fromUtf8("appInfo"));
        appInfo->setWindowModality(Qt::ApplicationModal);
        appInfo->resize(400, 300);
        appInfo->setMinimumSize(QSize(400, 300));
        appInfo->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        appInfo->setWindowIcon(icon);
        appInfo->setModal(true);
        label = new QLabel(appInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 301));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(appInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 6, 311, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/securepoint_h.png")));
        label_2->setScaledContents(false);
        label_3 = new QLabel(appInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-10, 101, 431, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Reference Sans Serif"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(appInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-10, 112, 411, 16));
        label_5 = new QLabel(appInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 150, 151, 20));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(appInfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(286, 172, 111, 20));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(appInfo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 152, 171, 20));
        label_8 = new QLabel(appInfo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(315, 193, 81, 20));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(appInfo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(298, 213, 101, 20));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(appInfo);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(333, 234, 61, 20));
        label_10->setAlignment(Qt::AlignCenter);
        cmdClose = new QPushButton(appInfo);
        cmdClose->setObjectName(QString::fromUtf8("cmdClose"));
        cmdClose->setGeometry(QRect(289, 259, 100, 33));
        cmdClose->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/close_dialog.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdClose->setIcon(icon1);
        cmdClose->setIconSize(QSize(22, 22));
        cmdClose->setDefault(true);
        cmdClose->setFlat(true);
        label_12 = new QLabel(appInfo);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(5, 143, 201, 131));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/SecurepointUTM.png")));
        label_12->setScaledContents(true);
        label_11 = new QLabel(appInfo);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(60, 270, 111, 16));

        retranslateUi(appInfo);

        QMetaObject::connectSlotsByName(appInfo);
    } // setupUi

    void retranslateUi(QDialog *appInfo)
    {
        appInfo->setWindowTitle(QApplication::translate("appInfo", "Information", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("appInfo", "SSL VPN Client v.0.9.7 RC4", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("appInfo", "_____________________________________________________________________", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("appInfo", "Concept and Development:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("appInfo", "Securepoint GmbH", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("appInfo", "____________________________________________________________________", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("appInfo", "Salzstrasse 1", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("appInfo", "21335 L\303\274neburg", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("appInfo", "Germany", 0, QApplication::UnicodeUTF8));
        cmdClose->setText(QApplication::translate("appInfo", "&Close", 0, QApplication::UnicodeUTF8));
        label_12->setText(QString());
        label_11->setText(QApplication::translate("appInfo", "www.securepoint.de", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class appInfo: public Ui_appInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPINFO_H
