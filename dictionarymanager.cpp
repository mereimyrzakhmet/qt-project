#include "dictionarymanager.h"
#include <QFile>
#include <QTextStream>

DictionaryManager::DictionaryManager() {}

QString DictionaryManager::searchWord(const QString &word) {
    return dictionary.value(word, "Word not found.");
}

bool DictionaryManager::addWord(const QString &word, const QString &definition) {
    if (dictionary.contains(word)) return false;
    dictionary.insert(word, definition);
    return true;
}

bool DictionaryManager::editWord(const QString &word, const QString &newDefinition) {
    if (!dictionary.contains(word)) return false;
    dictionary[word] = newDefinition;
    return true;
}

bool DictionaryManager::deleteWord(const QString &word) {
    return dictionary.remove(word) > 0;
}

void DictionaryManager::loadDictionary(const QString &filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split("::");
        if (parts.size() == 2) {
            dictionary.insert(parts[0], parts[1]);
        }
    }
    file.close();
}

void DictionaryManager::saveDictionary(const QString &filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) return;

    QTextStream out(&file);
    for (auto it = dictionary.begin(); it != dictionary.end(); ++it) {
        out << it.key() << "::" << it.value() << "\n";
    }
    file.close();
}

const QMap<QString, QString>& DictionaryManager::getDictionary() const {
    return dictionary;
}
