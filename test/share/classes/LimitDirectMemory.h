#ifndef _LimitDirectMemory_h_
#define _LimitDirectMemory_h_
//$ class LimitDirectMemory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("K")
#undef K

class $export LimitDirectMemory : public ::java::lang::Object {
	$class(LimitDirectMemory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LimitDirectMemory();
	void init$();
	static void main($StringArray* args);
	static int32_t parseSize($String* size);
	static bool parseThrow($String* s);
	static const int32_t K = 1024;
};

#pragma pop_macro("K")

#endif // _LimitDirectMemory_h_