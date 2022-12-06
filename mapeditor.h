#ifndef MAPEDITOR_H
#define MAPEDITOR_H
#include <cmath>
#include <QMainWindow>
#include <fstream>

namespace Ui {
    class MapEditor;
}

class MapEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit MapEditor(QWidget* parent = 0);
    int tp = 0;
    int num1 = 0, num2 = 0;  
    double matrix[51][51] = {};
    bool reach[51] = {};
    void DFS(int P1, int P2);

    bool isin(QPoint x, QPoint y, int n = 10);
    double dist(QPoint a, QPoint b);
    void clr();
    ~MapEditor();

private slots:
    void on_pushButton_clicked();
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent* event);
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_11_clicked();

private:
    Ui::MapEditor* ui;
};

#endif // MAPEDITOR_H
