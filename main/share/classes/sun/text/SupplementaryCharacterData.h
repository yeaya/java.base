#ifndef _sun_text_SupplementaryCharacterData_h_
#define _sun_text_SupplementaryCharacterData_h_
//$ class sun.text.SupplementaryCharacterData
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("IGNORE")
#undef IGNORE

namespace sun {
	namespace text {

class $export SupplementaryCharacterData : public ::java::lang::Cloneable {
	$class(SupplementaryCharacterData, 0, ::java::lang::Cloneable)
public:
	SupplementaryCharacterData();
	void init$($ints* table);
	$ints* getArray();
	int32_t getValue(int32_t index);
	static bool $assertionsDisabled;
	static const int8_t IGNORE = (-1);
	$ints* dataTable = nullptr;
};

	} // text
} // sun

#pragma pop_macro("IGNORE")

#endif // _sun_text_SupplementaryCharacterData_h_