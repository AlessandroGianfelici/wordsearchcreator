/********************************************************************************
** Form generated from reading UI file 'pagelayout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGELAYOUT_H
#define UI_PAGELAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LayoutDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label_7;
    QRadioButton *landscapeRB;
    QRadioButton *portraitRB;
    QDoubleSpinBox *widthSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *heightSpinBox;
    QLabel *label_2;
    QComboBox *pagesizecombo;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QDoubleSpinBox *rightSpinBox;
    QDoubleSpinBox *leftSpinBox;
    QDoubleSpinBox *bottomSpinBox;
    QDoubleSpinBox *topSpinBox;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_4;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem4;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *LayoutDialog)
    {
        if (LayoutDialog->objectName().isEmpty())
            LayoutDialog->setObjectName(QString::fromUtf8("LayoutDialog"));
        LayoutDialog->setWindowModality(Qt::ApplicationModal);
        LayoutDialog->resize(397, 344);
        gridLayout = new QGridLayout(LayoutDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(LayoutDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 3, 0, 1, 1);

        landscapeRB = new QRadioButton(groupBox);
        landscapeRB->setObjectName(QString::fromUtf8("landscapeRB"));

        gridLayout1->addWidget(landscapeRB, 4, 1, 1, 1);

        portraitRB = new QRadioButton(groupBox);
        portraitRB->setObjectName(QString::fromUtf8("portraitRB"));
        portraitRB->setChecked(true);

        gridLayout1->addWidget(portraitRB, 3, 1, 1, 1);

        widthSpinBox = new QDoubleSpinBox(groupBox);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));

        gridLayout1->addWidget(widthSpinBox, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        heightSpinBox = new QDoubleSpinBox(groupBox);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));

        gridLayout1->addWidget(heightSpinBox, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        pagesizecombo = new QComboBox(groupBox);
        pagesizecombo->setObjectName(QString::fromUtf8("pagesizecombo"));

        gridLayout1->addWidget(pagesizecombo, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(LayoutDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout2 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 0, 5, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 1, 5, 1, 1);

        rightSpinBox = new QDoubleSpinBox(groupBox_2);
        rightSpinBox->setObjectName(QString::fromUtf8("rightSpinBox"));
        rightSpinBox->setSingleStep(0.100000000000000);
        rightSpinBox->setValue(0.900000000000000);

        gridLayout2->addWidget(rightSpinBox, 1, 4, 1, 1);

        leftSpinBox = new QDoubleSpinBox(groupBox_2);
        leftSpinBox->setObjectName(QString::fromUtf8("leftSpinBox"));
        leftSpinBox->setSingleStep(0.100000000000000);
        leftSpinBox->setValue(0.900000000000000);

        gridLayout2->addWidget(leftSpinBox, 0, 4, 1, 1);

        bottomSpinBox = new QDoubleSpinBox(groupBox_2);
        bottomSpinBox->setObjectName(QString::fromUtf8("bottomSpinBox"));
        bottomSpinBox->setSingleStep(0.100000000000000);
        bottomSpinBox->setValue(0.900000000000000);

        gridLayout2->addWidget(bottomSpinBox, 1, 1, 1, 1);

        topSpinBox = new QDoubleSpinBox(groupBox_2);
        topSpinBox->setObjectName(QString::fromUtf8("topSpinBox"));
        topSpinBox->setSingleStep(0.100000000000000);
        topSpinBox->setValue(0.900000000000000);

        gridLayout2->addWidget(topSpinBox, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout2->addWidget(label_5, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout2->addWidget(label_6, 1, 3, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout2->addWidget(label_4, 1, 0, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 0, 2, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem3, 1, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem4 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);

        okButton = new QPushButton(LayoutDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(LayoutDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        QWidget::setTabOrder(pagesizecombo, heightSpinBox);
        QWidget::setTabOrder(heightSpinBox, widthSpinBox);
        QWidget::setTabOrder(widthSpinBox, portraitRB);
        QWidget::setTabOrder(portraitRB, landscapeRB);
        QWidget::setTabOrder(landscapeRB, topSpinBox);
        QWidget::setTabOrder(topSpinBox, bottomSpinBox);
        QWidget::setTabOrder(bottomSpinBox, leftSpinBox);
        QWidget::setTabOrder(leftSpinBox, rightSpinBox);
        QWidget::setTabOrder(rightSpinBox, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(LayoutDialog);
        QObject::connect(okButton, SIGNAL(clicked()), LayoutDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), LayoutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LayoutDialog);
    } // setupUi

    void retranslateUi(QDialog *LayoutDialog)
    {
        LayoutDialog->setWindowTitle(QCoreApplication::translate("LayoutDialog", "Page Layout", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LayoutDialog", "Page Size", nullptr));
        label_7->setText(QCoreApplication::translate("LayoutDialog", "Orentation", nullptr));
        landscapeRB->setText(QCoreApplication::translate("LayoutDialog", "Landscape", nullptr));
        portraitRB->setText(QCoreApplication::translate("LayoutDialog", "Protrait", nullptr));
        widthSpinBox->setSuffix(QCoreApplication::translate("LayoutDialog", " in", nullptr));
        label_3->setText(QCoreApplication::translate("LayoutDialog", "Width", nullptr));
        heightSpinBox->setSuffix(QCoreApplication::translate("LayoutDialog", " in", nullptr));
        label_2->setText(QCoreApplication::translate("LayoutDialog", "Height", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LayoutDialog", "Margins", nullptr));
        rightSpinBox->setSuffix(QCoreApplication::translate("LayoutDialog", " in", nullptr));
        leftSpinBox->setSuffix(QCoreApplication::translate("LayoutDialog", " in", nullptr));
        bottomSpinBox->setSuffix(QCoreApplication::translate("LayoutDialog", " in", nullptr));
        topSpinBox->setSuffix(QCoreApplication::translate("LayoutDialog", " in", nullptr));
        label_5->setText(QCoreApplication::translate("LayoutDialog", "Left", nullptr));
        label_6->setText(QCoreApplication::translate("LayoutDialog", "Right", nullptr));
        label->setText(QCoreApplication::translate("LayoutDialog", "Top", nullptr));
        label_4->setText(QCoreApplication::translate("LayoutDialog", "Bottom", nullptr));
        okButton->setText(QCoreApplication::translate("LayoutDialog", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("LayoutDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutDialog: public Ui_LayoutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGELAYOUT_H
