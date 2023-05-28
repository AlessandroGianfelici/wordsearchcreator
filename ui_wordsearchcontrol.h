/********************************************************************************
** Form generated from reading UI file 'wordsearchcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDSEARCHCONTROL_H
#define UI_WORDSEARCHCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WordSearchControl
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label_3;
    QTextEdit *WordListBox;
    QLabel *wordcountLabel;
    QHBoxLayout *hboxLayout;
    QSpinBox *usewordsSpinBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *yspin;
    QSpinBox *xspin;
    QLabel *label;
    QCheckBox *arscheckbox;
    QPushButton *createbutton;
    QFrame *line;
    QHBoxLayout *hboxLayout1;
    QLabel *label_4;
    QLineEdit *titlebox;
    QCheckBox *sacheckbox;
    QCheckBox *swcheckbox;

    void setupUi(QWidget *WordSearchControl)
    {
        if (WordSearchControl->objectName().isEmpty())
            WordSearchControl->setObjectName(QString::fromUtf8("WordSearchControl"));
        WordSearchControl->resize(262, 499);
        WordSearchControl->setMinimumSize(QSize(100, 16));
        WordSearchControl->setMaximumSize(QSize(16777215, 16777215));
        vboxLayout = new QVBoxLayout(WordSearchControl);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        label_3 = new QLabel(WordSearchControl);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        vboxLayout->addWidget(label_3);

        WordListBox = new QTextEdit(WordSearchControl);
        WordListBox->setObjectName(QString::fromUtf8("WordListBox"));
        WordListBox->setLineWrapMode(QTextEdit::NoWrap);
        WordListBox->setAcceptRichText(false);

        vboxLayout->addWidget(WordListBox);

        wordcountLabel = new QLabel(WordSearchControl);
        wordcountLabel->setObjectName(QString::fromUtf8("wordcountLabel"));

        vboxLayout->addWidget(wordcountLabel);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        usewordsSpinBox = new QSpinBox(WordSearchControl);
        usewordsSpinBox->setObjectName(QString::fromUtf8("usewordsSpinBox"));
        usewordsSpinBox->setMinimum(0);
        usewordsSpinBox->setValue(0);

        hboxLayout->addWidget(usewordsSpinBox);


        vboxLayout->addLayout(hboxLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(WordSearchControl);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        yspin = new QSpinBox(WordSearchControl);
        yspin->setObjectName(QString::fromUtf8("yspin"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(yspin->sizePolicy().hasHeightForWidth());
        yspin->setSizePolicy(sizePolicy);
        yspin->setMinimum(1);
        yspin->setValue(5);

        gridLayout->addWidget(yspin, 0, 1, 1, 1);

        xspin = new QSpinBox(WordSearchControl);
        xspin->setObjectName(QString::fromUtf8("xspin"));
        sizePolicy.setHeightForWidth(xspin->sizePolicy().hasHeightForWidth());
        xspin->setSizePolicy(sizePolicy);
        xspin->setMinimum(1);
        xspin->setValue(5);

        gridLayout->addWidget(xspin, 1, 1, 1, 1);

        label = new QLabel(WordSearchControl);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        arscheckbox = new QCheckBox(WordSearchControl);
        arscheckbox->setObjectName(QString::fromUtf8("arscheckbox"));

        vboxLayout->addWidget(arscheckbox);

        createbutton = new QPushButton(WordSearchControl);
        createbutton->setObjectName(QString::fromUtf8("createbutton"));

        vboxLayout->addWidget(createbutton);

        line = new QFrame(WordSearchControl);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(WordSearchControl);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout1->addWidget(label_4);

        titlebox = new QLineEdit(WordSearchControl);
        titlebox->setObjectName(QString::fromUtf8("titlebox"));

        hboxLayout1->addWidget(titlebox);


        vboxLayout->addLayout(hboxLayout1);

        sacheckbox = new QCheckBox(WordSearchControl);
        sacheckbox->setObjectName(QString::fromUtf8("sacheckbox"));

        vboxLayout->addWidget(sacheckbox);

        swcheckbox = new QCheckBox(WordSearchControl);
        swcheckbox->setObjectName(QString::fromUtf8("swcheckbox"));

        vboxLayout->addWidget(swcheckbox);


        retranslateUi(WordSearchControl);

        QMetaObject::connectSlotsByName(WordSearchControl);
    } // setupUi

    void retranslateUi(QWidget *WordSearchControl)
    {
        WordSearchControl->setWindowTitle(QCoreApplication::translate("WordSearchControl", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("WordSearchControl", "Word list:", nullptr));
        wordcountLabel->setText(QCoreApplication::translate("WordSearchControl", "0 Words", nullptr));
        usewordsSpinBox->setSpecialValueText(QCoreApplication::translate("WordSearchControl", "Use all words", nullptr));
        usewordsSpinBox->setSuffix(QCoreApplication::translate("WordSearchControl", " words", " "));
        usewordsSpinBox->setPrefix(QCoreApplication::translate("WordSearchControl", "Use ", nullptr));
        label_2->setText(QCoreApplication::translate("WordSearchControl", "Width:", nullptr));
        label->setText(QCoreApplication::translate("WordSearchControl", "Height:", nullptr));
        arscheckbox->setText(QCoreApplication::translate("WordSearchControl", "Auto Enlarge", nullptr));
        createbutton->setText(QCoreApplication::translate("WordSearchControl", "Create/Shuffle", nullptr));
        label_4->setText(QCoreApplication::translate("WordSearchControl", "Title:", nullptr));
        sacheckbox->setText(QCoreApplication::translate("WordSearchControl", "Show Answers", nullptr));
        swcheckbox->setText(QCoreApplication::translate("WordSearchControl", "Show Words", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WordSearchControl: public Ui_WordSearchControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDSEARCHCONTROL_H
