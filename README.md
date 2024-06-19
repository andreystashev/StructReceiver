# udp-transmission

### Описание

Проект включает две программы: одна отправляет данные по UDP, другая принимает и выводит их в окне. Обе программы написаны на C++ с использованием Qt и собраны с помощью qmake.

## Требования
- Qt (версия >= 5.12)
- qmake
- g++ или другой совместимый компилятор

## Сборка и установка

1. Клонируйте репозиторий:

    - git clone [https://github.com/andreystashev/udp_transmission.git](https://github.com/andreystashev/udp-transmission.git)


2. Перейдите в директорию проекта:

    - cd andreystashev
  

3. Соберите и установите программы:

    - cd data-receiver
    - qmake
    - make
    - cd ../data-sender
    - qmake
    - make
  

## Использование

### data-receiver

1. Запустите программу data-receiver.
2. Введите порт для приема данных.
3. Нажмите кнопку connect для начала приема данных.

### data-sender

1. Запустите программу data-sender.
2. Программа будет отправлять рандомные данные на заданный порт.

<img width="1440" alt="Screenshot 2023-09-16 at 5 45 08 PM" src="https://github.com/andreystashev/StructReceiver/assets/70208784/276c2857-df54-4c6c-b1b1-397e290c14ef">
