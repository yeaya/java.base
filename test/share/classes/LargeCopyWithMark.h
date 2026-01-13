#ifndef _LargeCopyWithMark_h_
#define _LargeCopyWithMark_h_
//$ class LargeCopyWithMark
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BIS_BUFF_SIZE")
#undef BIS_BUFF_SIZE
#pragma push_macro("BUFF_SIZE")
#undef BUFF_SIZE
#pragma push_macro("BYTES_TO_COPY")
#undef BYTES_TO_COPY

class $export LargeCopyWithMark : public ::java::lang::Object {
	$class(LargeCopyWithMark, 0, ::java::lang::Object)
public:
	LargeCopyWithMark();
	void init$();
	static void main($StringArray* args);
	static const int32_t BUFF_SIZE = 8192;
	static const int32_t BIS_BUFF_SIZE = 0x40000063; // Integer.MAX_VALUE / 2 + 100
	static const int64_t BYTES_TO_COPY = 4294967294; // 2L * Integer.MAX_VALUE
};

#pragma pop_macro("BIS_BUFF_SIZE")
#pragma pop_macro("BUFF_SIZE")
#pragma pop_macro("BYTES_TO_COPY")

#endif // _LargeCopyWithMark_h_