#ifndef _java_util_stream_StreamShape_h_
#define _java_util_stream_StreamShape_h_
//$ class java.util.stream.StreamShape
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DOUBLE_VALUE")
#undef DOUBLE_VALUE
#pragma push_macro("INT_VALUE")
#undef INT_VALUE
#pragma push_macro("LONG_VALUE")
#undef LONG_VALUE
#pragma push_macro("REFERENCE")
#undef REFERENCE

namespace java {
	namespace util {
		namespace stream {

class StreamShape : public ::java::lang::Enum {
	$class(StreamShape, $PRELOAD, ::java::lang::Enum)
public:
	StreamShape();
	static $Array<::java::util::stream::StreamShape>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::util::stream::StreamShape* valueOf($String* name);
	static $Array<::java::util::stream::StreamShape>* values();
	static ::java::util::stream::StreamShape* REFERENCE;
	static ::java::util::stream::StreamShape* INT_VALUE;
	static ::java::util::stream::StreamShape* LONG_VALUE;
	static ::java::util::stream::StreamShape* DOUBLE_VALUE;
	static $Array<::java::util::stream::StreamShape>* $VALUES;
};

		} // stream
	} // util
} // java

#pragma pop_macro("DOUBLE_VALUE")
#pragma pop_macro("INT_VALUE")
#pragma pop_macro("LONG_VALUE")
#pragma pop_macro("REFERENCE")

#endif // _java_util_stream_StreamShape_h_