ERTCudQt
========

Właściwa aplikacja do obsługi nadajnika

Wskaźniki muszą dziedziczyć z QWidget, żeby można je było dodać do klasy okna, oraz mieć zdefiniowane sloty: setValue(int value); //do wyświetlania konkretnej wartości setMaximum(int value); //do ustawienia maksymalnej wartości setMinimum(int value); //do ustawienia minimalnej wartości Wartość do wyświetlenia powinna być obliczana tak jak w QDialu, QProgressBar itp. tzn.: (value - minimum) / (maximum - mminimum) Można sobie o tym poczytać tutaj: http://qt-project.org/doc/qt-4.8/qprogressbar.html#details Najlepiej je odziedziczyć po prostu z klasy QAbstractSlider ://qt-project.org/doc/qt-4.8/qabstractslider.html

Marian ma napisany jakiś widget OpenGl do wyświetlania ramienia, także jeśli ktoś chce się tym zająć to zgłoście się do niego. 

Dobrze by było zachować spójną konwencję - starajcie się przestrzegać (tak, wiem że w kilku miejscach sam tego nie robię): CamelCase wszędzie gdzie się da, poza #DEFINICJAMI

NazwyKLas - wielkie litery void nazwaMetody(int argument) -mała litera, argumenty małą int *wskaznik - mała litera int ZmiennaWKlasie - duża litera 
#define WARTOSC_DEFINICJI -same wielkie litery z podkreślnikami

Dobrze by było nie używać bibliotek tylko dla windowsa- kilka osób pisze na linuksach.

Wszelkie nazwy w programie powinny być po angielsku, jak ktoś nie lubi to może używać polskich w czasie pisania, ale później zrobić prawoklik->refraktoryzacja->zmień nazwę symbolu i napisać angielskie.

Komentujcie co tylko się da- później trzeba to będzie przerobić na dokumentację.

Zmienne globalne i goto to poroniony pomysł.

Wszelkie sugestie mile widziane.
