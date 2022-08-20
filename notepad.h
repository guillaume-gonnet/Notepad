#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:
    void open();

    void on_actionNew_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionPrint_triggered();

    void on_actionFont_triggered();

    void on_actionCopy_triggered();

    void on_actionOpen_triggered();

private:
    Ui::Notepad *ui;
    QString currentFile;

};
#endif // NOTEPAD_H
