This project has been discontinued. A primitive string based filesystem is seen in https://github.com/ddworken/hardwarePasswordManager while a more mature EEPROM library is seen at http://playground.arduino.cc/Code/EepromUtil .

~~EEPROMFilesystem~~
================

~~The two important methods are:~~

  ~~void addString(String stringToAdd, int stringPlace)
    Pass this method a string (of length less than 924 characters) for it to be stored in stringPlace. stringPlace must be an even number between 0 and 98 (otherwise will not work). This even number is the string identifier.~~ 
    
  ~~String getString(int stringNumber)
    When passed an even number between 0 and 98 it will return the string with that identifier.~~
    
===============

~~Currently supports up to 50 strings of length up to 924 characters.~~
