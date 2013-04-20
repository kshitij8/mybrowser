#ifndef BROWSER_H
#define BROWSER_H

#include <QtGui/QMainWindow>
#include <QDialog>
#include "ui_browser.h"

class QtBrowser : public QMainWindow
{
    Q_OBJECT

public:
    QtBrowser(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~QtBrowser();

public slots:
    void handleReloadButton();
    void handleFinishedLoad(bool);
    void handleTitleChange(QString);
    void handleLoadStarted();
    void handleURLChange(QUrl);
    void handleProgress(int);
    void handleURLEdit();
    void handleNewWindow();
    void handleAbout();

protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::QtBrowserClass ui;

    QPushButton *reloadButton;
    QLineEdit *urlEdit;
    QWebView *web;

    QDialog aboutDialog;
};

#endif 
