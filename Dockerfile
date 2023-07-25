FROM debian:12

RUN apt-get -y update && apt-get install -y build-essential clang

COPY . /TTTgame

WORKDIR /TTTgame/build

CMD clang++ -o TTTgame ../src/ttt.cpp \
    && ./TTTgame \
    && rm TTTgame

