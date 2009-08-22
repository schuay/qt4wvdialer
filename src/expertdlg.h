#ifndef EXPERTDLG_H
#define EXPERTDLG_H

#include <qvariant.h>


#include <Qt3Support/Q3GroupBox>
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
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ExpertDlg
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    Q3GroupBox *GroupBox7;
    QGridLayout *gridLayout2;
    QGridLayout *gridLayout3;
    QLabel *TextLabel9;
    QLineEdit *forceAddressEdit;
    QLineEdit *areaCodeEdit;
    QLabel *TextLabel8;
    QSpacerItem *Spacer13;
    Q3GroupBox *GroupBox6;
    QGridLayout *gridLayout4;
    QGridLayout *gridLayout5;
    QSpacerItem *Spacer4;
    QCheckBox *tonlineBut;
    QSpacerItem *Spacer6;
    QSpacerItem *Spacer3;
    QSpacerItem *Spacer12;
    QSpacerItem *Spacer5;
    QCheckBox *newpppdBut;
    QCheckBox *compuserveBut;
    QCheckBox *reconnectBut;
    QSpacerItem *Spacer2;
    QCheckBox *stupidBut;
    QCheckBox *dnsBut;
    QSpacerItem *Spacer10;
    QCheckBox *isdnBut;
    Q3GroupBox *GroupBox5;
    QGridLayout *gridLayout6;
    QGridLayout *gridLayout7;
    QLabel *TextLabel5_2;
    QLabel *TextLabel6;
    QLineEdit *init2Edit;
    QLabel *TextLabel2;
    QLineEdit *modemEdit;
    QLabel *TextLabel5_2_2;
    QLineEdit *init4Edit;
    QLineEdit *init3Edit;
    QLineEdit *modemTypeEdit;
    QLabel *TextLabel5;
    QLabel *TextLabel5_2_5_2;
    QLabel *TextLabel5_2_3;
    QLabel *TextLabel7;
    QComboBox *baudCombo;
    QLineEdit *init5Edit;
    QLabel *TextLabel5_2_5;
    QLabel *TextLabel5_2_4;
    QLineEdit *init9Edit;
    QLabel *TextLabel4;
    QLabel *TextLabel3;
    QLineEdit *init7Edit;
    QLabel *TextLabel5_21;
    QLineEdit *init8Edit;
    QLineEdit *init1Edit;
    QLineEdit *init6Edit;
    QSpacerItem *Spacer9;
    QLabel *TextLabel1;
    QLineEdit *dialCommandEdit;
    QLineEdit *modemNameEdit;
    QHBoxLayout *hboxLayout;
    QToolButton *helpBut;
    QSpacerItem *Horizontal_Spacing2;
    QPushButton *okBut;
    QPushButton *cancelBut;

    void setupUi(QDialog *ExpertDlg)
    {
        if (ExpertDlg->objectName().isEmpty())
            ExpertDlg->setObjectName(QString::fromUtf8("ExpertDlg"));
        ExpertDlg->resize(617, 372);
        ExpertDlg->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(ExpertDlg);
        gridLayout->setSpacing(5);
        gridLayout->setMargin(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setMargin(0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        GroupBox7 = new Q3GroupBox(ExpertDlg);
        GroupBox7->setObjectName(QString::fromUtf8("GroupBox7"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GroupBox7->sizePolicy().hasHeightForWidth());
        GroupBox7->setSizePolicy(sizePolicy);
        GroupBox7->setColumnLayout(0, Qt::Vertical);
        GroupBox7->layout()->setSpacing(5);
        GroupBox7->layout()->setMargin(10);
        gridLayout2 = new QGridLayout();
        QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(GroupBox7->layout());
        if (boxlayout)
            boxlayout->addLayout(gridLayout2);
        gridLayout2->setAlignment(Qt::AlignTop);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(5);
        gridLayout3->setMargin(0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        TextLabel9 = new QLabel(GroupBox7);
        TextLabel9->setObjectName(QString::fromUtf8("TextLabel9"));
        TextLabel9->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel9->setWordWrap(false);

        gridLayout3->addWidget(TextLabel9, 1, 0, 1, 1);

        forceAddressEdit = new QLineEdit(GroupBox7);
        forceAddressEdit->setObjectName(QString::fromUtf8("forceAddressEdit"));

        gridLayout3->addWidget(forceAddressEdit, 1, 1, 1, 1);

        areaCodeEdit = new QLineEdit(GroupBox7);
        areaCodeEdit->setObjectName(QString::fromUtf8("areaCodeEdit"));

        gridLayout3->addWidget(areaCodeEdit, 0, 1, 1, 1);

        TextLabel8 = new QLabel(GroupBox7);
        TextLabel8->setObjectName(QString::fromUtf8("TextLabel8"));
        TextLabel8->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel8->setWordWrap(false);

        gridLayout3->addWidget(TextLabel8, 0, 0, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);


        gridLayout1->addWidget(GroupBox7, 1, 1, 1, 1);

        Spacer13 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(Spacer13, 2, 0, 1, 1);

        GroupBox6 = new Q3GroupBox(ExpertDlg);
        GroupBox6->setObjectName(QString::fromUtf8("GroupBox6"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(GroupBox6->sizePolicy().hasHeightForWidth());
        GroupBox6->setSizePolicy(sizePolicy1);
        GroupBox6->setColumnLayout(0, Qt::Vertical);
        GroupBox6->layout()->setSpacing(5);
        GroupBox6->layout()->setMargin(10);
        gridLayout4 = new QGridLayout();
        QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(GroupBox6->layout());
        if (boxlayout1)
            boxlayout1->addLayout(gridLayout4);
        gridLayout4->setAlignment(Qt::AlignTop);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout5 = new QGridLayout();
        gridLayout5->setSpacing(5);
        gridLayout5->setMargin(0);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        Spacer4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(Spacer4, 1, 3, 1, 1);

        tonlineBut = new QCheckBox(GroupBox6);
        tonlineBut->setObjectName(QString::fromUtf8("tonlineBut"));
        tonlineBut->setTristate(true);

        gridLayout5->addWidget(tonlineBut, 0, 4, 1, 1);

        Spacer6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(Spacer6, 2, 1, 1, 3);

        Spacer3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(Spacer3, 0, 5, 1, 4);

        Spacer12 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(Spacer12, 3, 8, 1, 1);

        Spacer5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(Spacer5, 1, 7, 1, 2);

        newpppdBut = new QCheckBox(GroupBox6);
        newpppdBut->setObjectName(QString::fromUtf8("newpppdBut"));
        newpppdBut->setTristate(true);

        gridLayout5->addWidget(newpppdBut, 2, 4, 1, 2);

        compuserveBut = new QCheckBox(GroupBox6);
        compuserveBut->setObjectName(QString::fromUtf8("compuserveBut"));
        compuserveBut->setTristate(true);

        gridLayout5->addWidget(compuserveBut, 0, 0, 1, 2);

        reconnectBut = new QCheckBox(GroupBox6);
        reconnectBut->setObjectName(QString::fromUtf8("reconnectBut"));
        reconnectBut->setTristate(true);

        gridLayout5->addWidget(reconnectBut, 3, 4, 1, 4);

        Spacer2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(Spacer2, 0, 2, 1, 2);

        stupidBut = new QCheckBox(GroupBox6);
        stupidBut->setObjectName(QString::fromUtf8("stupidBut"));
        stupidBut->setTristate(true);

        gridLayout5->addWidget(stupidBut, 1, 4, 1, 3);

        dnsBut = new QCheckBox(GroupBox6);
        dnsBut->setObjectName(QString::fromUtf8("dnsBut"));
        dnsBut->setTristate(true);

        gridLayout5->addWidget(dnsBut, 2, 0, 1, 1);

        Spacer10 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(Spacer10, 2, 6, 1, 3);

        isdnBut = new QCheckBox(GroupBox6);
        isdnBut->setObjectName(QString::fromUtf8("isdnBut"));
        isdnBut->setTristate(true);

        gridLayout5->addWidget(isdnBut, 1, 0, 1, 3);


        gridLayout4->addLayout(gridLayout5, 0, 0, 1, 1);


        gridLayout1->addWidget(GroupBox6, 1, 0, 1, 1);

        GroupBox5 = new Q3GroupBox(ExpertDlg);
        GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
        GroupBox5->setColumnLayout(0, Qt::Vertical);
        GroupBox5->layout()->setSpacing(5);
        GroupBox5->layout()->setMargin(10);
        gridLayout6 = new QGridLayout();
        QBoxLayout *boxlayout2 = qobject_cast<QBoxLayout *>(GroupBox5->layout());
        if (boxlayout2)
            boxlayout2->addLayout(gridLayout6);
        gridLayout6->setAlignment(Qt::AlignTop);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        gridLayout7 = new QGridLayout();
        gridLayout7->setSpacing(5);
        gridLayout7->setMargin(0);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        TextLabel5_2 = new QLabel(GroupBox5);
        TextLabel5_2->setObjectName(QString::fromUtf8("TextLabel5_2"));
        TextLabel5_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5_2->setWordWrap(false);

        gridLayout7->addWidget(TextLabel5_2, 2, 3, 1, 1);

        TextLabel6 = new QLabel(GroupBox5);
        TextLabel6->setObjectName(QString::fromUtf8("TextLabel6"));
        TextLabel6->setWordWrap(false);

        gridLayout7->addWidget(TextLabel6, 4, 0, 1, 1);

        init2Edit = new QLineEdit(GroupBox5);
        init2Edit->setObjectName(QString::fromUtf8("init2Edit"));

        gridLayout7->addWidget(init2Edit, 1, 4, 1, 1);

        TextLabel2 = new QLabel(GroupBox5);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));
        TextLabel2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel2->setWordWrap(false);

        gridLayout7->addWidget(TextLabel2, 1, 0, 1, 1);

        modemEdit = new QLineEdit(GroupBox5);
        modemEdit->setObjectName(QString::fromUtf8("modemEdit"));
        modemEdit->setMinimumSize(QSize(150, 0));

        gridLayout7->addWidget(modemEdit, 0, 1, 1, 2);

        TextLabel5_2_2 = new QLabel(GroupBox5);
        TextLabel5_2_2->setObjectName(QString::fromUtf8("TextLabel5_2_2"));
        TextLabel5_2_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5_2_2->setWordWrap(false);

        gridLayout7->addWidget(TextLabel5_2_2, 4, 3, 1, 1);

        init4Edit = new QLineEdit(GroupBox5);
        init4Edit->setObjectName(QString::fromUtf8("init4Edit"));

        gridLayout7->addWidget(init4Edit, 3, 4, 1, 1);

        init3Edit = new QLineEdit(GroupBox5);
        init3Edit->setObjectName(QString::fromUtf8("init3Edit"));

        gridLayout7->addWidget(init3Edit, 2, 4, 1, 1);

        modemTypeEdit = new QLineEdit(GroupBox5);
        modemTypeEdit->setObjectName(QString::fromUtf8("modemTypeEdit"));

        gridLayout7->addWidget(modemTypeEdit, 2, 1, 1, 2);

        TextLabel5 = new QLabel(GroupBox5);
        TextLabel5->setObjectName(QString::fromUtf8("TextLabel5"));
        TextLabel5->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5->setWordWrap(false);

        gridLayout7->addWidget(TextLabel5, 1, 3, 1, 1);

        TextLabel5_2_5_2 = new QLabel(GroupBox5);
        TextLabel5_2_5_2->setObjectName(QString::fromUtf8("TextLabel5_2_5_2"));
        TextLabel5_2_5_2->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5_2_5_2->setWordWrap(false);

        gridLayout7->addWidget(TextLabel5_2_5_2, 3, 5, 1, 1);

        TextLabel5_2_3 = new QLabel(GroupBox5);
        TextLabel5_2_3->setObjectName(QString::fromUtf8("TextLabel5_2_3"));
        TextLabel5_2_3->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5_2_3->setWordWrap(false);

        gridLayout7->addWidget(TextLabel5_2_3, 0, 5, 1, 1);

        TextLabel7 = new QLabel(GroupBox5);
        TextLabel7->setObjectName(QString::fromUtf8("TextLabel7"));
        TextLabel7->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel7->setWordWrap(false);

        gridLayout7->addWidget(TextLabel7, 3, 0, 1, 1);

        baudCombo = new QComboBox(GroupBox5);
        baudCombo->setObjectName(QString::fromUtf8("baudCombo"));

        gridLayout7->addWidget(baudCombo, 4, 1, 1, 1);

        init5Edit = new QLineEdit(GroupBox5);
        init5Edit->setObjectName(QString::fromUtf8("init5Edit"));

        gridLayout7->addWidget(init5Edit, 4, 4, 1, 1);

        TextLabel5_2_5 = new QLabel(GroupBox5);
        TextLabel5_2_5->setObjectName(QString::fromUtf8("TextLabel5_2_5"));
        TextLabel5_2_5->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5_2_5->setWordWrap(false);

        gridLayout7->addWidget(TextLabel5_2_5, 2, 5, 1, 1);

        TextLabel5_2_4 = new QLabel(GroupBox5);
        TextLabel5_2_4->setObjectName(QString::fromUtf8("TextLabel5_2_4"));
        TextLabel5_2_4->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5_2_4->setWordWrap(false);

        gridLayout7->addWidget(TextLabel5_2_4, 1, 5, 1, 1);

        init9Edit = new QLineEdit(GroupBox5);
        init9Edit->setObjectName(QString::fromUtf8("init9Edit"));

        gridLayout7->addWidget(init9Edit, 3, 6, 1, 1);

        TextLabel4 = new QLabel(GroupBox5);
        TextLabel4->setObjectName(QString::fromUtf8("TextLabel4"));
        TextLabel4->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel4->setWordWrap(false);

        gridLayout7->addWidget(TextLabel4, 0, 3, 1, 1);

        TextLabel3 = new QLabel(GroupBox5);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));
        TextLabel3->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel3->setWordWrap(false);

        gridLayout7->addWidget(TextLabel3, 2, 0, 1, 1);

        init7Edit = new QLineEdit(GroupBox5);
        init7Edit->setObjectName(QString::fromUtf8("init7Edit"));

        gridLayout7->addWidget(init7Edit, 1, 6, 1, 1);

        TextLabel5_21 = new QLabel(GroupBox5);
        TextLabel5_21->setObjectName(QString::fromUtf8("TextLabel5_21"));
        TextLabel5_21->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel5_21->setWordWrap(false);

        gridLayout7->addWidget(TextLabel5_21, 3, 3, 1, 1);

        init8Edit = new QLineEdit(GroupBox5);
        init8Edit->setObjectName(QString::fromUtf8("init8Edit"));

        gridLayout7->addWidget(init8Edit, 2, 6, 1, 1);

        init1Edit = new QLineEdit(GroupBox5);
        init1Edit->setObjectName(QString::fromUtf8("init1Edit"));
        init1Edit->setMinimumSize(QSize(120, 0));

        gridLayout7->addWidget(init1Edit, 0, 4, 1, 1);

        init6Edit = new QLineEdit(GroupBox5);
        init6Edit->setObjectName(QString::fromUtf8("init6Edit"));
        init6Edit->setMinimumSize(QSize(120, 0));

        gridLayout7->addWidget(init6Edit, 0, 6, 1, 1);

        Spacer9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout7->addItem(Spacer9, 4, 2, 1, 1);

        TextLabel1 = new QLabel(GroupBox5);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
        TextLabel1->setAlignment(Qt::AlignVCenter|Qt::AlignRight);
        TextLabel1->setWordWrap(false);

        gridLayout7->addWidget(TextLabel1, 0, 0, 1, 1);

        dialCommandEdit = new QLineEdit(GroupBox5);
        dialCommandEdit->setObjectName(QString::fromUtf8("dialCommandEdit"));

        gridLayout7->addWidget(dialCommandEdit, 3, 1, 1, 2);

        modemNameEdit = new QLineEdit(GroupBox5);
        modemNameEdit->setObjectName(QString::fromUtf8("modemNameEdit"));

        gridLayout7->addWidget(modemNameEdit, 1, 1, 1, 2);


        gridLayout6->addLayout(gridLayout7, 0, 0, 1, 1);


        gridLayout1->addWidget(GroupBox5, 0, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        helpBut = new QToolButton(ExpertDlg);
        helpBut->setObjectName(QString::fromUtf8("helpBut"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(helpBut->sizePolicy().hasHeightForWidth());
        helpBut->setSizePolicy(sizePolicy2);
        helpBut->setMinimumSize(QSize(24, 24));
        helpBut->setIcon(qt_get_icon(image0_ID));

        hboxLayout->addWidget(helpBut);

        Horizontal_Spacing2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Horizontal_Spacing2);

        okBut = new QPushButton(ExpertDlg);
        okBut->setObjectName(QString::fromUtf8("okBut"));
        okBut->setAutoDefault(true);
        okBut->setDefault(true);

        hboxLayout->addWidget(okBut);

        cancelBut = new QPushButton(ExpertDlg);
        cancelBut->setObjectName(QString::fromUtf8("cancelBut"));
        cancelBut->setAutoDefault(true);

        hboxLayout->addWidget(cancelBut);


        gridLayout1->addLayout(hboxLayout, 3, 0, 1, 2);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        QWidget::setTabOrder(modemEdit, modemNameEdit);
        QWidget::setTabOrder(modemNameEdit, modemTypeEdit);
        QWidget::setTabOrder(modemTypeEdit, dialCommandEdit);
        QWidget::setTabOrder(dialCommandEdit, baudCombo);
        QWidget::setTabOrder(baudCombo, init1Edit);
        QWidget::setTabOrder(init1Edit, init2Edit);
        QWidget::setTabOrder(init2Edit, init3Edit);
        QWidget::setTabOrder(init3Edit, init4Edit);
        QWidget::setTabOrder(init4Edit, init5Edit);
        QWidget::setTabOrder(init5Edit, init6Edit);
        QWidget::setTabOrder(init6Edit, init7Edit);
        QWidget::setTabOrder(init7Edit, init8Edit);
        QWidget::setTabOrder(init8Edit, init9Edit);
        QWidget::setTabOrder(init9Edit, compuserveBut);
        QWidget::setTabOrder(compuserveBut, tonlineBut);
        QWidget::setTabOrder(tonlineBut, isdnBut);
        QWidget::setTabOrder(isdnBut, stupidBut);
        QWidget::setTabOrder(stupidBut, dnsBut);
        QWidget::setTabOrder(dnsBut, newpppdBut);
        QWidget::setTabOrder(newpppdBut, reconnectBut);
        QWidget::setTabOrder(reconnectBut, areaCodeEdit);
        QWidget::setTabOrder(areaCodeEdit, forceAddressEdit);
        QWidget::setTabOrder(forceAddressEdit, helpBut);
        QWidget::setTabOrder(helpBut, okBut);
        QWidget::setTabOrder(okBut, cancelBut);

        retranslateUi(ExpertDlg);

        baudCombo->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ExpertDlg);
    } // setupUi

    void retranslateUi(QDialog *ExpertDlg)
    {
        ExpertDlg->setWindowTitle(QApplication::translate("ExpertDlg", "Expert configuration - QtWvDialer", 0, QApplication::UnicodeUTF8));
        GroupBox7->setTitle(QApplication::translate("ExpertDlg", "Misc", 0, QApplication::UnicodeUTF8));
        TextLabel9->setText(QApplication::translate("ExpertDlg", "Force address:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        areaCodeEdit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> inserts the area code between the dial prefix and the phone number. In general, you will probably wish to leave this out for dialing from home and put into a Area Code string any additional characters you may need to dial remotely. In most of North America, your Phone entry will be 7 digits (555-1234)  and  your  Area  Code  will be 4 digits (1-818). In local areas with multiple area codes, your Phone entry will be 10 digits (818-555-1234) and your Area Code will be 1 digit (1). In most of europe, your Phone entry will not include your city code, and you might want several different sections with  different  \"Area Code\" entries; one with your city code, another with your country code and  city code, or whatever else you need to do.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel8->setText(QApplication::translate("ExpertDlg", "Area code:", 0, QApplication::UnicodeUTF8));
        GroupBox6->setTitle(QApplication::translate("ExpertDlg", "Flags", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        GroupBox6->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "The checkboxes for the flags are tri-state buttons. The meaning of the three button states are:<ul><li><b>Off</b> Override Defaults with off</li><li><b>Default</b> Take default value or inherit from Defaults</li><li><b>On</b> Override Defaults with on</li></ul>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        tonlineBut->setText(QApplication::translate("ExpertDlg", "Tonline", 0, QApplication::UnicodeUTF8));
        newpppdBut->setText(QApplication::translate("ExpertDlg", "New PPPD", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        newpppdBut->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "If you have <b>pppd version 2.3.0</b> or newer,  you'll need to enable this, because new versions require a file <b>/etc/ppp/peers/wvdial</b>.  Enabling this option tells <b>pppd</b> to look for this file.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        compuserveBut->setText(QApplication::translate("ExpertDlg", "Compuserve", 0, QApplication::UnicodeUTF8));
        reconnectBut->setText(QApplication::translate("ExpertDlg", "Auto Reconnect", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        reconnectBut->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "If enabled, <b>wvdial</b> will attempt to automatically reestablish a connection if you are randomly disconnected by the other side. This option is \"on\" by default.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        stupidBut->setText(QApplication::translate("ExpertDlg", "Stupid mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        stupidBut->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "When wvdial is in Stupid Mode, it does not  attempt to interpret any prompts from the terminal server. It starts pppd immediately after the modem connects. Apparently there are ISP's that actually give you a login prompt, but work only if you start PPP, rather than logging in. Go figure. Stupid Mode is (naturally) disabled by default.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        dnsBut->setText(QApplication::translate("ExpertDlg", "Auto DNS", 0, QApplication::UnicodeUTF8));
        isdnBut->setText(QApplication::translate("ExpertDlg", "ISDN supported", 0, QApplication::UnicodeUTF8));
        GroupBox5->setTitle(QApplication::translate("ExpertDlg", "Modem settings", 0, QApplication::UnicodeUTF8));
        TextLabel5_2->setText(QApplication::translate("ExpertDlg", "Init3:", 0, QApplication::UnicodeUTF8));
        TextLabel6->setText(QApplication::translate("ExpertDlg", "Baud:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        init2Edit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> can use up to nine initialization strings to set up your modem. Before dialing, these strings are sent to the modem in numerical order. These are particularly useful when specifying multiple sections. The default is <b>\"ATZ\"</b> for Init1.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel2->setText(QApplication::translate("ExpertDlg", "Modem name:", 0, QApplication::UnicodeUTF8));
        modemEdit->setText(QApplication::translate("ExpertDlg", "/dev/modem", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        modemEdit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "The location of the device that <b>wvdial</b> should use as your modem. The default is <b>/dev/modem</b>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel5_2_2->setText(QApplication::translate("ExpertDlg", "Init5:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        init4Edit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> can use up to nine initialization strings to set up your modem. Before dialing, these strings are sent to the modem in numerical order. These are particularly useful when specifying multiple sections. The default is <b>\"ATZ\"</b> for Init1.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        init3Edit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> can use up to nine initialization strings to set up your modem. Before dialing, these strings are sent to the modem in numerical order. These are particularly useful when specifying multiple sections. The default is <b>\"ATZ\"</b> for Init1.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        modemTypeEdit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "A descriptive string for your modem", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel5->setText(QApplication::translate("ExpertDlg", "Init2:", 0, QApplication::UnicodeUTF8));
        TextLabel5_2_5_2->setText(QApplication::translate("ExpertDlg", "Init9:", 0, QApplication::UnicodeUTF8));
        TextLabel5_2_3->setText(QApplication::translate("ExpertDlg", "Init6:", 0, QApplication::UnicodeUTF8));
        TextLabel7->setText(QApplication::translate("ExpertDlg", "Dial command:", 0, QApplication::UnicodeUTF8));
        baudCombo->clear();
        baudCombo->insertItems(0, QStringList()
         << QApplication::translate("ExpertDlg", "Default", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExpertDlg", "460800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExpertDlg", "230400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExpertDlg", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExpertDlg", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExpertDlg", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExpertDlg", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExpertDlg", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ExpertDlg", "2400", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        baudCombo->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "The speed at which <b>wvdial</b> will communicate with your modem. The default is 57600 baud.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        init5Edit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> can use up to nine initialization strings to set up your modem. Before dialing, these strings are sent to the modem in numerical order. These are particularly useful when specifying multiple sections. The default is <b>\"ATZ\"</b> for Init1.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel5_2_5->setText(QApplication::translate("ExpertDlg", "Init8:", 0, QApplication::UnicodeUTF8));
        TextLabel5_2_4->setText(QApplication::translate("ExpertDlg", "Init7:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        init9Edit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> can use up to nine initialization strings to set up your modem. Before dialing, these strings are sent to the modem in numerical order. These are particularly useful when specifying multiple sections. The default is <b>\"ATZ\"</b> for Init1.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel4->setText(QApplication::translate("ExpertDlg", "Init1:", 0, QApplication::UnicodeUTF8));
        TextLabel3->setText(QApplication::translate("ExpertDlg", "Modem type:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        init7Edit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> can use up to nine initialization strings to set up your modem. Before dialing, these strings are sent to the modem in numerical order. These are particularly useful when specifying multiple sections. The default is <b>\"ATZ\"</b> for Init1.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel5_21->setText(QApplication::translate("ExpertDlg", "Init4:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        init8Edit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> can use up to nine initialization strings to set up your modem. Before dialing, these strings are sent to the modem in numerical order. These are particularly useful when specifying multiple sections. The default is <b>\"ATZ\"</b> for Init1.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        init1Edit->setText(QApplication::translate("ExpertDlg", "ATZ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        init1Edit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> can use up to nine initialization strings to set up your modem. Before dialing, these strings are sent to the modem in numerical order. These are particularly useful when specifying multiple sections. The default is <b>\"ATZ\"</b> for Init1.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        init6Edit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> can use up to nine initialization strings to set up your modem. Before dialing, these strings are sent to the modem in numerical order. These are particularly useful when specifying multiple sections. The default is <b>\"ATZ\"</b> for Init1.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        TextLabel1->setText(QApplication::translate("ExpertDlg", "Modem:", 0, QApplication::UnicodeUTF8));
        dialCommandEdit->setText(QApplication::translate("ExpertDlg", "ATDT", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        dialCommandEdit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "<b>wvdial</b> will use this string to tell the modem to dial. The default is <b>\"ATDT\"</b>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        modemNameEdit->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "The name of your modem. Let's see what <b>wvdialconf</b> has found ...", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        helpBut->setText(QString());
        okBut->setText(QApplication::translate("ExpertDlg", "&OK", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        okBut->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "Accept changes and close dialog.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        cancelBut->setText(QApplication::translate("ExpertDlg", "&Cancel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        cancelBut->setProperty("whatsThis", QVariant(QApplication::translate("ExpertDlg", "Discard changes and close dialog.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(ExpertDlg);
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x02,
    0x6d, 0x49, 0x44, 0x41, 0x54, 0x78, 0x9c, 0xb5, 0xd5, 0xcf, 0x6b, 0x14,
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
    0xcd, 0x00, 0x4f, 0x43, 0xb7, 0x71, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
    0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    switch (id) {
        case image0_ID:  { QImage img; img.loadFromData(image0_data, sizeof(image0_data), "PNG"); return QPixmap::fromImage(img); }
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class ExpertDlg: public Ui_ExpertDlg {};
} // namespace Ui

QT_END_NAMESPACE

class ExpertDlg : public QDialog, public Ui::ExpertDlg
{
    Q_OBJECT

public:
    ExpertDlg(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~ExpertDlg();

protected slots:
    virtual void languageChange();

};

#endif // EXPERTDLG_H
