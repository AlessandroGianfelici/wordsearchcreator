/********************************************************************************
** Form generated from reading UI file 'listcreator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTCREATOR_H
#define UI_LISTCREATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_listcreator
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *openButton;
    QPushButton *pushButton_4;
    QSpacerItem *spacerItem;
    QPushButton *helpButton;
    QTextEdit *sourceTextEdit;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QSpinBox *maxWords;
    QLabel *label_2;
    QSpinBox *minSize;
    QLabel *label_3;
    QSpinBox *maxSize;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem2;
    QPushButton *genlistButton;
    QSpacerItem *spacerItem3;
    QTextEdit *listTextEdit;
    QLabel *label_4;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem4;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *listcreator)
    {
        if (listcreator->objectName().isEmpty())
            listcreator->setObjectName(QString::fromUtf8("listcreator"));
        listcreator->resize(544, 508);
        vboxLayout = new QVBoxLayout(listcreator);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        openButton = new QPushButton(listcreator);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        openButton->setIcon(icon);

        hboxLayout->addWidget(openButton);

        pushButton_4 = new QPushButton(listcreator);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);

        hboxLayout->addWidget(pushButton_4);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        helpButton = new QPushButton(listcreator);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/contents.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon2);

        hboxLayout->addWidget(helpButton);


        vboxLayout->addLayout(hboxLayout);

        sourceTextEdit = new QTextEdit(listcreator);
        sourceTextEdit->setObjectName(QString::fromUtf8("sourceTextEdit"));

        vboxLayout->addWidget(sourceTextEdit);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label = new QLabel(listcreator);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout1->addWidget(label);

        maxWords = new QSpinBox(listcreator);
        maxWords->setObjectName(QString::fromUtf8("maxWords"));

        hboxLayout1->addWidget(maxWords);

        label_2 = new QLabel(listcreator);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        minSize = new QSpinBox(listcreator);
        minSize->setObjectName(QString::fromUtf8("minSize"));
        minSize->setMinimum(1);
        minSize->setValue(2);

        hboxLayout1->addWidget(minSize);

        label_3 = new QLabel(listcreator);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        maxSize = new QSpinBox(listcreator);
        maxSize->setObjectName(QString::fromUtf8("maxSize"));

        hboxLayout1->addWidget(maxSize);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        genlistButton = new QPushButton(listcreator);
        genlistButton->setObjectName(QString::fromUtf8("genlistButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/build.png"), QSize(), QIcon::Normal, QIcon::Off);
        genlistButton->setIcon(icon3);

        hboxLayout2->addWidget(genlistButton);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);


        vboxLayout->addLayout(hboxLayout2);

        listTextEdit = new QTextEdit(listcreator);
        listTextEdit->setObjectName(QString::fromUtf8("listTextEdit"));
        listTextEdit->setAcceptRichText(false);

        vboxLayout->addWidget(listTextEdit);

        label_4 = new QLabel(listcreator);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextFormat(Qt::AutoText);
        label_4->setScaledContents(false);
        label_4->setWordWrap(true);

        vboxLayout->addWidget(label_4);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        spacerItem4 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);

        okButton = new QPushButton(listcreator);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout3->addWidget(okButton);

        cancelButton = new QPushButton(listcreator);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout3->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout3);

#if QT_CONFIG(shortcut)
        label->setBuddy(maxWords);
        label_2->setBuddy(minSize);
        label_3->setBuddy(maxSize);
#endif // QT_CONFIG(shortcut)

        retranslateUi(listcreator);
        QObject::connect(pushButton_4, SIGNAL(clicked()), sourceTextEdit, SLOT(paste()));
        QObject::connect(cancelButton, SIGNAL(clicked()), listcreator, SLOT(reject()));

        QMetaObject::connectSlotsByName(listcreator);
    } // setupUi

    void retranslateUi(QDialog *listcreator)
    {
        listcreator->setWindowTitle(QCoreApplication::translate("listcreator", "Word List Creator - Word Search Creator", nullptr));
        openButton->setText(QCoreApplication::translate("listcreator", "Open File...", nullptr));
        pushButton_4->setText(QCoreApplication::translate("listcreator", "Paste", nullptr));
        helpButton->setText(QCoreApplication::translate("listcreator", "Help", nullptr));
        label->setText(QCoreApplication::translate("listcreator", "Max &no. of words:", nullptr));
        maxWords->setSpecialValueText(QCoreApplication::translate("listcreator", " No Limit", nullptr));
        label_2->setText(QCoreApplication::translate("listcreator", "Min size:", nullptr));
        label_3->setText(QCoreApplication::translate("listcreator", "Max size:", nullptr));
        maxSize->setSpecialValueText(QCoreApplication::translate("listcreator", " No Limit", nullptr));
        genlistButton->setText(QCoreApplication::translate("listcreator", "Generate List", nullptr));
        label_4->setText(QCoreApplication::translate("listcreator", "Open a file or paste some text into the top box then press 'Generate List'.", nullptr));
        okButton->setText(QCoreApplication::translate("listcreator", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("listcreator", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listcreator: public Ui_listcreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTCREATOR_H
