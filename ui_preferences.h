/********************************************************************************
** Form generated from reading ui file 'preferences.ui'
**
** Created: Wed 4. Nov 17:16:47 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preferences
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QPushButton *cmdAddConfig;
    QListWidget *lsvConfigs;
    QPushButton *cmdImportConfig;
    QToolBox *tbSettings;
    QWidget *page;
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
    QWidget *page_3;
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
    QWidget *page_2;
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
    QWidget *page_4;
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
    QGroupBox *groupBox_12;
    QLabel *label_31;
    QCheckBox *cbMuteWirelessWarning;
    QGroupBox *groupBox_13;
    QLabel *label_32;
    QComboBox *cmbChiper;
    QPushButton *cmdClose;
    QPushButton *cmdSave;
    QLineEdit *txtPathFromConfig;
    QLabel *label_41;
    QLabel *lblTunnelName;
    QLabel *lblTunnelPixmap;
    QLabel *lblTunnelStatus;
    QPushButton *cmdConnect;
    QLabel *label_42;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *Preferences)
    {
        if (Preferences->objectName().isEmpty())
            Preferences->setObjectName(QString::fromUtf8("Preferences"));
        Preferences->resize(689, 650);
        Preferences->setMinimumSize(QSize(689, 650));
        Preferences->setMaximumSize(QSize(689, 650));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Preferences->setWindowIcon(icon);
        Preferences->setStyleSheet(QString::fromUtf8(""));
        Preferences->setModal(true);
        groupBox = new QGroupBox(Preferences);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 55, 671, 561));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 221, 541));
        cmdAddConfig = new QPushButton(groupBox_2);
        buttonGroup = new QButtonGroup(Preferences);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(cmdAddConfig);
        cmdAddConfig->setObjectName(QString::fromUtf8("cmdAddConfig"));
        cmdAddConfig->setGeometry(QRect(16, 470, 191, 28));
        cmdAddConfig->setLayoutDirection(Qt::LeftToRight);
        cmdAddConfig->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdAddConfig->setIcon(icon1);
        cmdAddConfig->setFlat(true);
        lsvConfigs = new QListWidget(groupBox_2);
        lsvConfigs->setObjectName(QString::fromUtf8("lsvConfigs"));
        lsvConfigs->setGeometry(QRect(10, 20, 201, 441));
        lsvConfigs->setContextMenuPolicy(Qt::NoContextMenu);
        lsvConfigs->setFrameShape(QFrame::Box);
        lsvConfigs->setFrameShadow(QFrame::Plain);
        cmdImportConfig = new QPushButton(groupBox_2);
        cmdImportConfig->setObjectName(QString::fromUtf8("cmdImportConfig"));
        cmdImportConfig->setGeometry(QRect(16, 506, 191, 28));
        cmdImportConfig->setLayoutDirection(Qt::LeftToRight);
        cmdImportConfig->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdImportConfig->setIcon(icon2);
        cmdImportConfig->setFlat(true);
        tbSettings = new QToolBox(groupBox);
        tbSettings->setObjectName(QString::fromUtf8("tbSettings"));
        tbSettings->setGeometry(QRect(240, 20, 421, 531));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 421, 419));
        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 3, 421, 81));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(11, 26, 61, 16));
        cbClient = new QCheckBox(groupBox_3);
        cbClient->setObjectName(QString::fromUtf8("cbClient"));
        cbClient->setEnabled(false);
        cbClient->setGeometry(QRect(84, 25, 20, 20));
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
        label_8->setGeometry(QRect(11, 42, 61, 16));
        cbFloat = new QCheckBox(groupBox_3);
        cbFloat->setObjectName(QString::fromUtf8("cbFloat"));
        cbFloat->setEnabled(false);
        cbFloat->setGeometry(QRect(84, 41, 21, 19));
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
        label_11->setGeometry(QRect(130, 26, 61, 16));
        cbNobind = new QCheckBox(groupBox_3);
        cbNobind->setObjectName(QString::fromUtf8("cbNobind"));
        cbNobind->setEnabled(false);
        cbNobind->setGeometry(QRect(203, 25, 21, 19));
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
        label_12->setGeometry(QRect(130, 41, 61, 16));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(130, 56, 61, 16));
        cbPersistKey = new QCheckBox(groupBox_3);
        cbPersistKey->setObjectName(QString::fromUtf8("cbPersistKey"));
        cbPersistKey->setEnabled(false);
        cbPersistKey->setGeometry(QRect(203, 38, 20, 20));
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
        cbPersistTun->setEnabled(false);
        cbPersistTun->setGeometry(QRect(203, 54, 21, 19));
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
        label_16->setGeometry(QRect(11, 56, 61, 16));
        cbCompLzo = new QCheckBox(groupBox_3);
        cbCompLzo->setObjectName(QString::fromUtf8("cbCompLzo"));
        cbCompLzo->setEnabled(false);
        cbCompLzo->setGeometry(QRect(84, 55, 21, 19));
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
        label_19->setGeometry(QRect(229, 26, 81, 16));
        cbNoCache = new QCheckBox(groupBox_3);
        cbNoCache->setObjectName(QString::fromUtf8("cbNoCache"));
        cbNoCache->setEnabled(false);
        cbNoCache->setGeometry(QRect(320, 26, 20, 20));
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
        label_20->setGeometry(QRect(229, 40, 81, 20));
        cbUserPass = new QCheckBox(groupBox_3);
        cbUserPass->setObjectName(QString::fromUtf8("cbUserPass"));
        cbUserPass->setEnabled(false);
        cbUserPass->setGeometry(QRect(320, 40, 20, 20));
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
        groupBox_7 = new QGroupBox(page);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 87, 421, 81));
        cmbDev = new QComboBox(groupBox_7);
        cmbDev->setObjectName(QString::fromUtf8("cmbDev"));
        cmbDev->setEnabled(false);
        cmbDev->setGeometry(QRect(104, 20, 101, 22));
        cmbDev->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(12, 24, 51, 16));
        txtMtu = new QLineEdit(groupBox_7);
        txtMtu->setObjectName(QString::fromUtf8("txtMtu"));
        txtMtu->setEnabled(false);
        txtMtu->setGeometry(QRect(104, 46, 101, 20));
        txtMtu->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(12, 46, 51, 16));
        groupBox_5 = new QGroupBox(page);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 172, 421, 101));
        txtRemotePort = new QLineEdit(groupBox_5);
        txtRemotePort->setObjectName(QString::fromUtf8("txtRemotePort"));
        txtRemotePort->setEnabled(false);
        txtRemotePort->setGeometry(QRect(105, 40, 113, 20));
        txtRemotePort->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 42, 71, 16));
        txtRemote = new QLineEdit(groupBox_5);
        txtRemote->setObjectName(QString::fromUtf8("txtRemote"));
        txtRemote->setEnabled(false);
        txtRemote->setGeometry(QRect(105, 16, 281, 20));
        txtRemote->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 20, 61, 16));
        cmbProto = new QComboBox(groupBox_5);
        cmbProto->setObjectName(QString::fromUtf8("cmbProto"));
        cmbProto->setEnabled(false);
        cmbProto->setGeometry(QRect(105, 64, 101, 22));
        cmbProto->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 65, 71, 16));
        groupBox_4 = new QGroupBox(page);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 277, 421, 121));
        txtCA = new QLineEdit(groupBox_4);
        txtCA->setObjectName(QString::fromUtf8("txtCA"));
        txtCA->setEnabled(false);
        txtCA->setGeometry(QRect(105, 20, 271, 20));
        txtCA->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtCA->setReadOnly(true);
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 22, 61, 16));
        txtCert = new QLineEdit(groupBox_4);
        txtCert->setObjectName(QString::fromUtf8("txtCert"));
        txtCert->setEnabled(false);
        txtCert->setGeometry(QRect(105, 44, 271, 20));
        txtCert->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtCert->setReadOnly(true);
        txtKey = new QLineEdit(groupBox_4);
        txtKey->setObjectName(QString::fromUtf8("txtKey"));
        txtKey->setEnabled(false);
        txtKey->setGeometry(QRect(105, 69, 271, 20));
        txtKey->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtKey->setReadOnly(true);
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 70, 81, 20));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 45, 91, 21));
        label_33 = new QLabel(groupBox_4);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(10, 93, 91, 16));
        cbCertIsServer = new QCheckBox(groupBox_4);
        cbCertIsServer->setObjectName(QString::fromUtf8("cbCertIsServer"));
        cbCertIsServer->setEnabled(false);
        cbCertIsServer->setGeometry(QRect(106, 92, 21, 19));
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
        cmdGetCAPath->setEnabled(false);
        cmdGetCAPath->setGeometry(QRect(380, 20, 20, 20));
        cmdGetCAPath->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}\n"
""));
        cmdGetCertPath = new QPushButton(groupBox_4);
        cmdGetCertPath->setObjectName(QString::fromUtf8("cmdGetCertPath"));
        cmdGetCertPath->setEnabled(false);
        cmdGetCertPath->setGeometry(QRect(380, 44, 20, 20));
        cmdGetCertPath->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}\n"
""));
        cmdGetKeyPath = new QPushButton(groupBox_4);
        cmdGetKeyPath->setObjectName(QString::fromUtf8("cmdGetKeyPath"));
        cmdGetKeyPath->setEnabled(false);
        cmdGetKeyPath->setGeometry(QRect(380, 69, 20, 20));
        cmdGetKeyPath->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        tbSettings->addItem(page, QString::fromUtf8("General"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 421, 419));
        groupBox_10 = new QGroupBox(page_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(0, 2, 421, 81));
        label_26 = new QLabel(groupBox_10);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(11, 22, 46, 14));
        label_27 = new QLabel(groupBox_10);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(12, 45, 46, 14));
        txtLinuxUser = new QLineEdit(groupBox_10);
        txtLinuxUser->setObjectName(QString::fromUtf8("txtLinuxUser"));
        txtLinuxUser->setEnabled(false);
        txtLinuxUser->setGeometry(QRect(65, 19, 161, 20));
        txtLinuxUser->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtLinuxGroup = new QLineEdit(groupBox_10);
        txtLinuxGroup->setObjectName(QString::fromUtf8("txtLinuxGroup"));
        txtLinuxGroup->setEnabled(false);
        txtLinuxGroup->setGeometry(QRect(65, 42, 161, 20));
        txtLinuxGroup->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        groupBox_6 = new QGroupBox(page_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 90, 421, 131));
        cbMsfix = new QCheckBox(groupBox_6);
        cbMsfix->setObjectName(QString::fromUtf8("cbMsfix"));
        cbMsfix->setEnabled(false);
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
        txtFragment->setEnabled(false);
        txtFragment->setGeometry(QRect(105, 40, 111, 20));
        txtFragment->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(11, 45, 61, 16));
        cmbRouteMethod = new QComboBox(groupBox_6);
        cmbRouteMethod->setObjectName(QString::fromUtf8("cmbRouteMethod"));
        cmbRouteMethod->setEnabled(false);
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
        txtDevNode->setEnabled(false);
        txtDevNode->setGeometry(QRect(105, 90, 110, 20));
        txtDevNode->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        tbSettings->addItem(page_3, QString::fromUtf8("Linux / Windows"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 421, 419));
        groupBox_15 = new QGroupBox(page_2);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(0, 0, 421, 91));
        label_34 = new QLabel(groupBox_15);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(10, 30, 81, 16));
        label_35 = new QLabel(groupBox_15);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(10, 55, 81, 16));
        txtBeforeConnect = new QLineEdit(groupBox_15);
        txtBeforeConnect->setObjectName(QString::fromUtf8("txtBeforeConnect"));
        txtBeforeConnect->setGeometry(QRect(103, 29, 271, 20));
        txtBeforeConnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtBeforeConnect->setReadOnly(false);
        txtAfterConnect = new QLineEdit(groupBox_15);
        txtAfterConnect->setObjectName(QString::fromUtf8("txtAfterConnect"));
        txtAfterConnect->setGeometry(QRect(103, 53, 271, 20));
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
        groupBox_16 = new QGroupBox(page_2);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(0, 100, 421, 91));
        label_38 = new QLabel(groupBox_16);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(10, 30, 91, 16));
        label_39 = new QLabel(groupBox_16);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(10, 55, 81, 16));
        txtBeforeDisconnect = new QLineEdit(groupBox_16);
        txtBeforeDisconnect->setObjectName(QString::fromUtf8("txtBeforeDisconnect"));
        txtBeforeDisconnect->setGeometry(QRect(103, 29, 271, 20));
        txtBeforeDisconnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
"::disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtBeforeDisconnect->setReadOnly(false);
        txtAfterDisconnect = new QLineEdit(groupBox_16);
        txtAfterDisconnect->setObjectName(QString::fromUtf8("txtAfterDisconnect"));
        txtAfterDisconnect->setGeometry(QRect(103, 53, 271, 20));
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
        groupBox_14 = new QGroupBox(page_2);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(0, 200, 421, 61));
        label_40 = new QLabel(groupBox_14);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(10, 27, 91, 16));
        cmdErrorConnect = new QPushButton(groupBox_14);
        cmdErrorConnect->setObjectName(QString::fromUtf8("cmdErrorConnect"));
        cmdErrorConnect->setGeometry(QRect(377, 26, 20, 20));
        cmdErrorConnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        txtErrorConnect = new QLineEdit(groupBox_14);
        txtErrorConnect->setObjectName(QString::fromUtf8("txtErrorConnect"));
        txtErrorConnect->setGeometry(QRect(103, 26, 271, 20));
        txtErrorConnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtErrorConnect->setReadOnly(false);
        groupBox_17 = new QGroupBox(page_2);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(0, 260, 421, 61));
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
        tbSettings->addItem(page_2, QString::fromUtf8("Scripts"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 421, 419));
        groupBox_8 = new QGroupBox(page_4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 1, 421, 101));
        txtVerbose = new QLineEdit(groupBox_8);
        txtVerbose->setObjectName(QString::fromUtf8("txtVerbose"));
        txtVerbose->setEnabled(false);
        txtVerbose->setGeometry(QRect(104, 19, 51, 21));
        txtVerbose->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        txtRouteDelay = new QLineEdit(groupBox_8);
        txtRouteDelay->setObjectName(QString::fromUtf8("txtRouteDelay"));
        txtRouteDelay->setEnabled(false);
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
        txtMute->setEnabled(false);
        txtMute->setGeometry(QRect(104, 70, 51, 20));
        txtMute->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        groupBox_9 = new QGroupBox(page_4);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(0, 105, 421, 71));
        cbRandomHost = new QCheckBox(groupBox_9);
        cbRandomHost->setObjectName(QString::fromUtf8("cbRandomHost"));
        cbRandomHost->setEnabled(false);
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
        cbResolveHostname->setEnabled(false);
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
        groupBox_11 = new QGroupBox(page_4);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(0, 179, 421, 111));
        label_28 = new QLabel(groupBox_11);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(11, 20, 46, 14));
        cbHTTPRetry = new QCheckBox(groupBox_11);
        cbHTTPRetry->setObjectName(QString::fromUtf8("cbHTTPRetry"));
        cbHTTPRetry->setEnabled(false);
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
        txtHTTPIP->setEnabled(false);
        txtHTTPIP->setGeometry(QRect(81, 40, 231, 20));
        txtHTTPIP->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        label_30 = new QLabel(groupBox_11);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(10, 67, 61, 16));
        txtHTTPPort = new QLineEdit(groupBox_11);
        txtHTTPPort->setObjectName(QString::fromUtf8("txtHTTPPort"));
        txtHTTPPort->setEnabled(false);
        txtHTTPPort->setGeometry(QRect(81, 66, 81, 20));
        txtHTTPPort->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        groupBox_12 = new QGroupBox(page_4);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(0, 293, 421, 51));
        label_31 = new QLabel(groupBox_12);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(12, 24, 111, 16));
        cbMuteWirelessWarning = new QCheckBox(groupBox_12);
        cbMuteWirelessWarning->setObjectName(QString::fromUtf8("cbMuteWirelessWarning"));
        cbMuteWirelessWarning->setEnabled(false);
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
        groupBox_13 = new QGroupBox(page_4);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setEnabled(true);
        groupBox_13->setGeometry(QRect(0, 347, 421, 71));
        label_32 = new QLabel(groupBox_13);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(12, 25, 61, 16));
        cmbChiper = new QComboBox(groupBox_13);
        cmbChiper->setObjectName(QString::fromUtf8("cmbChiper"));
        cmbChiper->setEnabled(false);
        cmbChiper->setGeometry(QRect(82, 20, 231, 22));
        cmbChiper->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));
        tbSettings->addItem(page_4, QString::fromUtf8("Advanced"));
        cmdClose = new QPushButton(Preferences);
        cmdClose->setObjectName(QString::fromUtf8("cmdClose"));
        cmdClose->setGeometry(QRect(590, 621, 91, 24));
        cmdClose->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdClose->setIcon(icon3);
        cmdClose->setIconSize(QSize(16, 16));
        cmdClose->setFlat(true);
        cmdSave = new QPushButton(Preferences);
        cmdSave->setObjectName(QString::fromUtf8("cmdSave"));
        cmdSave->setGeometry(QRect(480, 621, 91, 24));
        cmdSave->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdSave->setIcon(icon4);
        cmdSave->setIconSize(QSize(30, 16));
        cmdSave->setAutoDefault(true);
        cmdSave->setFlat(true);
        txtPathFromConfig = new QLineEdit(Preferences);
        txtPathFromConfig->setObjectName(QString::fromUtf8("txtPathFromConfig"));
        txtPathFromConfig->setGeometry(QRect(10, 650, 0, 0));
        label_41 = new QLabel(Preferences);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(13, 625, 41, 16));
        lblTunnelName = new QLabel(Preferences);
        lblTunnelName->setObjectName(QString::fromUtf8("lblTunnelName"));
        lblTunnelName->setGeometry(QRect(57, 628, 111, 10));
        lblTunnelPixmap = new QLabel(Preferences);
        lblTunnelPixmap->setObjectName(QString::fromUtf8("lblTunnelPixmap"));
        lblTunnelPixmap->setGeometry(QRect(180, 624, 16, 16));
        lblTunnelPixmap->setPixmap(QPixmap(QString::fromUtf8(":/images/light_grey.png")));
        lblTunnelPixmap->setScaledContents(true);
        lblTunnelStatus = new QLabel(Preferences);
        lblTunnelStatus->setObjectName(QString::fromUtf8("lblTunnelStatus"));
        lblTunnelStatus->setGeometry(QRect(202, 625, 91, 16));
        cmdConnect = new QPushButton(Preferences);
        cmdConnect->setObjectName(QString::fromUtf8("cmdConnect"));
        cmdConnect->setGeometry(QRect(290, 621, 101, 24));
        cmdConnect->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black}\n"
":disabled {border: 1px solid black}\n"
":hover {background-color: rgb(195, 195, 195);}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/disconnetdmen.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdConnect->setIcon(icon5);
        cmdConnect->setFlat(true);
        label_42 = new QLabel(Preferences);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(0, 0, 691, 51));
        label_42->setPixmap(QPixmap(QString::fromUtf8(":/images/banner.png")));

        retranslateUi(Preferences);

        tbSettings->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Preferences);
    } // setupUi

    void retranslateUi(QDialog *Preferences)
    {
        Preferences->setWindowTitle(QApplication::translate("Preferences", "Securepoint VPN Client", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("Preferences", "Available configs:", 0, QApplication::UnicodeUTF8));
        cmdAddConfig->setText(QApplication::translate("Preferences", "&Add     ", 0, QApplication::UnicodeUTF8));
        cmdImportConfig->setText(QApplication::translate("Preferences", "&Import ", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Preferences", "General:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Preferences", "Client:", 0, QApplication::UnicodeUTF8));
        cbClient->setText(QString());
        label_8->setText(QApplication::translate("Preferences", "Float:", 0, QApplication::UnicodeUTF8));
        cbFloat->setText(QString());
        label_11->setText(QApplication::translate("Preferences", "No bind:", 0, QApplication::UnicodeUTF8));
        cbNobind->setText(QString());
        label_12->setText(QApplication::translate("Preferences", "Persist key:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Preferences", "Persist tun:", 0, QApplication::UnicodeUTF8));
        cbPersistKey->setText(QString());
        cbPersistTun->setText(QString());
        label_16->setText(QApplication::translate("Preferences", "Comp-LZO:", 0, QApplication::UnicodeUTF8));
        cbCompLzo->setText(QString());
        label_19->setText(QApplication::translate("Preferences", "Auth nocache:", 0, QApplication::UnicodeUTF8));
        cbNoCache->setText(QString());
        label_20->setText(QApplication::translate("Preferences", "Auth user/pass:", 0, QApplication::UnicodeUTF8));
        cbUserPass->setText(QString());
        groupBox_7->setTitle(QApplication::translate("Preferences", "Advanced:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Preferences", "Dev:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Preferences", "Dev mtu:", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("Preferences", "Connection:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Preferences", "Remote port:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Preferences", "Remote:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Preferences", "Protocol:", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("Preferences", "Certifikate - Key:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Preferences", "CA path:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Preferences", "Key path:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Preferences", "Certitificate path:", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("Preferences", "Server certificate:", 0, QApplication::UnicodeUTF8));
        cbCertIsServer->setText(QString());
        cmdGetCAPath->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        cmdGetCertPath->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        cmdGetKeyPath->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        tbSettings->setItemText(tbSettings->indexOf(page), QApplication::translate("Preferences", "General", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("Preferences", "Downgrade privileges of Linux process:", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("Preferences", "User:", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("Preferences", "Group:", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("Preferences", "Only Windows:", 0, QApplication::UnicodeUTF8));
        cbMsfix->setText(QString());
        label_6->setText(QApplication::translate("Preferences", "MSSFIX:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Preferences", "Fragment:", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Preferences", "Route method:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("Preferences", "Dev Node:", 0, QApplication::UnicodeUTF8));
        tbSettings->setItemText(tbSettings->indexOf(page_3), QApplication::translate("Preferences", "Linux / Windows", 0, QApplication::UnicodeUTF8));
        groupBox_15->setTitle(QApplication::translate("Preferences", "Connect:", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("Preferences", "Before connect:", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("Preferences", "After connect:", 0, QApplication::UnicodeUTF8));
        cmdBeforeConnect->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        cmdAfterConnect->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        groupBox_16->setTitle(QApplication::translate("Preferences", "Disconnect:", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("Preferences", "Before disconnect:", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("Preferences", "After disconnect:", 0, QApplication::UnicodeUTF8));
        cmdBeforeDisconnect->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        cmdAfterDisconnect->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        groupBox_14->setTitle(QApplication::translate("Preferences", "Error while connecting:", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("Preferences", "Before disconnect:", 0, QApplication::UnicodeUTF8));
        cmdErrorConnect->setText(QApplication::translate("Preferences", "...", 0, QApplication::UnicodeUTF8));
        groupBox_17->setTitle(QApplication::translate("Preferences", "Delay:", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("Preferences", "After connection delay: ", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("Preferences", "ms", 0, QApplication::UnicodeUTF8));
        tbSettings->setItemText(tbSettings->indexOf(page_2), QApplication::translate("Preferences", "Scripts", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("Preferences", "Advanced:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Preferences", "Mute:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Preferences", "Route delay:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Preferences", "Verbosity:", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("Preferences", "Host:", 0, QApplication::UnicodeUTF8));
        cbRandomHost->setText(QString());
        label_24->setText(QApplication::translate("Preferences", "Random host:", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Preferences", "Resolve host name:", 0, QApplication::UnicodeUTF8));
        cbResolveHostname->setText(QString());
        groupBox_11->setTitle(QApplication::translate("Preferences", "HTTP-Proxy:", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("Preferences", "Retry:", 0, QApplication::UnicodeUTF8));
        cbHTTPRetry->setText(QString());
        label_29->setText(QApplication::translate("Preferences", "Proxy IP:", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("Preferences", "Proxy port:", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("Preferences", "Wireless:", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("Preferences", "Mute replay warnings:", 0, QApplication::UnicodeUTF8));
        cbMuteWirelessWarning->setText(QString());
        groupBox_13->setTitle(QApplication::translate("Preferences", "Ciphers:", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("Preferences", "Chipher:", 0, QApplication::UnicodeUTF8));
        tbSettings->setItemText(tbSettings->indexOf(page_4), QApplication::translate("Preferences", "Advanced", 0, QApplication::UnicodeUTF8));
        cmdClose->setText(QApplication::translate("Preferences", "&Close", 0, QApplication::UnicodeUTF8));
        cmdSave->setText(QApplication::translate("Preferences", "&Save", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("Preferences", "Tunnel:", 0, QApplication::UnicodeUTF8));
        lblTunnelName->setText(QApplication::translate("Preferences", "None selected", 0, QApplication::UnicodeUTF8));
        lblTunnelPixmap->setText(QString());
        lblTunnelStatus->setText(QApplication::translate("Preferences", "Disconnected", 0, QApplication::UnicodeUTF8));
        cmdConnect->setText(QApplication::translate("Preferences", "Discon&nect", 0, QApplication::UnicodeUTF8));
        label_42->setText(QString());
        Q_UNUSED(Preferences);
    } // retranslateUi

};

namespace Ui {
    class Preferences: public Ui_Preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
