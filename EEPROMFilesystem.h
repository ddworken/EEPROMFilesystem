#ifndef EEPROMFilesystem_h
#define EEPROMFilesystem_h
#include "EEPROM.h"

class EEPROMFilesystem{
	public: 
		EEPROMFilesystem(int addressSpace);
		void addString(String stringToAdd, int stringPlace);
		void defrag();
		void blankEEPROM();
	private: 
		int _addressSpace;
		int blankVal;
		int startVal;
		int endVal;
		void shifter(int amountToShift, int indexToShiftFrom);
		void zeroEEPROMAfterLastIndex();
		void findEarliestEmptyIndex();
		void stringToEEPROM(String toE, int addr);
};

#endif

