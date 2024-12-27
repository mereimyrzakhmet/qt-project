#ifndef DICTIONARYMANAGER_H
#define DICTIONARYMANAGER_H

#include <QString>
#include <QMap>

class DictionaryManager {
public:
    DictionaryManager();

    QString searchWord(const QString &word);
    bool addWord(const QString &word, const QString &definition);
    bool editWord(const QString &word, const QString &newDefinition);
    bool deleteWord(const QString &word);

    void loadDictionary(const QString &filePath);
    void saveDictionary(const QString &filePath);

    const QMap<QString, QString>& getDictionary() const;

private:
    QMap<QString, QString> dictionary;
};

#endif // DICTIONARYMANAGER_H
