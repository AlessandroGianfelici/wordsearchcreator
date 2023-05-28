/********************************************************************************
** Form generated from reading UI file 'appearance.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCE_H
#define UI_APPEARANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_appearance
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QPushButton *wsfontButton;
    QPushButton *wlcolorButton;
    QPushButton *titlecolorButton;
    QLabel *label_5;
    QPushButton *wlfontButton;
    QLabel *titlefontLabel;
    QPushButton *titlefontButton;
    QLabel *wsfontLabel;
    QLabel *wlfontLabel;
    QPushButton *wscolorButton;
    QCheckBox *showGridCheckBox;
    QFrame *frame_2;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_9;
    QSpacerItem *spacerItem;
    QPushButton *gridColorButton;
    QLabel *label_10;
    QDoubleSpinBox *gridlinewidthSpinBox;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *bgcolorButton;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *hlcolorButton;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *appearance)
    {
        if (appearance->objectName().isEmpty())
            appearance->setObjectName(QString::fromUtf8("appearance"));
        appearance->resize(445, 291);
        verticalLayout = new QVBoxLayout(appearance);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(appearance);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(appearance);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        wsfontButton = new QPushButton(appearance);
        wsfontButton->setObjectName(QString::fromUtf8("wsfontButton"));

        gridLayout->addWidget(wsfontButton, 1, 2, 1, 1);

        wlcolorButton = new QPushButton(appearance);
        wlcolorButton->setObjectName(QString::fromUtf8("wlcolorButton"));

        gridLayout->addWidget(wlcolorButton, 2, 3, 1, 1);

        titlecolorButton = new QPushButton(appearance);
        titlecolorButton->setObjectName(QString::fromUtf8("titlecolorButton"));

        gridLayout->addWidget(titlecolorButton, 0, 3, 1, 1);

        label_5 = new QLabel(appearance);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        wlfontButton = new QPushButton(appearance);
        wlfontButton->setObjectName(QString::fromUtf8("wlfontButton"));

        gridLayout->addWidget(wlfontButton, 2, 2, 1, 1);

        titlefontLabel = new QLabel(appearance);
        titlefontLabel->setObjectName(QString::fromUtf8("titlefontLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titlefontLabel->sizePolicy().hasHeightForWidth());
        titlefontLabel->setSizePolicy(sizePolicy);
        titlefontLabel->setMaximumSize(QSize(16777215, 200));
        titlefontLabel->setFrameShape(QFrame::Box);
        titlefontLabel->setLineWidth(1);
        titlefontLabel->setMargin(0);

        gridLayout->addWidget(titlefontLabel, 0, 1, 1, 1);

        titlefontButton = new QPushButton(appearance);
        titlefontButton->setObjectName(QString::fromUtf8("titlefontButton"));

        gridLayout->addWidget(titlefontButton, 0, 2, 1, 1);

        wsfontLabel = new QLabel(appearance);
        wsfontLabel->setObjectName(QString::fromUtf8("wsfontLabel"));
        wsfontLabel->setMaximumSize(QSize(16777215, 200));
        wsfontLabel->setFrameShape(QFrame::Box);

        gridLayout->addWidget(wsfontLabel, 1, 1, 1, 1);

        wlfontLabel = new QLabel(appearance);
        wlfontLabel->setObjectName(QString::fromUtf8("wlfontLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wlfontLabel->sizePolicy().hasHeightForWidth());
        wlfontLabel->setSizePolicy(sizePolicy1);
        wlfontLabel->setMaximumSize(QSize(16777215, 200));
        wlfontLabel->setFrameShape(QFrame::Box);
        wlfontLabel->setFrameShadow(QFrame::Plain);
        wlfontLabel->setMidLineWidth(0);

        gridLayout->addWidget(wlfontLabel, 2, 1, 1, 1);

        wscolorButton = new QPushButton(appearance);
        wscolorButton->setObjectName(QString::fromUtf8("wscolorButton"));

        gridLayout->addWidget(wscolorButton, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        showGridCheckBox = new QCheckBox(appearance);
        showGridCheckBox->setObjectName(QString::fromUtf8("showGridCheckBox"));
        showGridCheckBox->setChecked(true);

        verticalLayout->addWidget(showGridCheckBox);

        frame_2 = new QFrame(appearance);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(0);
        vboxLayout = new QVBoxLayout(frame_2);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        hboxLayout->addWidget(label_9);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        gridColorButton = new QPushButton(frame_2);
        gridColorButton->setObjectName(QString::fromUtf8("gridColorButton"));

        hboxLayout->addWidget(gridColorButton);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        hboxLayout->addWidget(label_10);

        gridlinewidthSpinBox = new QDoubleSpinBox(frame_2);
        gridlinewidthSpinBox->setObjectName(QString::fromUtf8("gridlinewidthSpinBox"));
        gridlinewidthSpinBox->setSingleStep(0.010000000000000);
        gridlinewidthSpinBox->setValue(0.010000000000000);

        hboxLayout->addWidget(gridlinewidthSpinBox);


        vboxLayout->addLayout(hboxLayout);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(appearance);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        bgcolorButton = new QPushButton(frame);
        bgcolorButton->setObjectName(QString::fromUtf8("bgcolorButton"));

        horizontalLayout_2->addWidget(bgcolorButton);


        verticalLayout->addWidget(frame);

        frame_3 = new QFrame(appearance);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        hlcolorButton = new QPushButton(frame_3);
        hlcolorButton->setObjectName(QString::fromUtf8("hlcolorButton"));

        horizontalLayout_3->addWidget(hlcolorButton);


        verticalLayout->addWidget(frame_3);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(appearance);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(appearance);
        QObject::connect(showGridCheckBox, SIGNAL(toggled(bool)), frame_2, SLOT(setEnabled(bool)));
        QObject::connect(buttonBox, SIGNAL(rejected()), appearance, SLOT(reject()));

        QMetaObject::connectSlotsByName(appearance);
    } // setupUi

    void retranslateUi(QDialog *appearance)
    {
        appearance->setWindowTitle(QCoreApplication::translate("appearance", "Fonts and Colours - Word Search Creator", nullptr));
        label_3->setText(QCoreApplication::translate("appearance", "Wordsearch Font:", nullptr));
        label->setText(QCoreApplication::translate("appearance", "Title Font:", nullptr));
        wsfontButton->setText(QCoreApplication::translate("appearance", "Font...", nullptr));
        wlcolorButton->setText(QCoreApplication::translate("appearance", "Colour...", nullptr));
        titlecolorButton->setText(QCoreApplication::translate("appearance", "Colour...", nullptr));
        label_5->setText(QCoreApplication::translate("appearance", "Wordlist Font:", nullptr));
        wlfontButton->setText(QCoreApplication::translate("appearance", "Font...", nullptr));
        titlefontLabel->setText(QCoreApplication::translate("appearance", "TextLabel", nullptr));
        titlefontButton->setText(QCoreApplication::translate("appearance", "Font...", nullptr));
        wsfontLabel->setText(QCoreApplication::translate("appearance", "TextLabel", nullptr));
        wlfontLabel->setText(QCoreApplication::translate("appearance", "TextLabel", nullptr));
        wscolorButton->setText(QCoreApplication::translate("appearance", "Colour...", nullptr));
        showGridCheckBox->setText(QCoreApplication::translate("appearance", "Show Grid", nullptr));
        label_9->setText(QCoreApplication::translate("appearance", "Grid style:", nullptr));
        gridColorButton->setText(QCoreApplication::translate("appearance", "Set Colour...", nullptr));
        label_10->setText(QCoreApplication::translate("appearance", "Width:", nullptr));
        gridlinewidthSpinBox->setSuffix(QCoreApplication::translate("appearance", " in", nullptr));
        label_2->setText(QCoreApplication::translate("appearance", "Background:", nullptr));
        bgcolorButton->setText(QCoreApplication::translate("appearance", "Colour...", nullptr));
        label_4->setText(QCoreApplication::translate("appearance", "Highlight:", nullptr));
        hlcolorButton->setText(QCoreApplication::translate("appearance", "Colour...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class appearance: public Ui_appearance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPEARANCE_H
