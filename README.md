EEPROMFilesystem
================

A rudimentary filesystem meant for use on an Arduino micro's 1KB of EEPROM. 

===============

The two important methods are: 

  void addString(String stringToAdd, int stringPlace)
    Pass this method a string (of length less than 924 characters) for it to be stored in stringPlace. stringPlace must be an even number between 0 and 98 (otherwise will not work). This even number is the string identifier. 
    
  String getString(int stringNumber)
    When passed an even number between 0 and 98 it will return the string with that identifier. 
    
===============

Currently supports up to 50 strings of length up to 924 characters. 
