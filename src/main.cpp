#include <QApplication>
#include <QLabel>
#include <iostream>
int main(int argc, char *argv[]) {
  // Инициализация приложения Qt
  std::cout << "test" << std::endl;
  QApplication app(argc, argv);

  // Создание виджета QLabel, который будет показывать текст
  QLabel helloLabel("Hello World");

  // Отображение виджета
  helloLabel.show();
  // Запуск основного цикла приложения
  return app.exec();
}
