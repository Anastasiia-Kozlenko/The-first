MAIN="main.cpp "
APP=menu


if [ $APP ]; then rm "$APP"
fi


g++ $MAIN -o $APP

./$APP