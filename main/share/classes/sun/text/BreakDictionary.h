#ifndef _sun_text_BreakDictionary_h_
#define _sun_text_BreakDictionary_h_
//$ class sun.text.BreakDictionary
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace text {
		class CompactByteArray;
		class SupplementaryCharacterData;
	}
}

namespace sun {
	namespace text {

class $export BreakDictionary : public ::java::lang::Object {
	$class(BreakDictionary, 0, ::java::lang::Object)
public:
	BreakDictionary();
	void init$($String* dictionaryName, $bytes* dictionaryData);
	bool cellIsPopulated(int32_t row, int32_t col);
	int16_t getNextState(int32_t row, int32_t col);
	int16_t getNextStateFromCharacter(int32_t row, int32_t ch);
	int16_t internalAt(int32_t row, int32_t col);
	void setupDictionary($String* dictionaryName, $bytes* dictionaryData);
	static bool $assertionsDisabled;
	static int32_t supportedVersion;
	::sun::text::CompactByteArray* columnMap = nullptr;
	::sun::text::SupplementaryCharacterData* supplementaryCharColumnMap = nullptr;
	int32_t numCols = 0;
	int32_t numColGroups = 0;
	$shorts* table = nullptr;
	$shorts* rowIndex = nullptr;
	$ints* rowIndexFlags = nullptr;
	$shorts* rowIndexFlagsIndex = nullptr;
	$bytes* rowIndexShifts = nullptr;
};

	} // text
} // sun

#endif // _sun_text_BreakDictionary_h_