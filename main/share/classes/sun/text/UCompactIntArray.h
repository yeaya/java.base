#ifndef _sun_text_UCompactIntArray_h_
#define _sun_text_UCompactIntArray_h_
//$ class sun.text.UCompactIntArray
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("BLOCKCOUNT")
#undef BLOCKCOUNT
#pragma push_macro("BLOCKMASK")
#undef BLOCKMASK
#pragma push_macro("BLOCKSHIFT")
#undef BLOCKSHIFT
#pragma push_macro("CODEPOINTMASK")
#undef CODEPOINTMASK
#pragma push_macro("INDEXCOUNT")
#undef INDEXCOUNT
#pragma push_macro("INDEXSHIFT")
#undef INDEXSHIFT
#pragma push_macro("PLANECOUNT")
#undef PLANECOUNT
#pragma push_macro("PLANEMASK")
#undef PLANEMASK
#pragma push_macro("PLANESHIFT")
#undef PLANESHIFT
#pragma push_macro("UNICODECOUNT")
#undef UNICODECOUNT

namespace sun {
	namespace text {

class $export UCompactIntArray : public ::java::lang::Cloneable {
	$class(UCompactIntArray, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	UCompactIntArray();
	void init$();
	void init$(int32_t defaultValue);
	void compact();
	int32_t elementAt(int32_t index);
	void expand();
	int32_t getKSize();
	void initPlane(int32_t plane);
	void setElementAt(int32_t index, int32_t value);
	static const int32_t PLANEMASK = 0x00030000;
	static const int32_t PLANESHIFT = 16;
	static const int32_t PLANECOUNT = 16;
	static const int32_t CODEPOINTMASK = 0x0000FFFF;
	static const int32_t UNICODECOUNT = 0x00010000;
	static const int32_t BLOCKSHIFT = 7;
	static const int32_t BLOCKCOUNT = (1 << BLOCKSHIFT);
	static const int32_t INDEXSHIFT = (16 - BLOCKSHIFT);
	static const int32_t INDEXCOUNT = (1 << INDEXSHIFT);
	static const int32_t BLOCKMASK = 127; // BLOCKCOUNT - 1
	int32_t defaultValue = 0;
	$Array<int32_t, 2>* values = nullptr;
	$Array<int16_t, 2>* indices = nullptr;
	bool isCompact = false;
	$Array<bool, 2>* blockTouched = nullptr;
	$booleans* planeTouched = nullptr;
};

	} // text
} // sun

#pragma pop_macro("BLOCKCOUNT")
#pragma pop_macro("BLOCKMASK")
#pragma pop_macro("BLOCKSHIFT")
#pragma pop_macro("CODEPOINTMASK")
#pragma pop_macro("INDEXCOUNT")
#pragma pop_macro("INDEXSHIFT")
#pragma pop_macro("PLANECOUNT")
#pragma pop_macro("PLANEMASK")
#pragma pop_macro("PLANESHIFT")
#pragma pop_macro("UNICODECOUNT")

#endif // _sun_text_UCompactIntArray_h_