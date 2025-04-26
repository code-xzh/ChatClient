#ifndef MESSAGEEDITAREA_H
#define MESSAGEEDITAREA_H

#include <QWidget>
#include <QPushButton>
#include <QPlainTextEdit>

class MessageEditArea : public QWidget
{
    Q_OBJECT
public:
    explicit MessageEditArea(QWidget *parent = nullptr);

private:
    QPushButton* _sendImageBtn;
    QPushButton* _sendFileBtn;
    QPushButton* _sendSpeechBtn;
    QPushButton* _getHistoryBtn;
    QPlainTextEdit* _textEdit;
    QPushButton* _sendTextBtn;
signals:
};

#endif // MESSAGEEDITAREA_H
