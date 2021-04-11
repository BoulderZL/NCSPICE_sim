/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *SearchGroup;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *SearchEdit;
    QGroupBox *ReplaceGroup;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *ReplaceEdit;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *AskBox;
    QCheckBox *CaseBox;
    QCheckBox *WordBox;
    QCheckBox *BackwardBox;
    QVBoxLayout *verticalLayout;
    QPushButton *ButtonSearch;
    QPushButton *CloseButt;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QString::fromUtf8("SearchDialog"));
        SearchDialog->resize(242, 274);
        horizontalLayout = new QHBoxLayout(SearchDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        SearchGroup = new QGroupBox(SearchDialog);
        SearchGroup->setObjectName(QString::fromUtf8("SearchGroup"));
        verticalLayout_4 = new QVBoxLayout(SearchGroup);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        SearchEdit = new QLineEdit(SearchGroup);
        SearchEdit->setObjectName(QString::fromUtf8("SearchEdit"));

        verticalLayout_4->addWidget(SearchEdit);


        verticalLayout_3->addWidget(SearchGroup);

        ReplaceGroup = new QGroupBox(SearchDialog);
        ReplaceGroup->setObjectName(QString::fromUtf8("ReplaceGroup"));
        horizontalLayout_2 = new QHBoxLayout(ReplaceGroup);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ReplaceEdit = new QLineEdit(ReplaceGroup);
        ReplaceEdit->setObjectName(QString::fromUtf8("ReplaceEdit"));

        horizontalLayout_2->addWidget(ReplaceEdit);


        verticalLayout_3->addWidget(ReplaceGroup);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        AskBox = new QCheckBox(SearchDialog);
        AskBox->setObjectName(QString::fromUtf8("AskBox"));

        verticalLayout_2->addWidget(AskBox);

        CaseBox = new QCheckBox(SearchDialog);
        CaseBox->setObjectName(QString::fromUtf8("CaseBox"));

        verticalLayout_2->addWidget(CaseBox);

        WordBox = new QCheckBox(SearchDialog);
        WordBox->setObjectName(QString::fromUtf8("WordBox"));

        verticalLayout_2->addWidget(WordBox);

        BackwardBox = new QCheckBox(SearchDialog);
        BackwardBox->setObjectName(QString::fromUtf8("BackwardBox"));

        verticalLayout_2->addWidget(BackwardBox);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ButtonSearch = new QPushButton(SearchDialog);
        ButtonSearch->setObjectName(QString::fromUtf8("ButtonSearch"));
        ButtonSearch->setDefault(true);

        verticalLayout->addWidget(ButtonSearch);

        CloseButt = new QPushButton(SearchDialog);
        CloseButt->setObjectName(QString::fromUtf8("CloseButt"));

        verticalLayout->addWidget(CloseButt);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        QWidget::setTabOrder(SearchEdit, ReplaceEdit);
        QWidget::setTabOrder(ReplaceEdit, AskBox);
        QWidget::setTabOrder(AskBox, CaseBox);
        QWidget::setTabOrder(CaseBox, WordBox);
        QWidget::setTabOrder(WordBox, BackwardBox);
        QWidget::setTabOrder(BackwardBox, ButtonSearch);

        retranslateUi(SearchDialog);
        QObject::connect(CloseButt, SIGNAL(clicked()), SearchDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        SearchGroup->setTitle(QApplication::translate("SearchDialog", "Text to search for", 0, QApplication::UnicodeUTF8));
        ReplaceGroup->setTitle(QApplication::translate("SearchDialog", "Text to replace with", 0, QApplication::UnicodeUTF8));
        AskBox->setText(QApplication::translate("SearchDialog", "Ask before replacing", 0, QApplication::UnicodeUTF8));
        CaseBox->setText(QApplication::translate("SearchDialog", "Case sensitive", 0, QApplication::UnicodeUTF8));
        WordBox->setText(QApplication::translate("SearchDialog", "Whole words only", 0, QApplication::UnicodeUTF8));
        BackwardBox->setText(QApplication::translate("SearchDialog", "Search backwards", 0, QApplication::UnicodeUTF8));
        ButtonSearch->setText(QApplication::translate("SearchDialog", "Next", 0, QApplication::UnicodeUTF8));
        CloseButt->setText(QApplication::translate("SearchDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
