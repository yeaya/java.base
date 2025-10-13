#ifndef _java_util_ArrayPrefixHelpers_h_
#define _java_util_ArrayPrefixHelpers_h_
//$ class java.util.ArrayPrefixHelpers
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CUMULATE")
#undef CUMULATE
#pragma push_macro("FINISHED")
#undef FINISHED
#pragma push_macro("MIN_PARTITION")
#undef MIN_PARTITION
#pragma push_macro("SUMMED")
#undef SUMMED

namespace java {
	namespace util {

class ArrayPrefixHelpers : public ::java::lang::Object {
	$class(ArrayPrefixHelpers, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ArrayPrefixHelpers();
	void init$();
	static const int32_t CUMULATE = 1;
	static const int32_t SUMMED = 2;
	static const int32_t FINISHED = 4;
	static const int32_t MIN_PARTITION = 16;
};

	} // util
} // java

#pragma pop_macro("CUMULATE")
#pragma pop_macro("FINISHED")
#pragma pop_macro("MIN_PARTITION")
#pragma pop_macro("SUMMED")

#endif // _java_util_ArrayPrefixHelpers_h_