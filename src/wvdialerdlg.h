#ifndef WVDIALERDLG_H
#define WVDIALERDLG_H

#include <qvariant.h>


#include <Qt3Support/Q3ListBox>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include "pppstatswid.h"

QT_BEGIN_NAMESPACE

class Ui_WVDialerDlg
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QComboBox *providerCombo;
    QPushButton *connectBut;
    QSpacerItem *Spacer1;
    QHBoxLayout *hboxLayout1;
    QToolButton *configBut;
    QToolButton *helpBut;
    QLabel *PixmapLabel1;
    QToolButton *quitBut;
    Q3ListBox *output;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout3;
    QLabel *rxLabel;
    QLabel *rxPS;
    QHBoxLayout *hboxLayout4;
    QLabel *txLabel;
    QLabel *txPS;
    QHBoxLayout *hboxLayout5;
    QLabel *ipLabel;
    QLabel *upLabel;
    PPPStatsWid *statsWid;

    void setupUi(QDialog *wvdialerdlg)
    {
        if (wvdialerdlg->objectName().isEmpty())
            wvdialerdlg->setObjectName(QString::fromUtf8("wvdialerdlg"));
        wvdialerdlg->resize(459, 175);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(3));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wvdialerdlg->sizePolicy().hasHeightForWidth());
        wvdialerdlg->setSizePolicy(sizePolicy);
        wvdialerdlg->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(wvdialerdlg);
        gridLayout->setSpacing(2);
        gridLayout->setMargin(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(5);
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        providerCombo = new QComboBox(wvdialerdlg);
        providerCombo->setObjectName(QString::fromUtf8("providerCombo"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(providerCombo->sizePolicy().hasHeightForWidth());
        providerCombo->setSizePolicy(sizePolicy1);
        providerCombo->setMinimumSize(QSize(110, 0));

        hboxLayout->addWidget(providerCombo);

        connectBut = new QPushButton(wvdialerdlg);
        connectBut->setObjectName(QString::fromUtf8("connectBut"));
        sizePolicy1.setHeightForWidth(connectBut->sizePolicy().hasHeightForWidth());
        connectBut->setSizePolicy(sizePolicy1);
        connectBut->setAutoDefault(false);

        hboxLayout->addWidget(connectBut);

        Spacer1 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout->addItem(Spacer1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setMargin(0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        configBut = new QToolButton(wvdialerdlg);
        configBut->setObjectName(QString::fromUtf8("configBut"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(configBut->sizePolicy().hasHeightForWidth());
        configBut->setSizePolicy(sizePolicy2);
        configBut->setMinimumSize(QSize(24, 24));

        hboxLayout1->addWidget(configBut);

        helpBut = new QToolButton(wvdialerdlg);
        helpBut->setObjectName(QString::fromUtf8("helpBut"));
        sizePolicy2.setHeightForWidth(helpBut->sizePolicy().hasHeightForWidth());
        helpBut->setSizePolicy(sizePolicy2);
        helpBut->setMinimumSize(QSize(24, 24));
        const QIcon icon = qt_get_icon(image0_ID);
        helpBut->setIcon(icon);

        hboxLayout1->addWidget(helpBut);

        PixmapLabel1 = new QLabel(wvdialerdlg);
        PixmapLabel1->setObjectName(QString::fromUtf8("PixmapLabel1"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(1));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(PixmapLabel1->sizePolicy().hasHeightForWidth());
        PixmapLabel1->setSizePolicy(sizePolicy3);
        PixmapLabel1->setMinimumSize(QSize(15, 0));
        PixmapLabel1->setMaximumSize(QSize(15, 32767));
        PixmapLabel1->setScaledContents(true);
        PixmapLabel1->setWordWrap(false);

        hboxLayout1->addWidget(PixmapLabel1);

        quitBut = new QToolButton(wvdialerdlg);
        quitBut->setObjectName(QString::fromUtf8("quitBut"));
        sizePolicy2.setHeightForWidth(quitBut->sizePolicy().hasHeightForWidth());
        quitBut->setSizePolicy(sizePolicy2);
        quitBut->setMinimumSize(QSize(24, 24));

        hboxLayout1->addWidget(quitBut);


        hboxLayout->addLayout(hboxLayout1);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        output = new Q3ListBox(wvdialerdlg);
        output->setObjectName(QString::fromUtf8("output"));
        output->setMinimumSize(QSize(0, 60));
        output->setFrameShape(QFrame::StyledPanel);
        output->setLineWidth(2);
        output->setSelectionMode(Q3ListBox::NoSelection);

        gridLayout->addWidget(output, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(0);
        hboxLayout2->setMargin(0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(0);
        vboxLayout->setMargin(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(0);
        hboxLayout3->setMargin(0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        rxLabel = new QLabel(wvdialerdlg);
        rxLabel->setObjectName(QString::fromUtf8("rxLabel"));
        sizePolicy3.setHeightForWidth(rxLabel->sizePolicy().hasHeightForWidth());
        rxLabel->setSizePolicy(sizePolicy3);
        rxLabel->setMinimumSize(QSize(90, 0));
        QFont font;
        font.setPointSize(10);
        rxLabel->setFont(font);
        rxLabel->setFrameShape(QFrame::Panel);
        rxLabel->setFrameShadow(QFrame::Sunken);
        rxLabel->setTextFormat(Qt::PlainText);
        rxLabel->setIndent(2);
        rxLabel->setWordWrap(false);

        hboxLayout3->addWidget(rxLabel);

        rxPS = new QLabel(wvdialerdlg);
        rxPS->setObjectName(QString::fromUtf8("rxPS"));
        sizePolicy3.setHeightForWidth(rxPS->sizePolicy().hasHeightForWidth());
        rxPS->setSizePolicy(sizePolicy3);
        rxPS->setMinimumSize(QSize(70, 0));
        rxPS->setMaximumSize(QSize(70, 32767));
        rxPS->setFont(font);
        rxPS->setFrameShape(QFrame::Panel);
        rxPS->setFrameShadow(QFrame::Sunken);
        rxPS->setTextFormat(Qt::PlainText);
        rxPS->setIndent(2);
        rxPS->setWordWrap(false);

        hboxLayout3->addWidget(rxPS);


        vboxLayout->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(0);
        hboxLayout4->setMargin(0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        txLabel = new QLabel(wvdialerdlg);
        txLabel->setObjectName(QString::fromUtf8("txLabel"));
        sizePolicy3.setHeightForWidth(txLabel->sizePolicy().hasHeightForWidth());
        txLabel->setSizePolicy(sizePolicy3);
        txLabel->setMinimumSize(QSize(90, 0));
        txLabel->setFont(font);
        txLabel->setFrameShape(QFrame::Panel);
        txLabel->setFrameShadow(QFrame::Sunken);
        txLabel->setTextFormat(Qt::PlainText);
        txLabel->setIndent(2);
        txLabel->setWordWrap(false);

        hboxLayout4->addWidget(txLabel);

        txPS = new QLabel(wvdialerdlg);
        txPS->setObjectName(QString::fromUtf8("txPS"));
        sizePolicy3.setHeightForWidth(txPS->sizePolicy().hasHeightForWidth());
        txPS->setSizePolicy(sizePolicy3);
        txPS->setMinimumSize(QSize(70, 0));
        txPS->setMaximumSize(QSize(70, 32767));
        txPS->setFont(font);
        txPS->setFrameShape(QFrame::Panel);
        txPS->setFrameShadow(QFrame::Sunken);
        txPS->setTextFormat(Qt::PlainText);
        txPS->setIndent(2);
        txPS->setWordWrap(false);

        hboxLayout4->addWidget(txPS);


        vboxLayout->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(0);
        hboxLayout5->setMargin(0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        ipLabel = new QLabel(wvdialerdlg);
        ipLabel->setObjectName(QString::fromUtf8("ipLabel"));
        sizePolicy3.setHeightForWidth(ipLabel->sizePolicy().hasHeightForWidth());
        ipLabel->setSizePolicy(sizePolicy3);
        ipLabel->setMinimumSize(QSize(90, 0));
        ipLabel->setFont(font);
        ipLabel->setFrameShape(QFrame::Panel);
        ipLabel->setFrameShadow(QFrame::Sunken);
        ipLabel->setTextFormat(Qt::PlainText);
        ipLabel->setAlignment(Qt::AlignVCenter|Qt::AlignLeft);
        ipLabel->setIndent(2);
        ipLabel->setWordWrap(false);

        hboxLayout5->addWidget(ipLabel);

        upLabel = new QLabel(wvdialerdlg);
        upLabel->setObjectName(QString::fromUtf8("upLabel"));
        sizePolicy3.setHeightForWidth(upLabel->sizePolicy().hasHeightForWidth());
        upLabel->setSizePolicy(sizePolicy3);
        upLabel->setMinimumSize(QSize(70, 0));
        upLabel->setMaximumSize(QSize(70, 32767));
        upLabel->setFont(font);
        upLabel->setFrameShape(QFrame::Panel);
        upLabel->setFrameShadow(QFrame::Sunken);
        upLabel->setTextFormat(Qt::PlainText);
        upLabel->setAlignment(Qt::AlignVCenter|Qt::AlignLeft);
        upLabel->setIndent(2);
        upLabel->setWordWrap(false);

        hboxLayout5->addWidget(upLabel);


        vboxLayout->addLayout(hboxLayout5);


        hboxLayout2->addLayout(vboxLayout);

        statsWid = new PPPStatsWid(wvdialerdlg);
        statsWid->setObjectName(QString::fromUtf8("statsWid"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(statsWid->sizePolicy().hasHeightForWidth());
        statsWid->setSizePolicy(sizePolicy4);
        statsWid->setMinimumSize(QSize(150, 0));

        hboxLayout2->addWidget(statsWid);


        gridLayout->addLayout(hboxLayout2, 2, 0, 1, 1);

        QWidget::setTabOrder(providerCombo, connectBut);
        QWidget::setTabOrder(connectBut, configBut);
        QWidget::setTabOrder(configBut, helpBut);
        QWidget::setTabOrder(helpBut, quitBut);
        QWidget::setTabOrder(quitBut, output);

        retranslateUi(wvdialerdlg);

        QMetaObject::connectSlotsByName(wvdialerdlg);
    } // setupUi

    void retranslateUi(QDialog *wvdialerdlg)
    {
        wvdialerdlg->setWindowTitle(QApplication::translate("WVDialerDlg", "QtWvDialer (c) 2000-2007 M. Toussaint", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        providerCombo->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Provider list", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        providerCombo->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "Select one of the preconfigured accounts here and the press <b>Connect</b>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        connectBut->setText(QApplication::translate("WVDialerDlg", "&Connect", 0, QApplication::UnicodeUTF8));
        connectBut->setShortcut(QApplication::translate("WVDialerDlg", "Alt+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        connectBut->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Connect / Disconnect ", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        connectBut->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "Clicking this button connects/disconnects your PPP connection.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        configBut->setText(QApplication::translate("WVDialerDlg", "&Config", 0, QApplication::UnicodeUTF8));
        configBut->setShortcut(QApplication::translate("WVDialerDlg", "Alt+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        configBut->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Configure QtWvDial", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        configBut->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "Here you can configure wvdial and the GUI of QtWvDial.<br>Clicking this button opens a configuration dialog with three pages:<ul><li><b>Modem:</b> Here you can configure the modem settings. This is done automatically by wvdialconf <i>(see man wvdialconf)</i>.</li><li><b>Account:</b> Here you can configure your accounts <i>(phone number, user name, etc.)</i>.</li><li><b>QtWvDial:</b> Here you can change some settings for the QtWvDial GUI.</li></ul>", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        helpBut->setText(QString());
#ifndef QT_NO_TOOLTIP
        helpBut->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Direct help", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
        quitBut->setText(QApplication::translate("WVDialerDlg", "&Quit", 0, QApplication::UnicodeUTF8));
        quitBut->setShortcut(QApplication::translate("WVDialerDlg", "Alt+Q", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        quitBut->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Quit program", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        quitBut->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "Here you can quit the program. The current connection is terminated before quitting the program.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        output->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "Here you'll find the output of <i>wvdial</i> and additional messages of <i>wvdialer</i>.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        rxLabel->setText(QApplication::translate("WVDialerDlg", "RX: 0 bytes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rxLabel->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Received bytes", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        rxLabel->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "This label shows you the total amount of <b>recieved</b> bytes during your current session.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        rxPS->setText(QApplication::translate("WVDialerDlg", "0.00 KB/s", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rxPS->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Receive throughput", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        rxPS->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "This label shows you the current receive throughput.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        txLabel->setText(QApplication::translate("WVDialerDlg", "TX: 0 bytes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txLabel->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Transmitted bytes", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        txLabel->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "This label shows you the total amount of <b>transmitted</b> bytes during your current session.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        txPS->setText(QApplication::translate("WVDialerDlg", "0.00 KB/s", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txPS->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Transmit throughput", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        txPS->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "This label shows you the current transmit throughput.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        ipLabel->setText(QApplication::translate("WVDialerDlg", "n/a", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ipLabel->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Remote IP address", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ipLabel->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "This label shows you your remote IP address.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        upLabel->setText(QApplication::translate("WVDialerDlg", "00:00", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        upLabel->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "Connection time", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        upLabel->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "This label shows you the total uptime of your current session. You may connect/disconnect and change account as many times as you want. The time will be accumulated.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        statsWid->setProperty("toolTip", QVariant(QApplication::translate("WVDialerDlg", "PPP throughput graph", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        statsWid->setProperty("whatsThis", QVariant(QApplication::translate("WVDialerDlg", "This graph shows you the ppp throughput of your connection in KB/s. The graph is updated every two seconds.<p>The two bars at the right show you the current throughput in a <i>vu meter</i> style<p>Green means received data<br>Red means outgoing data.", 0, QApplication::UnicodeUTF8)));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(wvdialerdlg);
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        image1_ID,
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
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0xc9, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xad, 0x55, 0xc9, 0x11, 0x83,
    0x30, 0x0c, 0x8c, 0x34, 0x14, 0x40, 0x13, 0x6e, 0x86, 0x2e, 0xd3, 0x84,
    0x2b, 0x60, 0xdc, 0x04, 0xbd, 0x40, 0x5e, 0x62, 0xb0, 0xb2, 0x3a, 0xec,
    0x64, 0x5f, 0x0c, 0x92, 0x76, 0x75, 0xd9, 0xa6, 0xd6, 0xda, 0xcb, 0xc3,
    0x71, 0x6e, 0x17, 0xfa, 0x5f, 0xb8, 0x92, 0x17, 0xb7, 0x8c, 0x90, 0x21,
    0x1f, 0x4b, 0x80, 0x67, 0x48, 0xb5, 0x3f, 0x8a, 0x61, 0xed, 0x34, 0x42,
    0xea, 0xc5, 0x2e, 0x96, 0x41, 0x60, 0x95, 0x8a, 0xfc, 0x8f, 0x73, 0xbb,
    0xc4, 0xff, 0xab, 0x15, 0x19, 0xd2, 0xc8, 0x76, 0x13, 0x23, 0x75, 0x2f,
    0xd0, 0x1b, 0x9c, 0xd8, 0x60, 0xc6, 0x19, 0xd2, 0x68, 0x2b, 0xe8, 0xbd,
    0xaf, 0x5d, 0xb6, 0x19, 0x52, 0xe4, 0xaf, 0x6d, 0x6e, 0x8f, 0xb3, 0xa4,
    0x08, 0xf0, 0x80, 0x44, 0x84, 0x19, 0xa4, 0x33, 0xd6, 0x48, 0x6d, 0x85,
    0x05, 0x2f, 0xdb, 0xa8, 0x12, 0xd6, 0xca, 0x7a, 0xea, 0xb3, 0xc2, 0x66,
    0xc6, 0xa8, 0x54, 0x6b, 0x6f, 0xb5, 0x40, 0xe1, 0x4a, 0x90, 0x18, 0xed,
    0xa8, 0x7c, 0x47, 0xbd, 0xed, 0x32, 0xf6, 0x4e, 0x50, 0xe1, 0x4a, 0xda,
    0x9e, 0x21, 0x9f, 0x1e, 0x9e, 0x05, 0x11, 0xa5, 0xe7, 0x0b, 0xf2, 0xcb,
    0xb5, 0xa9, 0xd1, 0x65, 0x9c, 0xed, 0xdf, 0x30, 0xb1, 0x90, 0x8f, 0x0a,
    0xa0, 0x19, 0xd0, 0x3f, 0x1f, 0xd3, 0xe7, 0x45, 0xff, 0x01, 0xfb, 0x6c,
    0x8d, 0x99, 0x4f, 0xda, 0x16, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
    0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

    switch (id) {
        case image0_ID:  { QImage img; img.loadFromData(image0_data, sizeof(image0_data), "PNG"); return QPixmap::fromImage(img); }
        case image1_ID:  { QImage img; img.loadFromData(image1_data, sizeof(image1_data), "PNG"); return QPixmap::fromImage(img); }
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class WVDialerDlg: public Ui_WVDialerDlg {};
} // namespace Ui

QT_END_NAMESPACE

class WVDialerDlg : public QDialog, public Ui::WVDialerDlg
{
    Q_OBJECT

public:
    WVDialerDlg(QWidget* parent = 0, const char* name = 0, bool modal = false, Qt::WindowFlags fl = 0);
    ~WVDialerDlg();

protected slots:
    virtual void languageChange();

};

#endif // WVDIALERDLG_H
