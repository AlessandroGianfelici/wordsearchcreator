/********************************************************************************
** Form generated from reading UI file 'alphabet.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALPHABET_H
#define UI_ALPHABET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_alphabet
{
public:
    QVBoxLayout *vboxLayout;
    QComboBox *Alphabetcbox;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QLineEdit *AlphabetBox;
    QPushButton *saveButton;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QPushButton *MakeUpper;
    QPushButton *MakeLower;
    QSpacerItem *spacerItem;
    QPushButton *GetFromWeb;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *alphabet)
    {
        if (alphabet->objectName().isEmpty())
            alphabet->setObjectName(QString::fromUtf8("alphabet"));
        alphabet->setWindowModality(Qt::NonModal);
        alphabet->resize(451, 166);
        alphabet->setModal(true);
        vboxLayout = new QVBoxLayout(alphabet);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        Alphabetcbox = new QComboBox(alphabet);
        Alphabetcbox->setObjectName(QString::fromUtf8("Alphabetcbox"));

        vboxLayout->addWidget(Alphabetcbox);

        label = new QLabel(alphabet);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        AlphabetBox = new QLineEdit(alphabet);
        AlphabetBox->setObjectName(QString::fromUtf8("AlphabetBox"));

        hboxLayout->addWidget(AlphabetBox);

        saveButton = new QPushButton(alphabet);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        hboxLayout->addWidget(saveButton);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(alphabet);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        MakeUpper = new QPushButton(alphabet);
        MakeUpper->setObjectName(QString::fromUtf8("MakeUpper"));

        hboxLayout1->addWidget(MakeUpper);

        MakeLower = new QPushButton(alphabet);
        MakeLower->setObjectName(QString::fromUtf8("MakeLower"));

        hboxLayout1->addWidget(MakeLower);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        GetFromWeb = new QPushButton(alphabet);
        GetFromWeb->setObjectName(QString::fromUtf8("GetFromWeb"));

        hboxLayout1->addWidget(GetFromWeb);


        vboxLayout->addLayout(hboxLayout1);

        buttonBox = new QDialogButtonBox(alphabet);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(alphabet);
        QObject::connect(buttonBox, SIGNAL(rejected()), alphabet, SLOT(reject()));

        QMetaObject::connectSlotsByName(alphabet);
    } // setupUi

    void retranslateUi(QDialog *alphabet)
    {
        alphabet->setWindowTitle(QCoreApplication::translate("alphabet", "Alphabet - Word Search Creator", nullptr));
        label->setText(QCoreApplication::translate("alphabet", "Letters used to fill wordsearch:", nullptr));
        saveButton->setText(QCoreApplication::translate("alphabet", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("alphabet", "Make: ", nullptr));
        MakeUpper->setText(QCoreApplication::translate("alphabet", "Uppercase", nullptr));
        MakeLower->setText(QCoreApplication::translate("alphabet", "Lowercase", nullptr));
        GetFromWeb->setText(QCoreApplication::translate("alphabet", "Get Alphabets", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alphabet: public Ui_alphabet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALPHABET_H
