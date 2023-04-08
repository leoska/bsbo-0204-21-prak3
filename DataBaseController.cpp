#include "DataBaseController.h"

bool DataBaseController::makeConnection() {
      QSqlDatabase dataBase = QSqlDatabase::addDatabase("QPSQL");
      dataBase.setDatabaseName("mirea");
      dataBase.setUserName("mirea");
      dataBase.setHostName("localhost");
      dataBase.setPassword("mirea");

      if (!dataBase.open()) {
          qDebug() << "Cannot open database" << dataBase.lastError();
          return false;
      }
      return true;
};
