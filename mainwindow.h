#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QFileDialog>
#include <QWidget>
#include <QAbstractItemModel>
#include <QSortFilterProxyModel>
#include <QTreeView>
class QAbstractItemModel;
class QCheckBox;
class QComboBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QSortFilterProxyModel;
class QTreeView;
namespace Ui {
class MainWindow;

}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setSourceModel(QAbstractItemModel *model);
    ~MainWindow();  
private slots:
    void openExplorer();
    void saveFile();
    void clearTable();

private:
    Ui::MainWindow *ui;
    QTreeView *sourceView;
    QSortFilterProxyModel *proxyModel;
};

#endif // MAINWINDOW_H
