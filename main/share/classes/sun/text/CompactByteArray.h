#ifndef _sun_text_CompactByteArray_h_
#define _sun_text_CompactByteArray_h_
//$ class sun.text.CompactByteArray
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("BLOCKCOUNT")
#undef BLOCKCOUNT
#pragma push_macro("BLOCKMASK")
#undef BLOCKMASK
#pragma push_macro("BLOCKSHIFT")
#undef BLOCKSHIFT
#pragma push_macro("INDEXCOUNT")
#undef INDEXCOUNT
#pragma push_macro("INDEXSHIFT")
#undef INDEXSHIFT
#pragma push_macro("UNICODECOUNT")
#undef UNICODECOUNT

namespace sun {
	namespace text {

class $export CompactByteArray : public ::java::lang::Cloneable {
	$class(CompactByteArray, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	CompactByteArray();
	void init$(int8_t defaultValue);
	void init$($shorts* indexArray, $bytes* newValues);
	static bool arrayRegionMatches($bytes* source, int32_t sourceStart, $bytes* target, int32_t targetStart, int32_t len);
	bool blockTouched(int32_t i);
	virtual $Object* clone() override;
	void compact();
	int8_t elementAt(char16_t index);
	virtual bool equals(Object$* obj) override;
	void expand();
	$bytes* getArray();
	$shorts* getIndexArray();
	$bytes* getStringArray();
	virtual int32_t hashCode() override;
	void setElementAt(char16_t index, int8_t value);
	void setElementAt(char16_t start, char16_t end, int8_t value);
	void touchBlock(int32_t i, int32_t value);
	static const int32_t UNICODECOUNT = 0x00010000;
	static const int32_t BLOCKSHIFT = 7;
	static const int32_t BLOCKCOUNT = 128; // (1 << BLOCKSHIFT)
	static const int32_t INDEXSHIFT = 9; // (16 - BLOCKSHIFT)
	static const int32_t INDEXCOUNT = 512; // (1 << INDEXSHIFT)
	static const int32_t BLOCKMASK = 127; // BLOCKCOUNT - 1
	$bytes* values = nullptr;
	$shorts* indices = nullptr;
	bool isCompact = false;
	$ints* hashes = nullptr;
};

	} // text
} // sun

#pragma pop_macro("BLOCKCOUNT")
#pragma pop_macro("BLOCKMASK")
#pragma pop_macro("BLOCKSHIFT")
#pragma pop_macro("INDEXCOUNT")
#pragma pop_macro("INDEXSHIFT")
#pragma pop_macro("UNICODECOUNT")

#endif // _sun_text_CompactByteArray_h_