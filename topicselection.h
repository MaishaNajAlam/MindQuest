#ifndef TOPICSELECTION_H
#define TOPICSELECTION_H

#include <QMainWindow>
#include <QComboBox>
#include <QPushButton>
#include <QRadioButton>

#include <QMessageBox>

namespace Ui {
class TopicSelection;
}

class TopicSelection : public QMainWindow
{
    Q_OBJECT

public:
    explicit TopicSelection(QString& user,QString &mode,QWidget *parent = nullptr);
    ~TopicSelection();

private:
    Ui::TopicSelection *ui;
    QString mode;
    QString CurrentUserName;

    // UI components
    QComboBox *topicComboBox;
    //QPushButton *proceedButton;

    // Available topics loaded from the file
    QStringList availableTopics;

    // Load topics from topics.txt
    void loadTopics();

private slots:
    // Slot to handle topic selection change
    void onTopicSelected();

    void on_procedeButton_clicked();
};

#endif // TOPICSELECTION_H

