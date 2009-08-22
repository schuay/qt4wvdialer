#ifndef CONFIGDLG_H
#define CONFIGDLG_H

#include <qvariant.h>


#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3ListBox>
#include <Qt3Support/Q3ListView>
#include <Qt3Support/Q3TextView>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigDlg
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *helpBut;
    QSpacerItem *Spacer6;
    QPushButton *okBut;
    QPushButton *cancelBut;
    QTabWidget *tabWidget;
    QWidget *Widget3;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    QSpacerItem *Spacer3;
    QPushButton *runConfBut;
    Q3ListBox *output;
    QWidget *Widget4;
    QGridLayout *gridLayout3;
    QGridLayout *gridLayout4;
    QLabel *TextLabel3;
    QSpacerItem *Spacer11;
    QGridLayout *gridLayout5;
    QSpacerItem *Spacer1;
    QLineEdit *homeEdit;
    QLabel *TextLabel11;
    QLineEdit *productEdit;
    QLabel *TextLabel17_4;
    QComboBox *providerCombo;
    QLabel *TextLabel14;
    QLabel *TextLabel17;
    QLineEdit *passwdEdit;
    QLineEdit *userEdit;
    QLineEdit *phoneEdit;
    QLabel *TextLabel10;
    QLabel *TextLabel17_3;
    QLabel *TextLabel13;
    QLabel *TextLabel12;
    QLabel *TextLabel9;
    QLineEdit *countryEdit;
    QLabel *TextLabel8;
    QHBoxLayout *hboxLayout1;
    QPushButton *addBut;
    QPushButton *removeBut;
    QSpacerItem *Spacer12;
    QPushButton *moreBut;
    QWidget *tab;
    QVBoxLayout *vboxLayout;
    Q3GroupBox *GroupBox1;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QCheckBox *showGraphBut;
    QSpacerItem *Spacer1_2;
    QHBoxLayout *hboxLayout3;
    QCheckBox *showStatBut;
    QSpacerItem *Spacer2;
    QHBoxLayout *hboxLayout4;
    QCheckBox *askRemoveBut;
    QSpacerItem *Spacer3_2;
    Q3GroupBox *GroupBox2;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout5;
    QCheckBox *enableLogBut;
    QSpacerItem *Spacer1_4;
    QHBoxLayout *hboxLayout6;
    QLabel *TextLabel15;
    QSpinBox *portSpin;
    QSpacerItem *Spacer11_2;
    QHBoxLayout *hboxLayout7;
    QCheckBox *timeoutBut;
    QSpacerItem *Spacer10;
    QHBoxLayout *hboxLayout8;
    QLabel *TextLabel2_3;
    QSpinBox *timeoutSpin;
    QLabel *timeoutLabel;
    QSpacerItem *Spacer9;
    QHBoxLayout *hboxLayout9;
    QCheckBox *startBut;
    QSpacerItem *Spacer8;
    QHBoxLayout *hboxLayout10;
    QLabel *TextLabel2;
    QLineEdit *progPath;
    QPushButton *browseBut;
    QHBoxLayout *hboxLayout11;
    QLabel *TextLabel2_2;
    QSpinBox *delaySpin;
    QLabel *delayLabel;
    QSpacerItem *Spacer14;
    QSpacerItem *Spacer12_2;
    QWidget *tab1;
    QGridLayout *gridLayout6;
    Q3ListView *logfile;
    QPushButton *clearLogBut;
    QPushButton *nextBut;
    QPushButton *prevBut;
    QSpacerItem *Spacer1_3;
    QHBoxLayout *hboxLayout12;
    QComboBox *monthCombo;
    QSpinBox *yearSpin;
    QSpacerItem *Spacer1_21;
    QWidget *TabPage;
    QVBoxLayout *vboxLayout3;
    Q3TextView *textWid;

    void setupUi(QDialog *ConfigDlg)
    {
        if (ConfigDlg->objectName().isEmpty())
            ConfigDlg->setObjectName(QString::fromUtf8("ConfigDlg"));
        ConfigDlg->resize(519, 519);
        ConfigDlg->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(ConfigDlg);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        helpBut = new QToolButton(ConfigDlg);
        helpBut->setObjectName(QString::fromUtf8("helpBut"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpBut->sizePolicy().hasHeightForWidth());
        helpBut->setSizePolicy(sizePolicy);
        helpBut->setMinimumSize(QSize(24, 24));
        const QIcon icon = qt_get_icon(image0_ID);
        helpBut->setIcon(icon);

        hboxLayout->addWidget(helpBut);

        Spacer6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Spacer6);

        okBut = new QPushButton(ConfigDlg);
        okBut->setObjectName(QString::fromUtf8("okBut"));
        okBut->setAutoDefault(true);
        okBut->setDefault(true);

        hboxLayout->addWidget(okBut);

        cancelBut = new QPushButton(ConfigDlg);
        cancelBut->setObjectName(QString::fromUtf8("cancelBut"));
        cancelBut->setAutoDefault(true);

        hboxLayout->addWidget(cancelBut);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        tabWidget = new QTabWidget(ConfigDlg);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Widget3 = new QWidget();
        Widget3->setObjectName(QString::fromUtf8("Widget3"));
        gridLayout1 = new QGridLayout(Widget3);
        gridLayout1->setSpacing(5);
        gridLayout1->setMargin(10);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(5);
        gridLayout2->setMargin(0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        Spacer3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(Spacer3, 1, 1, 1, 1);

        runConfBut = new QPushButton(Widget3);
        runConfBut->setObjectName(QString::fromUtf8("runConfBut"));
        runConfBut->setAutoDefault(false);

        gridLayout2->addWidget(runConfBut, 1, 0, 1, 1);

        output = new Q3ListBox(Widget3);
        output->setObjectName(QString::fromUtf8("output"));

        gridLayout2->addWidget(output, 0, 0, 1, 2);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 1);

        tabWidget->addTab(Widget3, QString());
        Widget4 = new QWidget();
        Widget4->setObjectName(QString::fromUtf8("Widget4"));
        gridLayout3 = new QGridLayout(Widget4);
        gridLayout3->setSpacing(5);
        gridLayout3->setMargin(10);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout4 = new QGridLayout();
        gridLayout4->setSpacing(5);
        gridLayout4->setMargin(0);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        TextLabel3 = new QLabel(Widget4);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setMinimumSize(QSize(30, 30));
        TextLabel3->setMaximumSize(QSize(30, 30));
        TextLabel3->setWordWrap(false);

        gridLayout4->addWidget(TextLabel3, 1, 0, 1, 1);

        Spacer11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(Spacer11, 3, 0, 1, 1);

        gridLayout5 = new QGridLayout();
        gridLayout5->setSpacing(5);
        gridLayout5->setMargin(0);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        Spacer1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(Spacer1, 0, 2, 1, 1);

        homeEdit = new QLineEdit(Widget4);
        homeEdit->setObjectName(QString::fromUtf8("homeEdit"));
        homeEdit->setMinimumSize(QSize(250, 0));

        gridLayout5->addWidget(homeEdit, 2, 1, 1, 2);

        TextLabel11 = new QLabel(Widget4);
        TextLabel11->setObjectName(QString::fromUtf8("TextLabel11"));
        TextLabel11->setWordWrap(false);

        gridLayout5->addWidget(TextLabel11, 3, 0, 1, 1);

        productEdit = new QLineEdit(Widget4);
        productEdit->setObjectName(QString::fromUtf8("productEdit"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(productEdit->sizePolicy().hasHeightForWidth());
        productEdit->setSizePolicy(sizePolicy1);
        productEdit->setMinimumSize(QSize(250, 0));

        gridLayout5->addWidget(productEdit, 1, 1, 1, 2);

        TextLabel17_4 = new QLabel(Widget4);
        TextLabel17_4->setObjectName(QString::fromUtf8("TextLabel17_4"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(TextLabel17_4->sizePolicy().hasHeightForWidth());
        TextLabel17_4->setSizePolicy(sizePolicy2);
        TextLabel17_4->setMinimumSize(QSize(16, 0));
        TextLabel17_4->setMaximumSize(QSize(25, 32767));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        TextLabel17_4->setFont(font);
        TextLabel17_4->setWordWrap(false);

        gridLayout5->addWidget(TextLabel17_4, 6, 3, 1, 1);

        providerCombo = new QComboBox(Widget4);
        providerCombo->setObjectName(QString::fromUtf8("providerCombo"));
        providerCombo->setMinimumSize(QSize(160, 0));
        providerCombo->setDuplicatesEnabled(false);

        gridLayout5->addWidget(providerCombo, 0, 1, 1, 1);

        TextLabel14 = new QLabel(Widget4);
        TextLabel14->setObjectName(QString::fromUtf8("TextLabel14"));
        TextLabel14->setWordWrap(false);

        gridLayout5->addWidget(TextLabel14, 6, 0, 1, 1);

        TextLabel17 = new QLabel(Widget4);
        TextLabel17->setObjectName(QString::fromUtf8("TextLabel17"));
        sizePolicy2.setHeightForWidth(TextLabel17->sizePolicy().hasHeightForWidth());
        TextLabel17->setSizePolicy(sizePolicy2);
        TextLabel17->setMinimumSize(QSize(16, 0));
        TextLabel17->setMaximumSize(QSize(25, 32767));
        TextLabel17->setFont(font);
        TextLabel17->setWordWrap(false);

        gridLayout5->addWidget(TextLabel17, 4, 3, 1, 1);

        passwdEdit = new QLineEdit(Widget4);
        passwdEdit->setObjectName(QString::fromUtf8("passwdEdit"));
        passwdEdit->setMinimumSize(QSize(250, 0));
        passwdEdit->setEchoMode(QLineEdit::Password);

        gridLayout5->addWidget(passwdEdit, 6, 1, 1, 2);

        userEdit = new QLineEdit(Widget4);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));
        userEdit->setMinimumSize(QSize(250, 0));

        gridLayout5->addWidget(userEdit, 5, 1, 1, 2);

        phoneEdit = new QLineEdit(Widget4);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));
        phoneEdit->setMinimumSize(QSize(250, 0));

        gridLayout5->addWidget(phoneEdit, 4, 1, 1, 2);

        TextLabel10 = new QLabel(Widget4);
        TextLabel10->setObjectName(QString::fromUtf8("TextLabel10"));
        TextLabel10->setWordWrap(false);

        gridLayout5->addWidget(TextLabel10, 2, 0, 1, 1);

        TextLabel17_3 = new QLabel(Widget4);
        TextLabel17_3->setObjectName(QString::fromUtf8("TextLabel17_3"));
        sizePolicy2.setHeightForWidth(TextLabel17_3->sizePolicy().hasHeightForWidth());
        TextLabel17_3->setSizePolicy(sizePolicy2);
        TextLabel17_3->setMinimumSize(QSize(16, 0));
        TextLabel17_3->setMaximumSize(QSize(25, 32767));
        TextLabel17_3->setFont(font);
        TextLabel17_3->setWordWrap(false);

        gridLayout5->addWidget(TextLabel17_3, 5, 3, 1, 1);

        TextLabel13 = new QLabel(Widget4);
        TextLabel13->setObjectName(QString::fromUtf8("TextLabel13"));
        TextLabel13->setWordWrap(false);

        gridLayout5->addWidget(TextLabel13, 5, 0, 1, 1);

        TextLabel12 = new QLabel(Widget4);
        TextLabel12->setObjectName(QString::fromUtf8("TextLabel12"));
        TextLabel12->setWordWrap(false);

        gridLayout5->addWidget(TextLabel12, 4, 0, 1, 1);

        TextLabel9 = new QLabel(Widget4);
        TextLabel9->setObjectName(QString::fromUtf8("TextLabel9"));
        TextLabel9->setWordWrap(false);

        gridLayout5->addWidget(TextLabel9, 1, 0, 1, 1);

        countryEdit = new QLineEdit(Widget4);
        countryEdit->setObjectName(QString::fromUtf8("countryEdit"));
        countryEdit->setMinimumSize(QSize(250, 0));

        gridLayout5->addWidget(countryEdit, 3, 1, 1, 2);

        TextLabel8 = new QLabel(Widget4);
        TextLabel8->setObjectName(QString::fromUtf8("TextLabel8"));
        TextLabel8->setTextFormat(Qt::PlainText);
        TextLabel8->setWordWrap(false);

        gridLayout5->addWidget(TextLabel8, 0, 0, 1, 1);


        gridLayout4->addLayout(gridLayout5, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(5);
        hboxLayout1->setMargin(0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        addBut = new QPushButton(Widget4);
        addBut->setObjectName(QString::fromUtf8("addBut"));
        addBut->setAutoDefault(false);

        hboxLayout1->addWidget(addBut);

        removeBut = new QPushButton(Widget4);
        removeBut->setObjectName(QString::fromUtf8("removeBut"));
        removeBut->setAutoDefault(false);

        hboxLayout1->addWidget(removeBut);

        Spacer12 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(Spacer12);

        moreBut = new QPushButton(Widget4);
        moreBut->setObjectName(QString::fromUtf8("moreBut"));
        moreBut->setAutoDefault(false);

        hboxLayout1->addWidget(moreBut);


        gridLayout4->addLayout(hboxLayout1, 2, 0, 1, 1);


        gridLayout3->addLayout(gridLayout4, 0, 0, 1, 1);

        tabWidget->addTab(Widget4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        vboxLayout = new QVBoxLayout(tab);
        vboxLayout->setSpacing(6);
        vboxLayout->setMargin(11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        GroupBox1 = new Q3GroupBox(tab);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        GroupBox1->setColumnLayout(0, Qt::Vertical);
        GroupBox1->layout()->setSpacing(6);
        GroupBox1->layout()->setMargin(11);
        vboxLayout1 = new QVBoxLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(GroupBox1->layout());
        if (boxlayout)
            boxlayout->addLayout(vboxLayout1);
        vboxLayout1->setAlignment(Qt::AlignTop);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setMargin(0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        showGraphBut = new QCheckBox(GroupBox1);
        showGraphBut->setObjectName(QString::fromUtf8("showGraphBut"));
        showGraphBut->setChecked(true);

        hboxLayout2->addWidget(showGraphBut);

        Spacer1_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(Spacer1_2);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setMargin(0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        showStatBut = new QCheckBox(GroupBox1);
        showStatBut->setObjectName(QString::fromUtf8("showStatBut"));
        showStatBut->setChecked(true);

        hboxLayout3->addWidget(showStatBut);

        Spacer2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(Spacer2);


        vboxLayout1->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setMargin(0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        askRemoveBut = new QCheckBox(GroupBox1);
        askRemoveBut->setObjectName(QString::fromUtf8("askRemoveBut"));
        askRemoveBut->setChecked(true);

        hboxLayout4->addWidget(askRemoveBut);

        Spacer3_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(Spacer3_2);


        vboxLayout1->addLayout(hboxLayout4);


        vboxLayout->addWidget(GroupBox1);

        GroupBox2 = new Q3GroupBox(tab);
        GroupBox2->setObjectName(QString::fromUtf8("GroupBox2"));
        GroupBox2->setColumnLayout(0, Qt::Vertical);
        GroupBox2->layout()->setSpacing(6);
        GroupBox2->layout()->setMargin(11);
        vboxLayout2 = new QVBoxLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(GroupBox2->layout());
        if (boxlayout1)
            boxlayout1->addLayout(vboxLayout2);
        vboxLayout2->setAlignment(Qt::AlignTop);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setMargin(0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        enableLogBut = new QCheckBox(GroupBox2);
        enableLogBut->setObjectName(QString::fromUtf8("enableLogBut"));

        hboxLayout5->addWidget(enableLogBut);

        Spacer1_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(Spacer1_4);


        vboxLayout2->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(5);
        hboxLayout6->setMargin(0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        TextLabel15 = new QLabel(GroupBox2);
        TextLabel15->setObjectName(QString::fromUtf8("TextLabel15"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(1));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(TextLabel15->sizePolicy().hasHeightForWidth());
        TextLabel15->setSizePolicy(sizePolicy3);
        TextLabel15->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel15->setWordWrap(false);

        hboxLayout6->addWidget(TextLabel15);

        portSpin = new QSpinBox(GroupBox2);
        portSpin->setObjectName(QString::fromUtf8("portSpin"));
        sizePolicy.setHeightForWidth(portSpin->sizePolicy().hasHeightForWidth());
        portSpin->setSizePolicy(sizePolicy);
        portSpin->setMaximumSize(QSize(50, 32767));

        hboxLayout6->addWidget(portSpin);

        Spacer11_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(Spacer11_2);


        vboxLayout2->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(5);
        hboxLayout7->setMargin(0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        timeoutBut = new QCheckBox(GroupBox2);
        timeoutBut->setObjectName(QString::fromUtf8("timeoutBut"));

        hboxLayout7->addWidget(timeoutBut);

        Spacer10 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(Spacer10);


        vboxLayout2->addLayout(hboxLayout7);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(5);
        hboxLayout8->setMargin(0);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        TextLabel2_3 = new QLabel(GroupBox2);
        TextLabel2_3->setObjectName(QString::fromUtf8("TextLabel2_3"));
        sizePolicy3.setHeightForWidth(TextLabel2_3->sizePolicy().hasHeightForWidth());
        TextLabel2_3->setSizePolicy(sizePolicy3);
        TextLabel2_3->setMinimumSize(QSize(20, 0));
        TextLabel2_3->setMaximumSize(QSize(20, 32767));
        TextLabel2_3->setWordWrap(false);

        hboxLayout8->addWidget(TextLabel2_3);

        timeoutSpin = new QSpinBox(GroupBox2);
        timeoutSpin->setObjectName(QString::fromUtf8("timeoutSpin"));
        sizePolicy.setHeightForWidth(timeoutSpin->sizePolicy().hasHeightForWidth());
        timeoutSpin->setSizePolicy(sizePolicy);
        timeoutSpin->setMaximum(900);
        timeoutSpin->setMinimum(15);
        timeoutSpin->setValue(180);

        hboxLayout8->addWidget(timeoutSpin);

        timeoutLabel = new QLabel(GroupBox2);
        timeoutLabel->setObjectName(QString::fromUtf8("timeoutLabel"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(timeoutLabel->sizePolicy().hasHeightForWidth());
        timeoutLabel->setSizePolicy(sizePolicy4);
        timeoutLabel->setWordWrap(false);

        hboxLayout8->addWidget(timeoutLabel);

        Spacer9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(Spacer9);


        vboxLayout2->addLayout(hboxLayout8);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setSpacing(5);
        hboxLayout9->setMargin(0);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        startBut = new QCheckBox(GroupBox2);
        startBut->setObjectName(QString::fromUtf8("startBut"));

        hboxLayout9->addWidget(startBut);

        Spacer8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(Spacer8);


        vboxLayout2->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(5);
        hboxLayout10->setMargin(0);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        TextLabel2 = new QLabel(GroupBox2);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        sizePolicy3.setHeightForWidth(TextLabel2->sizePolicy().hasHeightForWidth());
        TextLabel2->setSizePolicy(sizePolicy3);
        TextLabel2->setMinimumSize(QSize(20, 0));
        TextLabel2->setMaximumSize(QSize(20, 32767));
        TextLabel2->setWordWrap(false);

        hboxLayout10->addWidget(TextLabel2);

        progPath = new QLineEdit(GroupBox2);
        progPath->setObjectName(QString::fromUtf8("progPath"));
        sizePolicy1.setHeightForWidth(progPath->sizePolicy().hasHeightForWidth());
        progPath->setSizePolicy(sizePolicy1);
        progPath->setMinimumSize(QSize(250, 0));

        hboxLayout10->addWidget(progPath);

        browseBut = new QPushButton(GroupBox2);
        browseBut->setObjectName(QString::fromUtf8("browseBut"));
        sizePolicy.setHeightForWidth(browseBut->sizePolicy().hasHeightForWidth());
        browseBut->setSizePolicy(sizePolicy);
        browseBut->setAutoDefault(false);

        hboxLayout10->addWidget(browseBut);


        vboxLayout2->addLayout(hboxLayout10);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(5);
        hboxLayout11->setMargin(0);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        TextLabel2_2 = new QLabel(GroupBox2);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));
        sizePolicy3.setHeightForWidth(TextLabel2_2->sizePolicy().hasHeightForWidth());
        TextLabel2_2->setSizePolicy(sizePolicy3);
        TextLabel2_2->setMinimumSize(QSize(20, 0));
        TextLabel2_2->setMaximumSize(QSize(20, 32767));
        TextLabel2_2->setWordWrap(false);

        hboxLayout11->addWidget(TextLabel2_2);

        delaySpin = new QSpinBox(GroupBox2);
        delaySpin->setObjectName(QString::fromUtf8("delaySpin"));
        sizePolicy.setHeightForWidth(delaySpin->sizePolicy().hasHeightForWidth());
        delaySpin->setSizePolicy(sizePolicy);
        delaySpin->setValue(2);

        hboxLayout11->addWidget(delaySpin);

        delayLabel = new QLabel(GroupBox2);
        delayLabel->setObjectName(QString::fromUtf8("delayLabel"));
        sizePolicy4.setHeightForWidth(delayLabel->sizePolicy().hasHeightForWidth());
        delayLabel->setSizePolicy(sizePolicy4);
        delayLabel->setWordWrap(false);

        hboxLayout11->addWidget(delayLabel);

        Spacer14 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout11->addItem(Spacer14);


        vboxLayout2->addLayout(hboxLayout11);


        vboxLayout->addWidget(GroupBox2);

        Spacer12_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(Spacer12_2);

        tabWidget->addTab(tab, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        gridLayout6 = new QGridLayout(tab1);
        gridLayout6->setSpacing(5);
        gridLayout6->setMargin(10);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        logfile = new Q3ListView(tab1);
        logfile->addColumn(QApplication::translate("ConfigDlg", "Account", 0, QApplication::UnicodeUTF8));
        logfile->header()->setClickEnabled(true, logfile->header()->count() - 1);
        logfile->header()->setResizeEnabled(true, logfile->header()->count() - 1);
        logfile->addColumn(QApplication::translate("ConfigDlg", "Day", 0, QApplication::UnicodeUTF8));
        logfile->header()->setClickEnabled(true, logfile->header()->count() - 1);
        logfile->header()->setResizeEnabled(true, logfile->header()->count() - 1);
        logfile->addColumn(QApplication::translate("ConfigDlg", "Time", 0, QApplication::UnicodeUTF8));
        logfile->header()->setClickEnabled(true, logfile->header()->count() - 1);
        logfile->header()->setResizeEnabled(true, logfile->header()->count() - 1);
        logfile->addColumn(QApplication::translate("ConfigDlg", "Duration", 0, QApplication::UnicodeUTF8));
        logfile->header()->setClickEnabled(true, logfile->header()->count() - 1);
        logfile->header()->setResizeEnabled(true, logfile->header()->count() - 1);
        logfile->addColumn(QApplication::translate("ConfigDlg", "Download", 0, QApplication::UnicodeUTF8));
        logfile->header()->setClickEnabled(true, logfile->header()->count() - 1);
        logfile->header()->setResizeEnabled(true, logfile->header()->count() - 1);
        logfile->addColumn(QApplication::translate("ConfigDlg", "Upload", 0, QApplication::UnicodeUTF8));
        logfile->header()->setClickEnabled(true, logfile->header()->count() - 1);
        logfile->header()->setResizeEnabled(true, logfile->header()->count() - 1);
        logfile->setObjectName(QString::fromUtf8("logfile"));
        logfile->setRootIsDecorated(true);

        gridLayout6->addWidget(logfile, 1, 0, 1, 4);

        clearLogBut = new QPushButton(tab1);
        clearLogBut->setObjectName(QString::fromUtf8("clearLogBut"));
        clearLogBut->setAutoDefault(false);

        gridLayout6->addWidget(clearLogBut, 2, 0, 1, 1);

        nextBut = new QPushButton(tab1);
        nextBut->setObjectName(QString::fromUtf8("nextBut"));
        nextBut->setEnabled(true);
        nextBut->setMinimumSize(QSize(50, 22));
        nextBut->setIcon(qt_get_icon(image1_ID));
        nextBut->setAutoDefault(false);

        gridLayout6->addWidget(nextBut, 2, 3, 1, 1);

        prevBut = new QPushButton(tab1);
        prevBut->setObjectName(QString::fromUtf8("prevBut"));
        prevBut->setEnabled(true);
        prevBut->setMinimumSize(QSize(50, 22));
        prevBut->setIcon(qt_get_icon(image2_ID));
        prevBut->setAutoDefault(false);

        gridLayout6->addWidget(prevBut, 2, 2, 1, 1);

        Spacer1_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout6->addItem(Spacer1_3, 2, 1, 1, 1);

        hboxLayout12 = new QHBoxLayout();
        hboxLayout12->setSpacing(5);
        hboxLayout12->setMargin(0);
        hboxLayout12->setObjectName(QString::fromUtf8("hboxLayout12"));
        monthCombo = new QComboBox(tab1);
        monthCombo->setObjectName(QString::fromUtf8("monthCombo"));

        hboxLayout12->addWidget(monthCombo);

        yearSpin = new QSpinBox(tab1);
        yearSpin->setObjectName(QString::fromUtf8("yearSpin"));
        yearSpin->setValue(99);

        hboxLayout12->addWidget(yearSpin);

        Spacer1_21 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout12->addItem(Spacer1_21);


        gridLayout6->addLayout(hboxLayout12, 0, 0, 1, 4);

        tabWidget->addTab(tab1, QString());
        TabPage = new QWidget();
        TabPage->setObjectName(QString::fromUtf8("TabPage"));
        vboxLayout3 = new QVBoxLayout(TabPage);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setMargin(10);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        textWid = new Q3TextView(TabPage);
        textWid->setObjectName(QString::fromUtf8("textWid"));
        textWid->setLineWidth(2);

        vboxLayout3->addWidget(textWid);

        tabWidget->addTab(TabPage, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(output, runConfBut);
        QWidget::setTabOrder(runConfBut, providerCombo);
        QWidget::setTabOrder(providerCombo, productEdit);
        QWidget::setTabOrder(productEdit, homeEdit);
        QWidget::setTabOrder(homeEdit, countryEdit);
        QWidget::setTabOrder(countryEdit, phoneEdit);
        QWidget::setTabOrder(phoneEdit, userEdit);
        QWidget::setTabOrder(userEdit, passwdEdit);
        QWidget::setTabOrder(passwdEdit, addBut);
        QWidget::setTabOrder(addBut, removeBut);
        QWidget::setTabOrder(removeBut, portSpin);
        QWidget::setTabOrder(portSpin, askRemoveBut);
        QWidget::setTabOrder(askRemoveBut, helpBut);
        QWidget::setTabOrder(helpBut, okBut);
        QWidget::setTabOrder(okBut, cancelBut);
        QWidget::setTabOrder(cancelBut, tabWidget);

        retranslateUi(ConfigDlg);

        QMetaObject::connectSlotsByName(ConfigDlg);
    } // setupUi

    void retranslateUi(QDialog *ConfigDlg)
    {
        ConfigDlg->setWindowTitle(QApplication::translate("ConfigDlg", "Configuration - QtWvDialer", 0, QApplication::UnicodeUTF8));
        helpBut->setText(QString());
#ifndef QT_NO_TOOLTIP
        helpBut->setProperty("toolTip", QVariant(QApplication::translate("ConfigDlg", "Direct help", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        okBut->setText(QApplication::translate("ConfigDlg", "&OK", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        okBut->setProperty("toolTip", QVariant(QApplication::translate("ConfigDlg", "Close and accept changes", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        okBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "If you click this button all changes made are written permanently to the file /etc/wvdial.conf. You can't undo this operation.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        cancelBut->setText(QApplication::translate("ConfigDlg", "&Cancel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cancelBut->setProperty("toolTip", QVariant(QApplication::translate("ConfigDlg", "Close and discard changes", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cancelBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "If you click this button all made changes are discarded.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        tabWidget->setProperty("whatsThis", QVariant(QString()));
#endif // QT_NO_WHATSTHIS
        runConfBut->setText(QApplication::translate("ConfigDlg", "&Run wvdialconf", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        runConfBut->setProperty("toolTip", QVariant(QApplication::translate("ConfigDlg", "Automagically configure modem", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        runConfBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Clicking this button calls <b>wvdialconf</b>. This will automatically configure your modem. If you click cancel after this the original /etc/wvdial.conf file will be restored.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        output->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Here you will find the output of <i>wvdialconf</i>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(Widget3), QApplication::translate("ConfigDlg", "Modem", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        homeEdit->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Enter here the url of your providers homepage <i>(optional)</i>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel11->setText(QApplication::translate("ConfigDlg", "Country:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        productEdit->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Enter here a description string for this account <i>(optional)</i>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel17_4->setText(QApplication::translate("ConfigDlg", "*", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        providerCombo->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Select one of tthe accounts and edit the values below or press <b>More...</b> to get some more options.<p>A special case is the account <i>Defaults</i>. <b>wvdial</b> first takes the options from this account and overrides them with the settings from the account you have choosen for dialing. Therefore <i>Defaults</i> should contain your common settings (modem parameter etc.)", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel14->setText(QApplication::translate("ConfigDlg", "Password:", 0, QApplication::UnicodeUTF8));
        TextLabel17->setText(QApplication::translate("ConfigDlg", "*", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        passwdEdit->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Enter here the password for the account <i>(required)</i>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        userEdit->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Enter here the user name for the account <i>(required)</i>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        phoneEdit->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Enter here the phone number for the account <i>(required)</i>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel10->setText(QApplication::translate("ConfigDlg", "Homepage:", 0, QApplication::UnicodeUTF8));
        TextLabel17_3->setText(QApplication::translate("ConfigDlg", "*", 0, QApplication::UnicodeUTF8));
        TextLabel13->setText(QApplication::translate("ConfigDlg", "User name:", 0, QApplication::UnicodeUTF8));
        TextLabel12->setText(QApplication::translate("ConfigDlg", "Phone number:", 0, QApplication::UnicodeUTF8));
        TextLabel9->setText(QApplication::translate("ConfigDlg", "Product:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        countryEdit->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Enter here your country <i>Optional</i>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel8->setText(QApplication::translate("ConfigDlg", "Account:", 0, QApplication::UnicodeUTF8));
        addBut->setText(QApplication::translate("ConfigDlg", "&Add account", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        addBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "If you click this button a new account will be added to the list. Then fill out the required fields.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        removeBut->setText(QApplication::translate("ConfigDlg", "&Remove account", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        removeBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Clicking this button removes the current account.<br><i>You can't undo this operation.</i>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        moreBut->setText(QApplication::translate("ConfigDlg", "&More...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        moreBut->setProperty("toolTip", QVariant(QApplication::translate("ConfigDlg", "Open extended options dialog", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        moreBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "If you click this button a second dialog opens with some more \"uncommon\" options. Consider these as \"expert options\". You'll need them only if you have to do some finetuning in your configuration.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(Widget4), QApplication::translate("ConfigDlg", "Account", 0, QApplication::UnicodeUTF8));
        GroupBox1->setTitle(QApplication::translate("ConfigDlg", "GUI", 0, QApplication::UnicodeUTF8));
        showGraphBut->setText(QApplication::translate("ConfigDlg", "Show PPP throughput graph", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        showGraphBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Set this button checked if you want to see the PPP throughput graph.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        showStatBut->setText(QApplication::translate("ConfigDlg", "Show PPP troughput statistics", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        showStatBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Set this button checked if you want to see the PPP statistics RX/TX total and RX/TX throughput.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        askRemoveBut->setText(QApplication::translate("ConfigDlg", "&Ask before removing account from list", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        askRemoveBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Set this button checked if you want to be prompted when you remove a account from the list. If not checked the account will be removed immediately.<br><i>Remember: you can't undo this operation.</i>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        GroupBox2->setTitle(QApplication::translate("ConfigDlg", "Connection", 0, QApplication::UnicodeUTF8));
        enableLogBut->setText(QApplication::translate("ConfigDlg", "Enable logging", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        enableLogBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Set this button checked if you want to enable the monthly logfiles. You will get logfiles containing account, connection time, duration and amount of data transfer.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel15->setText(QApplication::translate("ConfigDlg", "PPP device:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        portSpin->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Here you can select the ppp device number. This is used for the statistics and should normally be 0.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        timeoutBut->setText(QApplication::translate("ConfigDlg", "Connection &timeout", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        timeoutBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Set this button checked if you want the connection to be automatically closed after a certain time of inactivity. The timeout value can be entered in the field below.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        timeoutSpin->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Enter here a value for the connection timeout.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        timeoutLabel->setText(QApplication::translate("ConfigDlg", "Timeout in seconds", 0, QApplication::UnicodeUTF8));
        startBut->setText(QApplication::translate("ConfigDlg", "&Start program after connect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        startBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Set this button checked if you want to execute a program after a connection was established. The program won't be restarted if you reconnect and the program is still running.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        progPath->setText(QApplication::translate("ConfigDlg", "netscape", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        progPath->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Enter here the path for the program to be executed after a connection was established.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        browseBut->setText(QApplication::translate("ConfigDlg", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        browseBut->setProperty("toolTip", QVariant(QApplication::translate("ConfigDlg", "Browse", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        browseBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "If you click this button you can browse your hardisk(s) for the program to be executed after a connection was established (Alternative to typing the program path into the field to the left).", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        delaySpin->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Enter here the delay (in seconds) for the program to be started after a connection was established.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        delayLabel->setText(QApplication::translate("ConfigDlg", "Delay in seconds", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ConfigDlg", "QtWvDial", 0, QApplication::UnicodeUTF8));
        logfile->header()->setLabel(0, QApplication::translate("ConfigDlg", "Account", 0, QApplication::UnicodeUTF8));
        logfile->header()->setLabel(1, QApplication::translate("ConfigDlg", "Day", 0, QApplication::UnicodeUTF8));
        logfile->header()->setLabel(2, QApplication::translate("ConfigDlg", "Time", 0, QApplication::UnicodeUTF8));
        logfile->header()->setLabel(3, QApplication::translate("ConfigDlg", "Duration", 0, QApplication::UnicodeUTF8));
        logfile->header()->setLabel(4, QApplication::translate("ConfigDlg", "Download", 0, QApplication::UnicodeUTF8));
        logfile->header()->setLabel(5, QApplication::translate("ConfigDlg", "Upload", 0, QApplication::UnicodeUTF8));
        clearLogBut->setText(QApplication::translate("ConfigDlg", "Clear logfiles", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        clearLogBut->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Here you can clear all QtWvdialer logfiles from your disk. Once removed you can't restore them. The files cann be found in the directory ~/.qtwvdialer/logs", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        nextBut->setText(QString());
#ifndef QT_NO_TOOLTIP
        nextBut->setProperty("toolTip", QVariant(QApplication::translate("ConfigDlg", "Next month", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nextBut->setProperty("whatsThis", QVariant(QString()));
#endif // QT_NO_WHATSTHIS
        prevBut->setText(QString());
#ifndef QT_NO_TOOLTIP
        prevBut->setProperty("toolTip", QVariant(QApplication::translate("ConfigDlg", "Previous month", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        monthCombo->clear();
        monthCombo->insertItems(0, QStringList()
         << QApplication::translate("ConfigDlg", "January", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "February", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "March", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "April", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "May", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "June", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "July", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "August", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "September", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "October", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "November", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDlg", "December", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        monthCombo->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Here you can select the month of the logfile to be displayed.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        yearSpin->setProperty("whatsThis", QVariant(QApplication::translate("ConfigDlg", "Here you can select the year of the logfile to be displayed.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("ConfigDlg", "Logfile", 0, QApplication::UnicodeUTF8));
        textWid->setText(QApplication::translate("ConfigDlg", "<div align=\"center\"><h1>QtWvDialer 0.4.4</h1>\n"
"A easy to use GUI for <b>wvdial</b> the intelligent dialer ...</div>\n"
"<p>\n"
"<div align=\"center\"><b>wvdial</b> was written by Dave Coombs and Avery Pennarun. and is copyright 1999, 2000 by Worldvisions Computer Technology. <b>QtWvDialer</b> is copyright 2000-2007 by Matthias Toussaint &lt;<u>matthias.toussaint@gmx.net</u>&gt;. It contains some GPL'ed code for PPP statistics retrieval from Sean Vyain. The code was extracted from his program <b>kpppload</b>.</div>\n"
"<p>\n"
"<div align=\"center\"><b>QtWvDialer</b> was developed with the platform independent GUI toolkit <b>Qt</b> from Trolltech AS Norway &lt;<u>http://www.trolltech.com</u>&gt;.<p><b>wdial</b> and <b>QtWvDialer</b> are licensed under GPL see &lt;<u>http://www.gnu.org/copyleft/gpl.html</u>&gt; for further details.</div>\n"
"<p>\n"
"<div align=\"center\">QtWvDialer provides a GUI for invocation of <b>wvdial</b> as well as a fairly complete editor for the configuration of <b>wvdial</b>.</div>"
                        "\n"
"<p>\n"
"<i>&copy; 2000-2004 M.Toussaint</i></p>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(TabPage), QApplication::translate("ConfigDlg", "Copyright", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ConfigDlg);
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        image1_ID,
        image2_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x02,
    0x6d, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xb5, 0xd5, 0xcf, 0x6b, 0x14,
    0x67, 0x1c, 0xc7, 0xf1, 0xd7, 0x66, 0x67, 0x77, 0x93, 0xd4, 0x54, 0xba,
    0xad, 0x1a, 0x35, 0xe0, 0xa1, 0xd2, 0x83, 0xa5, 0x87, 0x7a, 0xf3, 0xd6,
    0xd2, 0x83, 0xd0, 0xab, 0x50, 0xbc, 0x8a, 0x67, 0xa1, 0xd0, 0x5b, 0x0d,
    0x88, 0x07, 0xc5, 0x4b, 0x91, 0xfe, 0xc0, 0x9b, 0x4d, 0xfe, 0x80, 0x5e,
    0x4a, 0x2f, 0x3d, 0x56, 0x21, 0x36, 0x1e, 0x6c, 0xd3, 0xa0, 0xd5, 0x98,
    0xa8, 0x34, 0xb5, 0x55, 0xa2, 0x89, 0x89, 0x99, 0x24, 0x3b, 0xd9, 0xec,
    0x6c, 0x0f, 0xcf, 0x24, 0x2e, 0xd9, 0x09, 0xbb, 0x50, 0xfc, 0xc2, 0x30,
    0xf3, 0x0c, 0xf3, 0xbc, 0xe7, 0xf3, 0x7c, 0x9e, 0xef, 0xf7, 0xfb, 0xf0,
    0x9a, 0xa2, 0xb0, 0xfd, 0xc5, 0xf8, 0xb9, 0xe3, 0x15, 0x54, 0x26, 0x97,
    0xe7, 0x77, 0xcd, 0x3e, 0xaa, 0x96, 0x16, 0xd3, 0x81, 0x52, 0x52, 0x3f,
    0x58, 0x4b, 0x87, 0x1e, 0x35, 0x93, 0xa8, 0xd0, 0xec, 0x4b, 0xeb, 0x1b,
    0x51, 0xf4, 0xfe, 0x4a, 0x71, 0x65, 0x61, 0x6b, 0xce, 0x77, 0x23, 0xdf,
    0xaf, 0x7c, 0x71, 0xfa, 0xd4, 0xae, 0xcd, 0xf1, 0x57, 0x57, 0x47, 0xe2,
    0x36, 0xf0, 0xb6, 0x28, 0xa2, 0x8c, 0xde, 0xec, 0xde, 0x83, 0x0d, 0x24,
    0xd9, 0x55, 0x47, 0xda, 0x95, 0xe2, 0x96, 0xf7, 0x65, 0xd5, 0xe1, 0x8f,
    0x45, 0xfb, 0x3e, 0xd7, 0x33, 0x70, 0x1c, 0x34, 0x93, 0xe7, 0x36, 0xe6,
    0xae, 0x59, 0xf9, 0x79, 0x44, 0x6d, 0xec, 0x0e, 0x16, 0xb0, 0x9a, 0xfd,
    0xac, 0x4d, 0x51, 0x5e, 0x54, 0xec, 0xfd, 0xf6, 0x1b, 0xd1, 0xfe, 0xcb,
    0x0a, 0x95, 0xc3, 0xaf, 0x7e, 0x17, 0xf5, 0x2b, 0xee, 0x3e, 0xa2, 0x7c,
    0xe4, 0x53, 0xf5, 0xd9, 0x69, 0x8d, 0xb9, 0x25, 0xd4, 0x32, 0xe5, 0xcd,
    0x4e, 0xe0, 0xa2, 0xea, 0xf0, 0x27, 0xa2, 0xfd, 0x97, 0x41, 0x1a, 0xc7,
    0x16, 0xaf, 0x5c, 0x13, 0xff, 0x38, 0xa9, 0x34, 0xf4, 0x86, 0xe2, 0x3b,
    0xbb, 0x15, 0x4a, 0xbd, 0x0a, 0xfd, 0x83, 0x6a, 0xe3, 0xf7, 0xb0, 0x94,
    0xa9, 0x6e, 0xb4, 0x42, 0x7a, 0x72, 0xc0, 0x91, 0x62, 0xf5, 0xb3, 0xad,
    0xd1, 0xea, 0x2f, 0xb3, 0x92, 0x89, 0xe7, 0x1a, 0x4f, 0xa6, 0x2c, 0x5c,
    0x1a, 0x95, 0xc6, 0x31, 0x28, 0xbf, 0xfb, 0x01, 0xde, 0xc3, 0x1e, 0x54,
    0xb6, 0x43, 0xf2, 0xc1, 0xa2, 0xa1, 0xad, 0x51, 0xfc, 0xc3, 0x6d, 0xdc,
    0xc7, 0x4d, 0xfc, 0xaa, 0xf1, 0x62, 0x26, 0xcc, 0x1c, 0xe8, 0xc7, 0x01,
    0xbc, 0x95, 0x07, 0x8e, 0x72, 0xc0, 0x24, 0x7f, 0x8c, 0x6a, 0xae, 0xcd,
    0x48, 0xe3, 0x41, 0xdc, 0xc5, 0x04, 0xee, 0xa0, 0xa9, 0x50, 0x5e, 0x6b,
    0xf9, 0xb2, 0x2f, 0x83, 0xb6, 0x59, 0x9a, 0x07, 0xde, 0xf0, 0xf2, 0xea,
    0x75, 0xfc, 0x8d, 0x2a, 0xd6, 0xf1, 0x17, 0x96, 0x54, 0xcf, 0x9e, 0x14,
    0xed, 0x3b, 0x06, 0xd6, 0x6e, 0x3c, 0xf4, 0x6a, 0xe3, 0xda, 0x52, 0x2e,
    0x1f, 0xcc, 0x22, 0x66, 0x32, 0x35, 0x29, 0x6a, 0xde, 0x3e, 0x7f, 0x42,
    0xe9, 0xd0, 0xd7, 0x20, 0x5d, 0x5e, 0x15, 0xff, 0x34, 0x89, 0x7f, 0xf1,
    0x42, 0xc8, 0xe9, 0x8e, 0xe0, 0x86, 0xb0, 0xcb, 0x89, 0x90, 0xcf, 0x45,
    0xd5, 0x2f, 0x3f, 0x52, 0x3a, 0x74, 0x05, 0xac, 0x4f, 0x3f, 0xb0, 0x34,
    0x32, 0xa1, 0xf1, 0xe4, 0xbe, 0xe0, 0xfd, 0x5c, 0xa6, 0xbc, 0x23, 0x58,
    0xa6, 0x72, 0x73, 0x79, 0xbd, 0xa2, 0x83, 0x67, 0x02, 0xf4, 0xc1, 0x94,
    0x85, 0x0b, 0x63, 0x78, 0x8a, 0x49, 0x4c, 0x61, 0x5e, 0xb0, 0xa3, 0x2b,
    0x70, 0x6b, 0x14, 0x49, 0xc3, 0xe6, 0x24, 0x13, 0x77, 0xf1, 0x18, 0x7f,
    0xe2, 0x36, 0xfe, 0xc9, 0x56, 0xd7, 0xe6, 0x71, 0xa7, 0x5e, 0x01, 0x6f,
    0xe2, 0x30, 0x3e, 0xc4, 0x5e, 0x3c, 0xcb, 0xd4, 0x4e, 0x0b, 0xc5, 0x91,
    0xdb, 0x2b, 0xba, 0x51, 0x5c, 0x30, 0x38, 0x7a, 0x0b, 0xd4, 0x1f, 0xff,
    0x6e, 0x7e, 0xf8, 0x62, 0x06, 0x4c, 0x76, 0x82, 0x92, 0x5f, 0x20, 0xdb,
    0xa3, 0xb4, 0xf5, 0xd4, 0x5c, 0xef, 0x13, 0x2a, 0xad, 0xdf, 0xce, 0x7d,
    0xa6, 0x6b, 0x70, 0x8b, 0x5d, 0xcd, 0x82, 0xb0, 0xca, 0x1e, 0x1d, 0x6c,
    0xec, 0xc6, 0xe3, 0xaa, 0xd0, 0x13, 0x8e, 0x62, 0x40, 0xc8, 0xdd, 0xdf,
    0x84, 0xa2, 0x89, 0x77, 0x9a, 0xd4, 0x8d, 0xc7, 0x6b, 0x42, 0x26, 0x34,
    0x84, 0x66, 0xbf, 0x2c, 0xe4, 0xee, 0xfa, 0xff, 0x55, 0xdc, 0x7a, 0x8a,
    0x6c, 0x9e, 0x20, 0x3b, 0x96, 0xf2, 0x6b, 0x8f, 0xff, 0x00, 0xb2, 0xcb,
    0xcd, 0x00, 0xc4, 0x5d, 0xe9, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
    0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image1_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00,
    0x55, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xc5, 0xd3, 0x41, 0x0a, 0x00,
    0x20, 0x08, 0x44, 0xd1, 0x8c, 0x4e, 0x35, 0xf7, 0x67, 0xae, 0x65, 0xab,
    0x20, 0x04, 0x51, 0x73, 0x91, 0xfb, 0xff, 0x28, 0x23, 0x21, 0x39, 0x3a,
    0x33, 0x5b, 0xf5, 0x0d, 0x00, 0x50, 0x00, 0xda, 0x3e, 0x41, 0x15, 0x72,
    0xaf, 0x90, 0x85, 0xc2, 0x1d, 0x44, 0x50, 0x7a, 0x89, 0x1e, 0x54, 0x7e,
    0x05, 0x0b, 0xb5, 0x9f, 0x71, 0x55, 0x03, 0x92, 0xf2, 0x04, 0xd8, 0x30,
    0x0d, 0x78, 0x61, 0x08, 0x44, 0xa1, 0x0b, 0x64, 0xc3, 0x33, 0xf2, 0xfd,
    0x37, 0x6e, 0x39, 0x79, 0x24, 0x88, 0x72, 0x5c, 0x34, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    static const unsigned char image2_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00,
    0x59, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xc5, 0x93, 0x4b, 0x0a, 0xc0,
    0x30, 0x08, 0x44, 0x6b, 0xc9, 0xa9, 0xe6, 0xfe, 0xcc, 0xb5, 0xcc, 0x2a,
    0xab, 0x54, 0x46, 0x63, 0x21, 0xee, 0x14, 0xde, 0xc3, 0x0f, 0x1a, 0xc9,
    0xa7, 0x13, 0x6f, 0x8b, 0x3e, 0x11, 0x00, 0x70, 0x00, 0xbe, 0xf2, 0x51,
    0x01, 0xbf, 0xea, 0x52, 0x10, 0x81, 0x52, 0xa0, 0xc0, 0x50, 0x90, 0x05,
    0x37, 0x41, 0x15, 0x5c, 0xf1, 0xdf, 0x19, 0x49, 0x1a, 0x49, 0x6b, 0x77,
    0x50, 0x15, 0x85, 0x23, 0x64, 0x45, 0x72, 0x07, 0x4a, 0x94, 0x5e, 0x62,
    0x24, 0xb2, 0xeb, 0xdf, 0x38, 0x01, 0xa7, 0xbe, 0x27, 0xc6, 0x58, 0xef,
    0x85, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42,
    0x60, 0x82
};

    switch (id) {
        case image0_ID:  { QImage img; img.loadFromData(image0_data, sizeof(image0_data), "PNG"); return QPixmap::fromImage(img); }
        case image1_ID:  { QImage img; img.loadFromData(image1_data, sizeof(image1_data), "PNG"); return QPixmap::fromImage(img); }
        case image2_ID:  { QImage img; img.loadFromData(image2_data, sizeof(image2_data), "PNG"); return QPixmap::fromImage(img); }
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class ConfigDlg: public Ui_ConfigDlg {};
} // namespace Ui

QT_END_NAMESPACE

class ConfigDlg : public QDialog, public Ui::ConfigDlg
{
    Q_OBJECT

public:
    ConfigDlg(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~ConfigDlg();

protected slots:
    virtual void languageChange();

};

#endif // CONFIGDLG_H
