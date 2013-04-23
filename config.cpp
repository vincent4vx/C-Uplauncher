#include "config.h"

Config::Config(QObject *parent) : QObject(parent){
    QFile file("uplauncher.xml");

    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::critical(0, "Erreur de lecture de configuration", file.errorString());
        exit(0);
    }

    loadXml(file);
}

void Config::loadXml(QFile &file){
    QDomDocument doc;

    if(!doc.setContent(&file)){
        QMessageBox::critical(0, "Erreur configuration", "Une erreur est suvenue lors de l'analyse de la configuration. Veuillez télécharger le fichier uplauncher.xml.");
        exit(0);
    }
    file.close();

    QDomElement elem = doc.documentElement();
    //QDomDocument root = elem.firstChild();
}
