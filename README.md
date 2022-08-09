# Paczkomat
Program symuluje działanie paczkomatu składającego się ze skrzynek o trzech wielkościach: mała, średnia i duża.

Zdefiniuj klasę 'skrzynka', której składnikami prywatnymi będą np. 'wysokosc' i 'szerokosc', zadawane w konstruktorze klasy na podstawie wartości przesłanych argumentów oraz zmienna określająca stan skrzynki o nazwie np. 'czy_pelna', 'czy_pusta', 'zajeta', 'wolna' - zależnie od pomysłu i przyjętej logiki.

Zdefiniuj funkcję składową klasy 'skrzynka' np. 'bool skrzynka::wloz_paczke(float wys, float szer)', której zadaniem będzie:

sprawdzenie i poinformowanie na ekranie w przypadku gdy skrzynka jest już zajęta i zwrócenie wartości false

przyjęcie paczki gdy skrzynka jest pusta, a paczka się zmieści (przez porównanie obu par wymiarów), zmiana stanu na zajęty oraz zwrócenie wartości true

poinformowanie jeśli skrzynka jest pusta, ale paczka się nie mieści oraz zwrócenie wartości false

Zdefiniuj klasę 'paczkomat', w skład którego będzie wchodzić tablica wskaźników do obiektów klasy 'skrzynka' o ustalonym rozmiarze, np. 12 (liczba skrzynek).

Montowania skrzynek w paczkomacie możesz dokonać przy użyciu odpowiedniej funkcji lub bezpośrednio w konstruktorze klasy 'paczkomat'. Wymiary i liczbę skrzynek danej wielkości dobierz samodzielnie.

Zdefiniuj funkcję składową klasy 'paczkomat' np. 'void paczkomat::wloz_paczke(int ID_skrzynki, float wys, float szer)', której zadaniem jest próba włożenia paczki do skrzynki o zadanym numerze i wyświetlenie komunikatu, czy operacja się udała (na podstawie wartości zwracanej przez funkcję składową danej skrzynki).

W funkcji głównej, zdefiniuj obiekt klasy 'paczkomat'. Przetestuj wkładanie co najmniej trzech paczek o wymiarach pasujących do różnych skrzynek tak, aby dwukrotnie operacja się nie udała (za mała lub zajęta skrzynka), ale ostatecznie wszystkie paczki znalazły się w paczkomacie.

Zaprojektuj i wykonaj uproszczony interfejs użytkownika symulujący podmenu służące do umieszczania paczek w paczkomacie. Działanie interfejsu powinno być zapętlone, aby umożliwić wykonanie wielokrotnych czynności. Zakończenie pracy programu przez wybór odpowiedniej opcji menu.

Podziel odpowiednio projekt na plik nagłówkowy, plik definicji oraz plik funkcji głównej i prześlij je na platformę do oceny.

Dla ambitnych:

Zmodyfikuj i rozbuduj klasy 'skrzynka' i 'paczkomat' według własnego pomysłu. Możesz dopisać np.:

funkcję do wyjmowania paczki ze skrzynki,

losowanie 6-cyfrowego kodu otwierającego skrzynkę po umieszczeniu paczki przyporządkowanego do danej skrzynki.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

The program simulates the operation of a parcel box consisting of boxes of three sizes: small, medium and large.

Define a class 'box', whose private components will be, for example, 'height' and 'width', set in the class constructor based on the values of the submitted arguments, and a variable specifying the state of the box named, for example, 'whether_full', 'whether_empty', 'occupied', 'free'. - depending on the idea and logic adopted.

Define a component function of class 'crate', e.g. 'bool crate::insert_pack(float height, float width)', whose task will be:

check and inform on the screen in case the crate is already occupied and return the value false

accept a parcel when the crate is empty and the parcel will fit (by comparing the two pairs of dimensions), change the status to occupied and return the value true

informing if the box is empty but the parcel does not fit, and returning the value false

Define the class 'parcelbox', which will include an array of pointers to objects of the class 'box' with a fixed size, such as 12 (the number of boxes).

You can assemble the boxes in the parcel machine using the appropriate function or directly in the constructor of the 'parcel machine' class. Choose the dimensions and number of boxes of a given size yourself.

Define a component function of the 'parcelcomat' class, e.g. 'void parcelcomat::wloz_paczke(int ID_box, float height, float width)', whose task is to try to insert a parcel into a box of the given number and display a message whether the operation was successful (based on the value returned by the component function of the given box).

In the main function, define an object of class 'parcelbox'. Test the insertion of at least three parcels sized to fit into different boxes so that twice the operation fails (too small or busy box), but eventually all the parcels are in the parcel machine.

Design and develop a simplified user interface simulating a submenu for placing parcels in a parcel machine. The operation of the interface should be looped to allow for multiple actions. Terminate the program by selecting the appropriate menu option.

Divide the project into a header file, a definition file and a main function file, respectively, and submit them to the platform for evaluation.

For the ambitious:

Modify and extend the 'box' and 'parcel' classes according to your own idea. You can add, for example:

a function to take a package out of a box,

draw a 6-digit code to open the box after placing a package assigned to the box.

Translated with www.DeepL.com/Translator (free version)
