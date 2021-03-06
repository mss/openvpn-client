/********************************************************************************
** Form generated from reading UI file 'manageconnection.ui'
**
** Created: Thu 12. Jan 13:39:29 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGECONNECTION_H
#define UI_MANAGECONNECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageConnection
{
public:
    QPushButton *cmdClose;
    QLabel *label_41;
    QFrame *frame;
    QPushButton *cmdSave;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QGroupBox *groupBox_3;
    QLabel *label;
    QCheckBox *cbClient;
    QLabel *label_8;
    QCheckBox *cbFloat;
    QLabel *label_11;
    QCheckBox *cbNobind;
    QLabel *label_12;
    QLabel *label_13;
    QCheckBox *cbPersistKey;
    QCheckBox *cbPersistTun;
    QLabel *label_16;
    QCheckBox *cbCompLzo;
    QLabel *label_19;
    QCheckBox *cbNoCache;
    QLabel *label_20;
    QCheckBox *cbUserPass;
    QLabel *label_42;
    QCheckBox *cbRedirectGateway;
    QGroupBox *groupBox_7;
    QComboBox *cmbDev;
    QLabel *label_3;
    QLineEdit *txtMtu;
    QLabel *label_4;
    QGroupBox *groupBox_5;
    QLineEdit *txtRemotePort;
    QLabel *label_10;
    QLineEdit *txtRemote;
    QLabel *label_9;
    QComboBox *cmbProto;
    QLabel *label_7;
    QGroupBox *groupBox_4;
    QLineEdit *txtCA;
    QLabel *label_2;
    QLineEdit *txtCert;
    QLineEdit *txtKey;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_33;
    QCheckBox *cbCertIsServer;
    QPushButton *cmdGetCAPath;
    QPushButton *cmdGetCertPath;
    QPushButton *cmdGetKeyPath;
    QRadioButton *rbPkcs;
    QRadioButton *rbNormal;
    QLineEdit *txtPkcs12Path;
    QPushButton *cmdGetPkcs12Path;
    QWidget *tabLinux;
    QGroupBox *groupBox_10;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *txtLinuxUser;
    QLineEdit *txtLinuxGroup;
    QGroupBox *groupBox_6;
    QCheckBox *cbMsfix;
    QLabel *label_6;
    QLineEdit *txtFragment;
    QLabel *label_5;
    QComboBox *cmbRouteMethod;
    QLabel *label_21;
    QLabel *label_23;
    QLineEdit *txtDevNode;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *cbWinDirUseDefault_2;
    QRadioButton *cbWinDirOther_2;
    QGroupBox *groupBox_19;
    QRadioButton *cbWinDirEnvironment_2;
    QRadioButton *cbWinDirPath_2;
    QLineEdit *txtPath_2;
    QLabel *label_44;
    QWidget *tabScripts;
    QGroupBox *groupBox_15;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *txtBeforeConnect;
    QLineEdit *txtAfterConnect;
    QPushButton *cmdBeforeConnect;
    QPushButton *cmdAfterConnect;
    QGroupBox *groupBox_16;
    QLabel *label_38;
    QLabel *label_39;
    QLineEdit *txtBeforeDisconnect;
    QLineEdit *txtAfterDisconnect;
    QPushButton *cmdBeforeDisconnect;
    QPushButton *cmdAfterDisconnect;
    QGroupBox *groupBox_14;
    QLabel *label_40;
    QPushButton *cmdErrorConnect;
    QLineEdit *txtErrorConnect;
    QGroupBox *groupBox_17;
    QLabel *label_36;
    QLineEdit *txtScriptACDelay;
    QLabel *label_37;
    QWidget *tabAdv;
    QGroupBox *groupBox_8;
    QLineEdit *txtVerbose;
    QLineEdit *txtRouteDelay;
    QLabel *label_18;
    QLabel *label_22;
    QLabel *label_17;
    QLineEdit *txtMute;
    QGroupBox *groupBox_9;
    QCheckBox *cbRandomHost;
    QLabel *label_24;
    QLabel *label_25;
    QCheckBox *cbResolveHostname;
    QGroupBox *groupBox_11;
    QLabel *label_28;
    QCheckBox *cbHTTPRetry;
    QLabel *label_29;
    QLineEdit *txtHTTPIP;
    QLabel *label_30;
    QLineEdit *txtHTTPPort;
    QComboBox *cmbProxyAuth;
    QComboBox *cmbAuthMethod;
    QLabel *label_43;
    QLabel *label_45;
    QGroupBox *groupBox_12;
    QLabel *label_31;
    QCheckBox *cbMuteWirelessWarning;
    QGroupBox *groupBox_13;
    QLabel *label_32;
    QComboBox *cmbChiper;

    void setupUi(QDialog *ManageConnection)
    {
        if (ManageConnection->objectName().isEmpty())
            ManageConnection->setObjectName(QString::fromUtf8("ManageConnection"));
        ManageConnection->setWindowModality(Qt::ApplicationModal);
        ManageConnection->resize(450, 565);
        ManageConnection->setMinimumSize(QSize(450, 565));
        ManageConnection->setMaximumSize(QSize(450, 565));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ManageConnection->setWindowIcon(icon);
        ManageConnection->setModal(true);
        cmdClose = new QPushButton(ManageConnection);
        cmdClose->setObjectName(QString::fromUtf8("cmdClose"));
        cmdClose->setGeometry(QRect(340, 527, 100, 33));
        cmdClose->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}\n"
"QPushButton {height: 25px; width: 50px;text-align:left;\n"
"	padding-left: 10px;\n"
"	padding-top: 3px;\n"
"	padding-bottom: 3px;}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/close_dialog.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdClose->setIcon(icon1);
        cmdClose->setIconSize(QSize(22, 22));
        cmdClose->setDefault(true);
        cmdClose->setFlat(true);
        label_41 = new QLabel(ManageConnection);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(0, 0, 451, 61));
        label_41->setPixmap(QPixmap(QString::fromUtf8(":/images/banner_sml.png")));
        label_41->setScaledContents(true);
        frame = new QFrame(ManageConnection);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 60, 451, 8));
        frame->setMinimumSize(QSize(0, 8));
        frame->setMaximumSize(QSize(16777215, 5));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/images/bg_toolbar.png);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        cmdSave = new QPushButton(ManageConnection);
        cmdSave->setObjectName(QString::fromUtf8("cmdSave"));
        cmdSave->setGeometry(QRect(230, 527, 100, 33));
        cmdSave->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}\n"
"QPushButton {height: 25px; width: 50px;text-align:left;\n"
"	padding-left: 10px;\n"
"	padding-top: 3px;\n"
"	padding-bottom: 3px;}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdSave->setIcon(icon2);
        cmdSave->setIconSize(QSize(22, 22));
        cmdSave->setFlat(true);
        tabWidget = new QTabWidget(ManageConnection);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(4, 71, 441, 451));
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        groupBox_3 = new QGroupBox(tabGeneral);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(9, 10, 421, 71));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(12, 15, 61, 16));
        cbClient = new QCheckBox(groupBox_3);
        cbClient->setObjectName(QString::fromUtf8("cbClient"));
        cbClient->setEnabled(true);
        cbClient->setGeometry(QRect(85, 14, 20, 20));
        cbClient->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(12, 31, 61, 16));
        cbFloat = new QCheckBox(groupBox_3);
        cbFloat->setObjectName(QString::fromUtf8("cbFloat"));
        cbFloat->setEnabled(true);
        cbFloat->setGeometry(QRect(85, 30, 21, 19));
        cbFloat->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(131, 15, 61, 16));
        cbNobind = new QCheckBox(groupBox_3);
        cbNobind->setObjectName(QString::fromUtf8("cbNobind"));
        cbNobind->setEnabled(true);
        cbNobind->setGeometry(QRect(204, 14, 21, 19));
        cbNobind->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(131, 30, 61, 16));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(131, 45, 61, 16));
        cbPersistKey = new QCheckBox(groupBox_3);
        cbPersistKey->setObjectName(QString::fromUtf8("cbPersistKey"));
        cbPersistKey->setEnabled(true);
        cbPersistKey->setGeometry(QRect(204, 27, 20, 20));
        cbPersistKey->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        cbPersistTun = new QCheckBox(groupBox_3);
        cbPersistTun->setObjectName(QString::fromUtf8("cbPersistTun"));
        cbPersistTun->setEnabled(true);
        cbPersistTun->setGeometry(QRect(204, 43, 21, 19));
        cbPersistTun->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(12, 45, 61, 16));
        cbCompLzo = new QCheckBox(groupBox_3);
        cbCompLzo->setObjectName(QString::fromUtf8("cbCompLzo"));
        cbCompLzo->setEnabled(true);
        cbCompLzo->setGeometry(QRect(85, 44, 21, 19));
        cbCompLzo->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(230, 15, 81, 16));
        cbNoCache = new QCheckBox(groupBox_3);
        cbNoCache->setObjectName(QString::fromUtf8("cbNoCache"));
        cbNoCache->setEnabled(true);
        cbNoCache->setGeometry(QRect(325, 15, 20, 20));
        cbNoCache->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(230, 29, 81, 20));
        cbUserPass = new QCheckBox(groupBox_3);
        cbUserPass->setObjectName(QString::fromUtf8("cbUserPass"));
        cbUserPass->setEnabled(true);
        cbUserPass->setGeometry(QRect(325, 29, 20, 20));
        cbUserPass->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_42 = new QLabel(groupBox_3);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(230, 46, 91, 16));
        cbRedirectGateway = new QCheckBox(groupBox_3);
        cbRedirectGateway->setObjectName(QString::fromUtf8("cbRedirectGateway"));
        cbRedirectGateway->setGeometry(QRect(325, 45, 16, 18));
        cbRedirectGateway->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        groupBox_7 = new QGroupBox(tabGeneral);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(9, 83, 421, 71));
        cmbDev = new QComboBox(groupBox_7);
        cmbDev->setObjectName(QString::fromUtf8("cmbDev"));
        cmbDev->setEnabled(true);
        cmbDev->setGeometry(QRect(104, 20, 101, 22));
        cmbDev->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(12, 24, 51, 16));
        txtMtu = new QLineEdit(groupBox_7);
        txtMtu->setObjectName(QString::fromUtf8("txtMtu"));
        txtMtu->setEnabled(true);
        txtMtu->setGeometry(QRect(104, 46, 101, 20));
        txtMtu->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(12, 46, 51, 16));
        groupBox_5 = new QGroupBox(tabGeneral);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(9, 160, 421, 91));
        txtRemotePort = new QLineEdit(groupBox_5);
        txtRemotePort->setObjectName(QString::fromUtf8("txtRemotePort"));
        txtRemotePort->setEnabled(true);
        txtRemotePort->setGeometry(QRect(105, 40, 113, 20));
        txtRemotePort->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 42, 71, 16));
        txtRemote = new QLineEdit(groupBox_5);
        txtRemote->setObjectName(QString::fromUtf8("txtRemote"));
        txtRemote->setEnabled(true);
        txtRemote->setGeometry(QRect(105, 16, 281, 20));
        txtRemote->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 20, 61, 16));
        cmbProto = new QComboBox(groupBox_5);
        cmbProto->setObjectName(QString::fromUtf8("cmbProto"));
        cmbProto->setEnabled(true);
        cmbProto->setGeometry(QRect(105, 64, 101, 22));
        cmbProto->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 65, 71, 16));
        groupBox_4 = new QGroupBox(tabGeneral);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(7, 257, 421, 161));
        txtCA = new QLineEdit(groupBox_4);
        txtCA->setObjectName(QString::fromUtf8("txtCA"));
        txtCA->setEnabled(true);
        txtCA->setGeometry(QRect(106, 66, 271, 20));
        txtCA->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtCA->setReadOnly(true);
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 68, 61, 16));
        txtCert = new QLineEdit(groupBox_4);
        txtCert->setObjectName(QString::fromUtf8("txtCert"));
        txtCert->setEnabled(true);
        txtCert->setGeometry(QRect(106, 90, 271, 20));
        txtCert->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtCert->setReadOnly(true);
        txtKey = new QLineEdit(groupBox_4);
        txtKey->setObjectName(QString::fromUtf8("txtKey"));
        txtKey->setEnabled(true);
        txtKey->setGeometry(QRect(106, 115, 271, 20));
        txtKey->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtKey->setReadOnly(true);
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(11, 116, 81, 20));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(11, 91, 91, 21));
        label_33 = new QLabel(groupBox_4);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(11, 139, 91, 16));
        cbCertIsServer = new QCheckBox(groupBox_4);
        cbCertIsServer->setObjectName(QString::fromUtf8("cbCertIsServer"));
        cbCertIsServer->setEnabled(true);
        cbCertIsServer->setGeometry(QRect(107, 138, 21, 19));
        cbCertIsServer->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        cmdGetCAPath = new QPushButton(groupBox_4);
        cmdGetCAPath->setObjectName(QString::fromUtf8("cmdGetCAPath"));
        cmdGetCAPath->setEnabled(true);
        cmdGetCAPath->setGeometry(QRect(381, 66, 20, 20));
        cmdGetCAPath->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}\n"
""));
        cmdGetCertPath = new QPushButton(groupBox_4);
        cmdGetCertPath->setObjectName(QString::fromUtf8("cmdGetCertPath"));
        cmdGetCertPath->setEnabled(true);
        cmdGetCertPath->setGeometry(QRect(381, 90, 20, 20));
        cmdGetCertPath->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}\n"
""));
        cmdGetKeyPath = new QPushButton(groupBox_4);
        cmdGetKeyPath->setObjectName(QString::fromUtf8("cmdGetKeyPath"));
        cmdGetKeyPath->setEnabled(true);
        cmdGetKeyPath->setGeometry(QRect(381, 115, 20, 20));
        cmdGetKeyPath->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        rbPkcs = new QRadioButton(groupBox_4);
        rbPkcs->setObjectName(QString::fromUtf8("rbPkcs"));
        rbPkcs->setGeometry(QRect(10, 20, 71, 17));
        rbNormal = new QRadioButton(groupBox_4);
        rbNormal->setObjectName(QString::fromUtf8("rbNormal"));
        rbNormal->setGeometry(QRect(10, 40, 82, 17));
        rbNormal->setChecked(true);
        txtPkcs12Path = new QLineEdit(groupBox_4);
        txtPkcs12Path->setObjectName(QString::fromUtf8("txtPkcs12Path"));
        txtPkcs12Path->setGeometry(QRect(107, 19, 271, 20));
        txtPkcs12Path->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        cmdGetPkcs12Path = new QPushButton(groupBox_4);
        cmdGetPkcs12Path->setObjectName(QString::fromUtf8("cmdGetPkcs12Path"));
        cmdGetPkcs12Path->setGeometry(QRect(381, 19, 20, 20));
        cmdGetPkcs12Path->setMaximumSize(QSize(20, 20));
        cmdGetPkcs12Path->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}\n"
""));
        tabWidget->addTab(tabGeneral, QString());
        tabLinux = new QWidget();
        tabLinux->setObjectName(QString::fromUtf8("tabLinux"));
        groupBox_10 = new QGroupBox(tabLinux);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(8, 10, 421, 81));
        label_26 = new QLabel(groupBox_10);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(11, 22, 46, 14));
        label_27 = new QLabel(groupBox_10);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(12, 45, 46, 14));
        txtLinuxUser = new QLineEdit(groupBox_10);
        txtLinuxUser->setObjectName(QString::fromUtf8("txtLinuxUser"));
        txtLinuxUser->setEnabled(true);
        txtLinuxUser->setGeometry(QRect(65, 19, 161, 20));
        txtLinuxUser->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtLinuxGroup = new QLineEdit(groupBox_10);
        txtLinuxGroup->setObjectName(QString::fromUtf8("txtLinuxGroup"));
        txtLinuxGroup->setEnabled(true);
        txtLinuxGroup->setGeometry(QRect(65, 42, 161, 20));
        txtLinuxGroup->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        groupBox_6 = new QGroupBox(tabLinux);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(8, 100, 421, 321));
        cbMsfix = new QCheckBox(groupBox_6);
        cbMsfix->setObjectName(QString::fromUtf8("cbMsfix"));
        cbMsfix->setEnabled(true);
        cbMsfix->setGeometry(QRect(105, 20, 20, 20));
        cbMsfix->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(11, 21, 41, 20));
        txtFragment = new QLineEdit(groupBox_6);
        txtFragment->setObjectName(QString::fromUtf8("txtFragment"));
        txtFragment->setEnabled(true);
        txtFragment->setGeometry(QRect(105, 40, 111, 20));
        txtFragment->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(11, 45, 61, 16));
        cmbRouteMethod = new QComboBox(groupBox_6);
        cmbRouteMethod->setObjectName(QString::fromUtf8("cmbRouteMethod"));
        cmbRouteMethod->setEnabled(true);
        cmbRouteMethod->setGeometry(QRect(105, 64, 111, 22));
        cmbRouteMethod->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(11, 67, 81, 16));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(12, 90, 71, 16));
        txtDevNode = new QLineEdit(groupBox_6);
        txtDevNode->setObjectName(QString::fromUtf8("txtDevNode"));
        txtDevNode->setEnabled(true);
        txtDevNode->setGeometry(QRect(105, 90, 110, 20));
        txtDevNode->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        groupBox_2 = new QGroupBox(groupBox_6);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(11, 118, 351, 121));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(9, 20, 271, 41));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        cbWinDirUseDefault_2 = new QRadioButton(verticalLayoutWidget_2);
        cbWinDirUseDefault_2->setObjectName(QString::fromUtf8("cbWinDirUseDefault_2"));
        cbWinDirUseDefault_2->setStyleSheet(QString::fromUtf8("QRadioButton { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:enabled {\n"
"image: url(:/images/styles/radiobutton_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked:enabled {\n"
"image: url(:/images/styles/radiobutton_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:disabled {\n"
"image: url(:/images/styles/radiobutton_unchecked_dis.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked:disabled {\n"
"image: url(:/images/styles/radiobutton_checked_dis.png);\n"
"}"));
        cbWinDirUseDefault_2->setChecked(true);

        verticalLayout_2->addWidget(cbWinDirUseDefault_2);

        cbWinDirOther_2 = new QRadioButton(verticalLayoutWidget_2);
        cbWinDirOther_2->setObjectName(QString::fromUtf8("cbWinDirOther_2"));
        cbWinDirOther_2->setStyleSheet(QString::fromUtf8("QRadioButton { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:enabled {\n"
"image: url(:/images/styles/radiobutton_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked:enabled {\n"
"image: url(:/images/styles/radiobutton_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:disabled {\n"
"image: url(:/images/styles/radiobutton_unchecked_dis.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked:disabled {\n"
"image: url(:/images/styles/radiobutton_checked_dis.png);\n"
"}"));

        verticalLayout_2->addWidget(cbWinDirOther_2);

        groupBox_19 = new QGroupBox(groupBox_2);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        groupBox_19->setGeometry(QRect(20, 60, 321, 51));
        cbWinDirEnvironment_2 = new QRadioButton(groupBox_19);
        cbWinDirEnvironment_2->setObjectName(QString::fromUtf8("cbWinDirEnvironment_2"));
        cbWinDirEnvironment_2->setGeometry(QRect(13, 7, 151, 17));
        cbWinDirEnvironment_2->setStyleSheet(QString::fromUtf8("QRadioButton { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:enabled {\n"
"image: url(:/images/styles/radiobutton_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked:enabled {\n"
"image: url(:/images/styles/radiobutton_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:disabled {\n"
"image: url(:/images/styles/radiobutton_unchecked_dis.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked:disabled {\n"
"image: url(:/images/styles/radiobutton_checked_dis.png);\n"
"}"));
        cbWinDirEnvironment_2->setChecked(true);
        cbWinDirPath_2 = new QRadioButton(groupBox_19);
        cbWinDirPath_2->setObjectName(QString::fromUtf8("cbWinDirPath_2"));
        cbWinDirPath_2->setGeometry(QRect(14, 27, 51, 17));
        cbWinDirPath_2->setStyleSheet(QString::fromUtf8("QRadioButton { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:enabled {\n"
"image: url(:/images/styles/radiobutton_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked:enabled {\n"
"image: url(:/images/styles/radiobutton_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:disabled {\n"
"image: url(:/images/styles/radiobutton_unchecked_dis.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked:disabled {\n"
"image: url(:/images/styles/radiobutton_checked_dis.png);\n"
"}"));
        txtPath_2 = new QLineEdit(groupBox_19);
        txtPath_2->setObjectName(QString::fromUtf8("txtPath_2"));
        txtPath_2->setGeometry(QRect(65, 25, 151, 20));
        txtPath_2->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_44 = new QLabel(groupBox_19);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(220, 25, 91, 20));
        tabWidget->addTab(tabLinux, QString());
        tabScripts = new QWidget();
        tabScripts->setObjectName(QString::fromUtf8("tabScripts"));
        groupBox_15 = new QGroupBox(tabScripts);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(7, 10, 421, 91));
        label_34 = new QLabel(groupBox_15);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(10, 30, 121, 16));
        label_35 = new QLabel(groupBox_15);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(10, 55, 121, 16));
        txtBeforeConnect = new QLineEdit(groupBox_15);
        txtBeforeConnect->setObjectName(QString::fromUtf8("txtBeforeConnect"));
        txtBeforeConnect->setGeometry(QRect(133, 29, 241, 20));
        txtBeforeConnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtBeforeConnect->setReadOnly(false);
        txtAfterConnect = new QLineEdit(groupBox_15);
        txtAfterConnect->setObjectName(QString::fromUtf8("txtAfterConnect"));
        txtAfterConnect->setGeometry(QRect(133, 53, 241, 20));
        txtAfterConnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtAfterConnect->setReadOnly(false);
        cmdBeforeConnect = new QPushButton(groupBox_15);
        cmdBeforeConnect->setObjectName(QString::fromUtf8("cmdBeforeConnect"));
        cmdBeforeConnect->setGeometry(QRect(377, 29, 20, 20));
        cmdBeforeConnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black;}\n"
"::disabled {border: 1px solid black;}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        cmdAfterConnect = new QPushButton(groupBox_15);
        cmdAfterConnect->setObjectName(QString::fromUtf8("cmdAfterConnect"));
        cmdAfterConnect->setGeometry(QRect(377, 53, 20, 20));
        cmdAfterConnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
"::disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        groupBox_16 = new QGroupBox(tabScripts);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(7, 110, 421, 91));
        label_38 = new QLabel(groupBox_16);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(10, 30, 121, 16));
        label_39 = new QLabel(groupBox_16);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(10, 55, 121, 16));
        txtBeforeDisconnect = new QLineEdit(groupBox_16);
        txtBeforeDisconnect->setObjectName(QString::fromUtf8("txtBeforeDisconnect"));
        txtBeforeDisconnect->setGeometry(QRect(133, 29, 241, 20));
        txtBeforeDisconnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
"::disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtBeforeDisconnect->setReadOnly(false);
        txtAfterDisconnect = new QLineEdit(groupBox_16);
        txtAfterDisconnect->setObjectName(QString::fromUtf8("txtAfterDisconnect"));
        txtAfterDisconnect->setGeometry(QRect(133, 53, 241, 20));
        txtAfterDisconnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtAfterDisconnect->setReadOnly(false);
        cmdBeforeDisconnect = new QPushButton(groupBox_16);
        cmdBeforeDisconnect->setObjectName(QString::fromUtf8("cmdBeforeDisconnect"));
        cmdBeforeDisconnect->setGeometry(QRect(377, 29, 20, 20));
        cmdBeforeDisconnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        cmdAfterDisconnect = new QPushButton(groupBox_16);
        cmdAfterDisconnect->setObjectName(QString::fromUtf8("cmdAfterDisconnect"));
        cmdAfterDisconnect->setGeometry(QRect(377, 53, 20, 20));
        cmdAfterDisconnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        groupBox_14 = new QGroupBox(tabScripts);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(7, 210, 421, 61));
        label_40 = new QLabel(groupBox_14);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(10, 27, 121, 16));
        cmdErrorConnect = new QPushButton(groupBox_14);
        cmdErrorConnect->setObjectName(QString::fromUtf8("cmdErrorConnect"));
        cmdErrorConnect->setGeometry(QRect(377, 26, 20, 20));
        cmdErrorConnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        txtErrorConnect = new QLineEdit(groupBox_14);
        txtErrorConnect->setObjectName(QString::fromUtf8("txtErrorConnect"));
        txtErrorConnect->setGeometry(QRect(133, 26, 241, 20));
        txtErrorConnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtErrorConnect->setReadOnly(false);
        groupBox_17 = new QGroupBox(tabScripts);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(7, 280, 421, 61));
        label_36 = new QLabel(groupBox_17);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(10, 30, 121, 20));
        txtScriptACDelay = new QLineEdit(groupBox_17);
        txtScriptACDelay->setObjectName(QString::fromUtf8("txtScriptACDelay"));
        txtScriptACDelay->setGeometry(QRect(130, 30, 71, 20));
        txtScriptACDelay->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_37 = new QLabel(groupBox_17);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(206, 32, 21, 16));
        tabWidget->addTab(tabScripts, QString());
        tabAdv = new QWidget();
        tabAdv->setObjectName(QString::fromUtf8("tabAdv"));
        groupBox_8 = new QGroupBox(tabAdv);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(7, 10, 421, 101));
        txtVerbose = new QLineEdit(groupBox_8);
        txtVerbose->setObjectName(QString::fromUtf8("txtVerbose"));
        txtVerbose->setEnabled(true);
        txtVerbose->setGeometry(QRect(104, 19, 51, 21));
        txtVerbose->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtRouteDelay = new QLineEdit(groupBox_8);
        txtRouteDelay->setObjectName(QString::fromUtf8("txtRouteDelay"));
        txtRouteDelay->setEnabled(true);
        txtRouteDelay->setGeometry(QRect(104, 45, 51, 21));
        txtRouteDelay->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_18 = new QLabel(groupBox_8);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(11, 70, 61, 20));
        label_22 = new QLabel(groupBox_8);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(11, 44, 81, 20));
        label_17 = new QLabel(groupBox_8);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(11, 21, 61, 16));
        txtMute = new QLineEdit(groupBox_8);
        txtMute->setObjectName(QString::fromUtf8("txtMute"));
        txtMute->setEnabled(true);
        txtMute->setGeometry(QRect(104, 70, 51, 20));
        txtMute->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        groupBox_9 = new QGroupBox(tabAdv);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(7, 119, 421, 71));
        cbRandomHost = new QCheckBox(groupBox_9);
        cbRandomHost->setObjectName(QString::fromUtf8("cbRandomHost"));
        cbRandomHost->setEnabled(true);
        cbRandomHost->setGeometry(QRect(120, 20, 21, 19));
        cbRandomHost->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_24 = new QLabel(groupBox_9);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 20, 71, 16));
        label_25 = new QLabel(groupBox_9);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 40, 101, 16));
        cbResolveHostname = new QCheckBox(groupBox_9);
        cbResolveHostname->setObjectName(QString::fromUtf8("cbResolveHostname"));
        cbResolveHostname->setEnabled(true);
        cbResolveHostname->setGeometry(QRect(120, 39, 21, 19));
        cbResolveHostname->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        groupBox_11 = new QGroupBox(tabAdv);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(7, 199, 421, 101));
        label_28 = new QLabel(groupBox_11);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(11, 20, 46, 14));
        cbHTTPRetry = new QCheckBox(groupBox_11);
        cbHTTPRetry->setObjectName(QString::fromUtf8("cbHTTPRetry"));
        cbHTTPRetry->setEnabled(true);
        cbHTTPRetry->setGeometry(QRect(81, 20, 21, 19));
        cbHTTPRetry->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        label_29 = new QLabel(groupBox_11);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(11, 43, 46, 14));
        txtHTTPIP = new QLineEdit(groupBox_11);
        txtHTTPIP->setObjectName(QString::fromUtf8("txtHTTPIP"));
        txtHTTPIP->setEnabled(true);
        txtHTTPIP->setGeometry(QRect(81, 40, 141, 20));
        txtHTTPIP->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_30 = new QLabel(groupBox_11);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(10, 68, 61, 16));
        txtHTTPPort = new QLineEdit(groupBox_11);
        txtHTTPPort->setObjectName(QString::fromUtf8("txtHTTPPort"));
        txtHTTPPort->setEnabled(true);
        txtHTTPPort->setGeometry(QRect(81, 66, 121, 20));
        txtHTTPPort->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        cmbProxyAuth = new QComboBox(groupBox_11);
        cmbProxyAuth->setObjectName(QString::fromUtf8("cmbProxyAuth"));
        cmbProxyAuth->setGeometry(QRect(311, 40, 91, 22));
        cmbProxyAuth->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        cmbAuthMethod = new QComboBox(groupBox_11);
        cmbAuthMethod->setObjectName(QString::fromUtf8("cmbAuthMethod"));
        cmbAuthMethod->setGeometry(QRect(311, 65, 91, 22));
        cmbAuthMethod->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_43 = new QLabel(groupBox_11);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(242, 44, 61, 16));
        label_45 = new QLabel(groupBox_11);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(243, 69, 61, 16));
        groupBox_12 = new QGroupBox(tabAdv);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(7, 309, 421, 51));
        label_31 = new QLabel(groupBox_12);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(12, 24, 111, 16));
        cbMuteWirelessWarning = new QCheckBox(groupBox_12);
        cbMuteWirelessWarning->setObjectName(QString::fromUtf8("cbMuteWirelessWarning"));
        cbMuteWirelessWarning->setEnabled(true);
        cbMuteWirelessWarning->setGeometry(QRect(131, 23, 21, 19));
        cbMuteWirelessWarning->setStyleSheet(QString::fromUtf8("QCheckBox { \n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 13px;\n"
"height: 13px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled {\n"
"image: url(:/images/styles/checkbox_unchecked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled {\n"
"image: url(:/images/styles/checkbox_checked_dis.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled {\n"
"image: url(:/images/styles/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled {\n"
"image: url(:/images/styles/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_unchecked_hover.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:enabled:hover {\n"
"image: url(:/images/styles/checkbox_checked_hover.png);\n"
"}\n"
""));
        groupBox_13 = new QGroupBox(tabAdv);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setEnabled(true);
        groupBox_13->setGeometry(QRect(7, 367, 421, 51));
        label_32 = new QLabel(groupBox_13);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(12, 25, 61, 16));
        cmbChiper = new QComboBox(groupBox_13);
        cmbChiper->setObjectName(QString::fromUtf8("cmbChiper"));
        cmbChiper->setEnabled(true);
        cmbChiper->setGeometry(QRect(82, 20, 231, 22));
        cmbChiper->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        tabWidget->addTab(tabAdv, QString());

        retranslateUi(ManageConnection);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ManageConnection);
    } // setupUi

    void retranslateUi(QDialog *ManageConnection)
    {
        ManageConnection->setWindowTitle(QApplication::translate("ManageConnection", "Edit Connection", 0, QApplication::UnicodeUTF8));
        cmdClose->setText(QApplication::translate("ManageConnection", "     &Cancel", 0, QApplication::UnicodeUTF8));
        label_41->setText(QString());
        cmdSave->setText(QApplication::translate("ManageConnection", "     &OK", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("ManageConnection", "General:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ManageConnection", "Client:", 0, QApplication::UnicodeUTF8));
        cbClient->setText(QString());
        label_8->setText(QApplication::translate("ManageConnection", "Float:", 0, QApplication::UnicodeUTF8));
        cbFloat->setText(QString());
        label_11->setText(QApplication::translate("ManageConnection", "No bind:", 0, QApplication::UnicodeUTF8));
        cbNobind->setText(QString());
        label_12->setText(QApplication::translate("ManageConnection", "Persist key:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ManageConnection", "Persist tun:", 0, QApplication::UnicodeUTF8));
        cbPersistKey->setText(QString());
        cbPersistTun->setText(QString());
        label_16->setText(QApplication::translate("ManageConnection", "Comp-LZO:", 0, QApplication::UnicodeUTF8));
        cbCompLzo->setText(QString());
        label_19->setText(QApplication::translate("ManageConnection", "Auth nocache:", 0, QApplication::UnicodeUTF8));
        cbNoCache->setText(QString());
        label_20->setText(QApplication::translate("ManageConnection", "Auth user/pass:", 0, QApplication::UnicodeUTF8));
        cbUserPass->setText(QString());
        label_42->setText(QApplication::translate("ManageConnection", "Redirect Gateway:", 0, QApplication::UnicodeUTF8));
        cbRedirectGateway->setText(QString());
        groupBox_7->setTitle(QApplication::translate("ManageConnection", "Advanced:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ManageConnection", "Dev:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ManageConnection", "Dev mtu:", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("ManageConnection", "Connection:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ManageConnection", "Remote port:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ManageConnection", "Remote:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ManageConnection", "Protocol:", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("ManageConnection", "Certifikate - Key:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ManageConnection", "CA path:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ManageConnection", "Key path:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ManageConnection", "Certitificate path:", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ManageConnection", "Server certificate:", 0, QApplication::UnicodeUTF8));
        cbCertIsServer->setText(QString());
        cmdGetCAPath->setText(QApplication::translate("ManageConnection", "...", 0, QApplication::UnicodeUTF8));
        cmdGetCertPath->setText(QApplication::translate("ManageConnection", "...", 0, QApplication::UnicodeUTF8));
        cmdGetKeyPath->setText(QApplication::translate("ManageConnection", "...", 0, QApplication::UnicodeUTF8));
        rbPkcs->setText(QApplication::translate("ManageConnection", "PKCS12", 0, QApplication::UnicodeUTF8));
        rbNormal->setText(QApplication::translate("ManageConnection", "Normal", 0, QApplication::UnicodeUTF8));
        cmdGetPkcs12Path->setText(QApplication::translate("ManageConnection", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QApplication::translate("ManageConnection", "General", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("ManageConnection", "Downgrade privileges of Linux process:", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ManageConnection", "User:", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ManageConnection", "Group:", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("ManageConnection", "Only Windows:", 0, QApplication::UnicodeUTF8));
        cbMsfix->setText(QString());
        label_6->setText(QApplication::translate("ManageConnection", "MSSFIX:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ManageConnection", "Fragment:", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ManageConnection", "Route method:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ManageConnection", "Dev Node:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ManageConnection", "Windows directory:", 0, QApplication::UnicodeUTF8));
        cbWinDirUseDefault_2->setText(QApplication::translate("ManageConnection", "Use default(c:\\windows)", 0, QApplication::UnicodeUTF8));
        cbWinDirOther_2->setText(QApplication::translate("ManageConnection", "Other", 0, QApplication::UnicodeUTF8));
        groupBox_19->setTitle(QString());
        cbWinDirEnvironment_2->setText(QApplication::translate("ManageConnection", "Use environment", 0, QApplication::UnicodeUTF8));
        cbWinDirPath_2->setText(QApplication::translate("ManageConnection", "Path", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("ManageConnection", "use \\\\ instead of \\", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabLinux), QApplication::translate("ManageConnection", "OS", 0, QApplication::UnicodeUTF8));
        groupBox_15->setTitle(QApplication::translate("ManageConnection", "Connect:", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ManageConnection", "Before connect:", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("ManageConnection", "After connect:", 0, QApplication::UnicodeUTF8));
        cmdBeforeConnect->setText(QApplication::translate("ManageConnection", "...", 0, QApplication::UnicodeUTF8));
        cmdAfterConnect->setText(QApplication::translate("ManageConnection", "...", 0, QApplication::UnicodeUTF8));
        groupBox_16->setTitle(QApplication::translate("ManageConnection", "Disconnect:", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("ManageConnection", "Before disconnect:", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("ManageConnection", "After disconnect:", 0, QApplication::UnicodeUTF8));
        cmdBeforeDisconnect->setText(QApplication::translate("ManageConnection", "...", 0, QApplication::UnicodeUTF8));
        cmdAfterDisconnect->setText(QApplication::translate("ManageConnection", "...", 0, QApplication::UnicodeUTF8));
        groupBox_14->setTitle(QApplication::translate("ManageConnection", "Error while connecting:", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("ManageConnection", "Before disconnect:", 0, QApplication::UnicodeUTF8));
        cmdErrorConnect->setText(QApplication::translate("ManageConnection", "...", 0, QApplication::UnicodeUTF8));
        groupBox_17->setTitle(QApplication::translate("ManageConnection", "Delay:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_36->setToolTip(QApplication::translate("ManageConnection", "This delay is sometimes necessary to ensure, that the IP from the Tap device is already set. To set the IP with DHCP maybe take some seconds after the connection is succesfully comming up. \n"
"At least 5000 ms delay is recommended. Otherwise the after connect skript maybe didn't has a working connection.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_36->setText(QApplication::translate("ManageConnection", "After connection delay: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtScriptACDelay->setToolTip(QApplication::translate("ManageConnection", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This delay is sometimes necessary to ensure, that the IP from the Tap device is already set. To set the IP with DHCP maybe take some seconds after the connection is succesfully comming up. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">At least 5000 ms delay is recommended. Otherwise the after connect skript maybe didn't has a working connection.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_37->setText(QApplication::translate("ManageConnection", "ms", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabScripts), QApplication::translate("ManageConnection", "Scripts", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("ManageConnection", "Advanced:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("ManageConnection", "Mute:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ManageConnection", "Route delay:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ManageConnection", "Verbosity:", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("ManageConnection", "Host:", 0, QApplication::UnicodeUTF8));
        cbRandomHost->setText(QString());
        label_24->setText(QApplication::translate("ManageConnection", "Random host:", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ManageConnection", "Resolve host name:", 0, QApplication::UnicodeUTF8));
        cbResolveHostname->setText(QString());
        groupBox_11->setTitle(QApplication::translate("ManageConnection", "HTTP-Proxy:", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ManageConnection", "Retry:", 0, QApplication::UnicodeUTF8));
        cbHTTPRetry->setText(QString());
        label_29->setText(QApplication::translate("ManageConnection", "Proxy IP:", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ManageConnection", "Proxy port:", 0, QApplication::UnicodeUTF8));
        cmbProxyAuth->clear();
        cmbProxyAuth->insertItems(0, QStringList()
         << QApplication::translate("ManageConnection", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ManageConnection", "Stdin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ManageConnection", "Auto", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ManageConnection", "Auto-nct", 0, QApplication::UnicodeUTF8)
        );
        cmbAuthMethod->clear();
        cmbAuthMethod->insertItems(0, QStringList()
         << QApplication::translate("ManageConnection", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ManageConnection", "Basic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ManageConnection", "Ntlm", 0, QApplication::UnicodeUTF8)
        );
        label_43->setText(QApplication::translate("ManageConnection", "Auth:", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("ManageConnection", "Method:", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("ManageConnection", "Wireless:", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("ManageConnection", "Mute replay warnings:", 0, QApplication::UnicodeUTF8));
        cbMuteWirelessWarning->setText(QString());
        groupBox_13->setTitle(QApplication::translate("ManageConnection", "Ciphers:", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("ManageConnection", "Chipher:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabAdv), QApplication::translate("ManageConnection", "Advanced", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManageConnection: public Ui_ManageConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGECONNECTION_H
