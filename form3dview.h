#ifndef FORM3DVIEW_H
#define FORM3DVIEW_H

#include <QWidget>

#include <Qt3DCore>
#include <Qt3DRender>
#include <Qt3DInput>
#include <Qt3DLogic>
#include <Qt3DExtras>
#include <Qt3DAnimation>
#include <QDockWidget>
#include <QHBoxLayout>
namespace Ui {
class Form3dView;
}

class Form3dView : public QDockWidget
{
    Q_OBJECT

public:
        QHBoxLayout *horizontalLayout;
    explicit Form3dView(QWidget *parent = nullptr);
    ~Form3dView();

private:
    Ui::Form3dView *ui;


};

#endif // FORM3DVIEW_H
