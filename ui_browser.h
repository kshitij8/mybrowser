/********************************************************************************
** Form generated from reading UI file 'browser.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSER_H
#define UI_BROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_QtBrowserClass
{
public:
    QAction *actionNew_Window;
    QAction *actionLogin;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *urlEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *forwardButton;
    QPushButton *reloadButton;
    QPushButton *backButton;
    QWebView *webView;
    QMenuBar *menuBar;
    QMenu *menuBrowser;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtBrowserClass)
    {
        if (QtBrowserClass->objectName().isEmpty())
            QtBrowserClass->setObjectName(QString::fromUtf8("QtBrowserClass"));
        QtBrowserClass->resize(764, 582);
        actionNew_Window = new QAction(QtBrowserClass);
        actionNew_Window->setObjectName(QString::fromUtf8("actionNew_Window"));
        actionLogin = new QAction(QtBrowserClass);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        centralWidget = new QWidget(QtBrowserClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, -1);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        urlEdit = new QLineEdit(centralWidget);
        urlEdit->setObjectName(QString::fromUtf8("urlEdit"));
        urlEdit->setMinimumSize(QSize(400, 0));

        horizontalLayout->addWidget(urlEdit);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        forwardButton = new QPushButton(centralWidget);
        forwardButton->setObjectName(QString::fromUtf8("forwardButton"));
        forwardButton->setEnabled(true);

        horizontalLayout->addWidget(forwardButton);

        reloadButton = new QPushButton(centralWidget);
        reloadButton->setObjectName(QString::fromUtf8("reloadButton"));
        reloadButton->setEnabled(true);

        horizontalLayout->addWidget(reloadButton);

        backButton = new QPushButton(centralWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setEnabled(true);

        horizontalLayout->addWidget(backButton);


        verticalLayout->addLayout(horizontalLayout);

        webView = new QWebView(centralWidget);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setProperty("url", QVariant(QUrl(QString::fromUtf8("http://www.google.com/"))));

        verticalLayout->addWidget(webView);

        QtBrowserClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtBrowserClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 764, 29));
        menuBrowser = new QMenu(menuBar);
        menuBrowser->setObjectName(QString::fromUtf8("menuBrowser"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        QtBrowserClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(QtBrowserClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtBrowserClass->setStatusBar(statusBar);

        menuBar->addAction(menuBrowser->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBrowser->addAction(actionNew_Window);
        menuHelp->addAction(actionLogin);

        retranslateUi(QtBrowserClass);
        QObject::connect(backButton, SIGNAL(clicked()), webView, SLOT(back()));
        QObject::connect(forwardButton, SIGNAL(clicked()), webView, SLOT(forward()));
        QObject::connect(webView, SIGNAL(statusBarMessage(QString)), statusBar, SLOT(showMessage(QString)));
        QObject::connect(webView, SIGNAL(loadFinished(bool)), QtBrowserClass, SLOT(handleFinishedLoad(bool)));
        QObject::connect(webView, SIGNAL(titleChanged(QString)), QtBrowserClass, SLOT(handleTitleChange(QString)));
        QObject::connect(webView, SIGNAL(loadProgress(int)), QtBrowserClass, SLOT(handleProgress(int)));
        QObject::connect(webView, SIGNAL(urlChanged(QUrl)), QtBrowserClass, SLOT(handleURLChange(QUrl)));
        QObject::connect(webView, SIGNAL(loadStarted()), QtBrowserClass, SLOT(handleLoadStarted()));
        QObject::connect(urlEdit, SIGNAL(returnPressed()), QtBrowserClass, SLOT(handleURLEdit()));
        QObject::connect(reloadButton, SIGNAL(clicked()), QtBrowserClass, SLOT(handleReloadButton()));

        QMetaObject::connectSlotsByName(QtBrowserClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtBrowserClass)
    {
        QtBrowserClass->setWindowTitle(QApplication::translate("QtBrowserClass", "Speedy Browser", 0, QApplication::UnicodeUTF8));
        actionNew_Window->setText(QApplication::translate("QtBrowserClass", "New Window", 0, QApplication::UnicodeUTF8));
        actionLogin->setText(QApplication::translate("QtBrowserClass", "Login", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QtBrowserClass", "URL", 0, QApplication::UnicodeUTF8));
        forwardButton->setText(QApplication::translate("QtBrowserClass", "Go", 0, QApplication::UnicodeUTF8));
        reloadButton->setText(QApplication::translate("QtBrowserClass", "Refresh", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("QtBrowserClass", "Go Back", 0, QApplication::UnicodeUTF8));
        menuBrowser->setTitle(QApplication::translate("QtBrowserClass", "Browser", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("QtBrowserClass", "Login", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtBrowserClass: public Ui_QtBrowserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_H
