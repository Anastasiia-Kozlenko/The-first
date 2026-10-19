MAIN="before_refactoring_5 — копия.cpp"
APP=example

if [-f "$APP" ]; then rm "$APP"
fi

g++ "$MAIN" -o "$APP"

./"$APP"