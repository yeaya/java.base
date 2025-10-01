#ifndef _Unicode_h_
#define _Unicode_h_
//$ class Unicode
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BIG")
#undef BIG
#pragma push_macro("BOM_LOW")
#undef BOM_LOW
#pragma push_macro("BOM_HIGH")
#undef BOM_HIGH
#pragma push_macro("LITTLE")
#undef LITTLE

class $export Unicode : public ::java::lang::Object {
	$class(Unicode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Unicode();
	void init$();
	static void decode($String* enc, int32_t byteOrder, bool markit);
	static void encode($String* enc, int32_t byteOrder, bool markExpected);
	static void fail($String* enc, $String* msg, int32_t e0, int32_t e1, int32_t b0, int32_t b1);
	static void main($StringArray* args);
	static const int32_t BOM_HIGH = 254;
	static const int32_t BOM_LOW = 255;
	static const int32_t BIG = 0;
	static const int32_t LITTLE = 1;
};

#pragma pop_macro("BIG")
#pragma pop_macro("BOM_LOW")
#pragma pop_macro("BOM_HIGH")
#pragma pop_macro("LITTLE")

#endif // _Unicode_h_