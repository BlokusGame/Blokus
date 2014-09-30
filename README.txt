This is an implementation of the game, Blokus.
It will provide a clear and handy api, for artificial intelligence driven players.
Our main goal, is to have a simple codebase which can be easily expanded to have different AI players.

Other goals:
  Nice but changeable GUI
  Blokus Duo game mode
  Networking
  Later on more game modes
  Keep statistics of the games
Versions:

0.1 Anatomy
  The skeleton of the main classses
  Simple input validation
  Connections in of the classes

Description of the game in hungarian:

A feladat részletei
Témacsoport: Gépi játékos fejlesztése klasszikus játékokhoz

Ebben a feladatcsoportban egy-egy játékot kell megvalósítani amely játszható a gép ellen. A gépi játékost legyen lehetőleg nehéz megverni. Elég a szöveges kimenet, persze egy szép GUI is hozzáadhat a megoldás értékéhez.
Választott feladat: Blocus

A játékot egy 14x14-es páylán két játékos. Mindenkinek vagy néhány lerakható alakzata. Ezek az alakzatok olyanok, mint a tetris-ben, csak van 1db 1 négyzetből álló, 1 db két négyzetből, 2 db három négyzetből álló (egyenes és kanyar), 5db négy négyzetből álló (egyenes, L, elágazó, 2x2-es négyzet és szár nélküli Z vagy S), valamint 12 db öt négyzetből álló (egyenes, U, kereszt, kétféle L, lépcső, T, Z vagy S, meg még az a négy amit nem olyan egyszerű körülírni) alakzat.

Ezeket az alakzatokat felváltva rakják le a játékosok, olyan módon, hogy a saját már lerakott alakzatukkal csak sarkon érintkezhet a frissen lerakott és egy sarkon kell is, hogy érintezzen. Az ellenfélével bárhol érintkezhet, de nem fedhet át. Az alakzatokat tetszőlegesen lehet tükrözni és forgatni. Aki nem tud rakni az kimarad. A játék akkor ér véget amikor egyik játékos se tud rakni. Ekkor az nyer, aki több kis négyzetet tudott lerakni. Kezdeni pedig az (5,5) pontból és a (10,10) pontból lehet egytől számozva a bal alsó sarokból a pályát (ez a két mező közül az egyiket fednie kell az első lerakott alakzatnak).

A feladat a játék implementálása egy gépi játékos ellen.

