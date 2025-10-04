#include "topicselection.h"
#include "ui_topicselection.h"
#include "quizstart.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QKeyEvent>

TopicSelection::TopicSelection(QString& user,QString &mode,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TopicSelection),mode(mode),CurrentUserName(user)
{
    ui->setupUi(this);

    topicComboBox=ui->comboBox;
    //proceedButton = ui->procedeButton;

    loadTopics();

    ui->MCQButton->setChecked(true);
}

TopicSelection::~TopicSelection()
{
    delete ui;
}

void TopicSelection::loadTopics() {
    // Load topics from a file (or any other source)
    QFile file("topics.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString topic = in.readLine();
            availableTopics.push_back(topic);
            topicComboBox->addItem(topic);  // Add topic to ComboBox
        }
        file.close();
    }
}
void TopicSelection::onTopicSelected() {
    // When a topic is selected, enable the proceed button
    QString selectedTopic = ui->comboBox->currentText();
    if (!selectedTopic.isEmpty()) {
        ui->procedeButton->setEnabled(true);
    }
}



void TopicSelection::on_procedeButton_clicked()
{
    QString selectedTopic = ui->comboBox->currentText();
    if (selectedTopic.isEmpty()) {
        QMessageBox::warning(this, "Selection Error", "Please select a topic.");
        return;
    }

    QString selectedQuestionType;
    if (ui->MCQButton->isChecked()) {
        selectedQuestionType = "MCQ";
    }
    else if (ui->OneWordButton->isChecked()) {
        selectedQuestionType = "OneWord";
    }
    else {
        QMessageBox::warning(this, "Selection Error", "Please select a question type.");
        return;
    }

    QuizStart* quiz = new QuizStart(CurrentUserName, mode, selectedTopic, selectedQuestionType, this);
    quiz->show();
    this->hide();
}


