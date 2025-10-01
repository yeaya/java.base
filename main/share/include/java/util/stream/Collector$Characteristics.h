#ifndef _java_util_stream_Collector$Characteristics_h_
#define _java_util_stream_Collector$Characteristics_h_
//$ class java.util.stream.Collector$Characteristics
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("IDENTITY_FINISH")
#undef IDENTITY_FINISH
#pragma push_macro("UNORDERED")
#undef UNORDERED
#pragma push_macro("CONCURRENT")
#undef CONCURRENT

namespace java {
	namespace util {
		namespace stream {

class $import Collector$Characteristics : public ::java::lang::Enum {
	$class(Collector$Characteristics, $PRELOAD, ::java::lang::Enum)
public:
	Collector$Characteristics();
	static $Array<::java::util::stream::Collector$Characteristics>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::util::stream::Collector$Characteristics* valueOf($String* name);
	static $Array<::java::util::stream::Collector$Characteristics>* values();
	static ::java::util::stream::Collector$Characteristics* CONCURRENT;
	static ::java::util::stream::Collector$Characteristics* UNORDERED;
	static ::java::util::stream::Collector$Characteristics* IDENTITY_FINISH;
	static $Array<::java::util::stream::Collector$Characteristics>* $VALUES;
};

		} // stream
	} // util
} // java

#pragma pop_macro("IDENTITY_FINISH")
#pragma pop_macro("UNORDERED")
#pragma pop_macro("CONCURRENT")

#endif // _java_util_stream_Collector$Characteristics_h_