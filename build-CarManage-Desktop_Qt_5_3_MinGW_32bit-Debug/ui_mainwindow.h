/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>
#include <histogram.h>
#include <pie.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCar;
    QAction *actionCalc;
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QStackedWidget *stackedWidget;
    QWidget *calc;
    QGridLayout *gridLayout_7;
    QWidget *widget_10;
    QGridLayout *gridLayout_8;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    Pie *widgetP;
    QWidget *widget_8;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer;
    Histogram *widgetH;
    QWidget *widget_7;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QComboBox *comboBoxManaBrand;
    QWidget *widget_6;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBoxManaFac;
    QWidget *car;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBoxBrand;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBoxFactory;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QLabel *labelLast;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEditTotal;
    QLabel *label_9;
    QWidget *widget_3;
    QGridLayout *gridLayout_9;
    QLineEdit *lineEditPrice;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget_9;
    QGridLayout *gridLayout_10;
    QPushButton *btnSure;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_6;
    QTextEdit *textEdit;
    QWidget *page_2;
    QGridLayout *gridLayout_11;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *btnAdd;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btnDelete;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btnSureCar;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *btnWithdraw;
    QSpacerItem *horizontalSpacer_13;
    QLabel *labelHead;
    QMenuBar *menuBar;
    QMenu *menuCarManager;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(997, 578);
        actionCar = new QAction(MainWindow);
        actionCar->setObjectName(QStringLiteral("actionCar"));
        actionCalc = new QAction(MainWindow);
        actionCalc->setObjectName(QStringLiteral("actionCalc"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        calc = new QWidget();
        calc->setObjectName(QStringLiteral("calc"));
        gridLayout_7 = new QGridLayout(calc);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        widget_10 = new QWidget(calc);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        sizePolicy.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy);
        gridLayout_8 = new QGridLayout(widget_10);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_13 = new QLabel(widget_10);
        label_13->setObjectName(QStringLiteral("label_13"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("3DS Fonticon"));
        font.setPointSize(12);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_13, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        widgetP = new Pie(widget_10);
        widgetP->setObjectName(QStringLiteral("widgetP"));
        sizePolicy.setHeightForWidth(widgetP->sizePolicy().hasHeightForWidth());
        widgetP->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(widgetP, 1, 0, 1, 3);


        gridLayout_7->addWidget(widget_10, 2, 1, 2, 1);

        widget_8 = new QWidget(calc);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        sizePolicy.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(widget_8);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        label_11 = new QLabel(widget_8);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_11, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 1, 0, 1, 1);

        widgetH = new Histogram(widget_8);
        widgetH->setObjectName(QStringLiteral("widgetH"));
        sizePolicy.setHeightForWidth(widgetH->sizePolicy().hasHeightForWidth());
        widgetH->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(widgetH, 2, 0, 1, 3);


        gridLayout_7->addWidget(widget_8, 2, 0, 2, 1);

        widget_7 = new QWidget(calc);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        sizePolicy1.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(widget_7);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_10 = new QLabel(widget_7);
        label_10->setObjectName(QStringLiteral("label_10"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        comboBoxManaBrand = new QComboBox(widget_7);
        comboBoxManaBrand->setObjectName(QStringLiteral("comboBoxManaBrand"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBoxManaBrand->sizePolicy().hasHeightForWidth());
        comboBoxManaBrand->setSizePolicy(sizePolicy3);
        comboBoxManaBrand->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(comboBoxManaBrand, 0, 1, 1, 1);


        gridLayout_7->addWidget(widget_7, 1, 1, 1, 1);

        widget_6 = new QWidget(calc);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        sizePolicy1.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy1);
        widget_6->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(widget_6);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(widget_6);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxManaFac = new QComboBox(widget_6);
        comboBoxManaFac->setObjectName(QStringLiteral("comboBoxManaFac"));
        sizePolicy.setHeightForWidth(comboBoxManaFac->sizePolicy().hasHeightForWidth());
        comboBoxManaFac->setSizePolicy(sizePolicy);
        comboBoxManaFac->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(comboBoxManaFac, 0, 1, 1, 1);


        gridLayout_7->addWidget(widget_6, 1, 0, 1, 1);

        stackedWidget->addWidget(calc);
        car = new QWidget();
        car->setObjectName(QStringLiteral("car"));
        gridLayout_2 = new QGridLayout(car);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        splitter = new QSplitter(car);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(200, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("3DS Fonticon"));
        font1.setPointSize(11);
        toolBox->setFont(font1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 961, 386));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget_2 = new QWidget(page);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBoxBrand = new QComboBox(widget_2);
        comboBoxBrand->setObjectName(QStringLiteral("comboBoxBrand"));

        horizontalLayout_2->addWidget(comboBoxBrand);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(page);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBoxFactory = new QComboBox(widget);
        comboBoxFactory->setObjectName(QStringLiteral("comboBoxFactory"));

        horizontalLayout->addWidget(comboBoxFactory);

        horizontalSpacer_3 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        widget_4 = new QWidget(page);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(36, 0));

        horizontalLayout_4->addWidget(label_6);

        spinBox = new QSpinBox(widget_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy5);

        horizontalLayout_4->addWidget(spinBox);

        horizontalSpacer_5 = new QSpacerItem(90, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(label_7);

        labelLast = new QLabel(widget_4);
        labelLast->setObjectName(QStringLiteral("labelLast"));

        horizontalLayout_4->addWidget(labelLast);


        gridLayout_3->addWidget(widget_4, 3, 0, 1, 1);

        widget_5 = new QWidget(page);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        lineEditTotal = new QLineEdit(widget_5);
        lineEditTotal->setObjectName(QStringLiteral("lineEditTotal"));

        horizontalLayout_5->addWidget(lineEditTotal);

        label_9 = new QLabel(widget_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);


        gridLayout_3->addWidget(widget_5, 4, 0, 1, 1);

        widget_3 = new QWidget(page);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy6);
        widget_3->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_9 = new QGridLayout(widget_3);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        lineEditPrice = new QLineEdit(widget_3);
        lineEditPrice->setObjectName(QStringLiteral("lineEditPrice"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lineEditPrice->sizePolicy().hasHeightForWidth());
        lineEditPrice->setSizePolicy(sizePolicy7);
        lineEditPrice->setReadOnly(true);

        gridLayout_9->addWidget(lineEditPrice, 0, 1, 1, 1);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_9->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_9->addWidget(label_5, 0, 2, 1, 1);


        gridLayout_3->addWidget(widget_3, 2, 0, 1, 1);

        widget_9 = new QWidget(page);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        gridLayout_10 = new QGridLayout(widget_9);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        btnSure = new QPushButton(widget_9);
        btnSure->setObjectName(QStringLiteral("btnSure"));

        gridLayout_10->addWidget(btnSure, 0, 0, 1, 1);

        btnCancel = new QPushButton(widget_9);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        gridLayout_10->addWidget(btnCancel, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_6, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget_9, 5, 0, 1, 1);

        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        gridLayout_3->addWidget(textEdit, 0, 1, 6, 1);

        toolBox->addItem(page, QString::fromUtf8("\345\207\272\345\224\256\350\275\246\350\276\206"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 961, 386));
        gridLayout_11 = new QGridLayout(page_2);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_11->addWidget(tableView, 0, 0, 1, 9);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_12, 1, 0, 1, 1);

        btnAdd = new QPushButton(page_2);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        gridLayout_11->addWidget(btnAdd, 1, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_9, 1, 2, 1, 1);

        btnDelete = new QPushButton(page_2);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));

        gridLayout_11->addWidget(btnDelete, 1, 3, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_10, 1, 4, 1, 1);

        btnSureCar = new QPushButton(page_2);
        btnSureCar->setObjectName(QStringLiteral("btnSureCar"));

        gridLayout_11->addWidget(btnSureCar, 1, 5, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_11, 1, 6, 1, 1);

        btnWithdraw = new QPushButton(page_2);
        btnWithdraw->setObjectName(QStringLiteral("btnWithdraw"));

        gridLayout_11->addWidget(btnWithdraw, 1, 7, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_13, 1, 8, 1, 1);

        toolBox->addItem(page_2, QString::fromUtf8("\346\226\260\350\275\246\345\205\245\345\272\223"));
        splitter->addWidget(toolBox);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        stackedWidget->addWidget(car);

        gridLayout_6->addWidget(stackedWidget, 2, 0, 1, 1);

        labelHead = new QLabel(centralWidget);
        labelHead->setObjectName(QStringLiteral("labelHead"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(20);
        labelHead->setFont(font2);
        labelHead->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelHead, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 997, 23));
        menuCarManager = new QMenu(menuBar);
        menuCarManager->setObjectName(QStringLiteral("menuCarManager"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCarManager->menuAction());
        menuCarManager->addAction(actionCar);
        menuCarManager->addAction(actionCalc);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CarManager", 0));
        actionCar->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\347\256\241\347\220\206", 0));
        actionCalc->setText(QApplication::translate("MainWindow", "\351\224\200\345\224\256\347\273\237\350\256\241", 0));
        label_13->setText(QApplication::translate("MainWindow", "\345\223\201\347\211\214\350\275\246\345\236\213", 0));
        label_11->setText(QApplication::translate("MainWindow", "\345\216\202\345\256\266\345\223\201\347\211\214\351\224\200\351\207\217", 0));
        label_10->setText(QApplication::translate("MainWindow", "\345\223\201\347\211\214\357\274\232", 0));
        label->setText(QApplication::translate("MainWindow", "\345\216\202\345\256\266\357\274\232", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\223\201\347\211\214\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "\345\216\202\345\256\266\357\274\232", 0));
        comboBoxFactory->setCurrentText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\346\225\260\351\207\217\357\274\232", 0));
        label_7->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\346\225\260\351\207\217\357\274\232", 0));
        labelLast->setText(QApplication::translate("MainWindow", "20", 0));
        label_8->setText(QApplication::translate("MainWindow", "\351\207\221\351\242\235\357\274\232", 0));
        label_9->setText(QApplication::translate("MainWindow", "\344\270\207", 0));
        label_4->setText(QApplication::translate("MainWindow", "\346\212\245\344\273\267\357\274\232", 0));
        label_5->setText(QApplication::translate("MainWindow", "\344\270\207", 0));
        btnSure->setText(QApplication::translate("MainWindow", "\347\241\256\345\256\232", 0));
        btnCancel->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\345\207\272\345\224\256\350\275\246\350\276\206", 0));
        btnAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", 0));
        btnDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", 0));
        btnSureCar->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244", 0));
        btnWithdraw->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\346\226\260\350\275\246\345\205\245\345\272\223", 0));
        labelHead->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\347\256\241\347\220\206", 0));
        menuCarManager->setTitle(QApplication::translate("MainWindow", "\351\224\200\345\224\256\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
