#ifndef _java_util_stream_StreamOpFlag$Type_h_
#define _java_util_stream_StreamOpFlag$Type_h_
//$ class java.util.stream.StreamOpFlag$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("OP")
#undef OP
#pragma push_macro("SPLITERATOR")
#undef SPLITERATOR
#pragma push_macro("STREAM")
#undef STREAM
#pragma push_macro("TERMINAL_OP")
#undef TERMINAL_OP
#pragma push_macro("UPSTREAM_TERMINAL_OP")
#undef UPSTREAM_TERMINAL_OP

namespace java {
	namespace util {
		namespace stream {

class StreamOpFlag$Type : public ::java::lang::Enum {
	$class(StreamOpFlag$Type, $PRELOAD, ::java::lang::Enum)
public:
	StreamOpFlag$Type();
	static $Array<::java::util::stream::StreamOpFlag$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::util::stream::StreamOpFlag$Type* valueOf($String* name);
	static $Array<::java::util::stream::StreamOpFlag$Type>* values();
	static ::java::util::stream::StreamOpFlag$Type* SPLITERATOR;
	static ::java::util::stream::StreamOpFlag$Type* STREAM;
	static ::java::util::stream::StreamOpFlag$Type* OP;
	static ::java::util::stream::StreamOpFlag$Type* TERMINAL_OP;
	static ::java::util::stream::StreamOpFlag$Type* UPSTREAM_TERMINAL_OP;
	static $Array<::java::util::stream::StreamOpFlag$Type>* $VALUES;
};

		} // stream
	} // util
} // java

#pragma pop_macro("OP")
#pragma pop_macro("SPLITERATOR")
#pragma pop_macro("STREAM")
#pragma pop_macro("TERMINAL_OP")
#pragma pop_macro("UPSTREAM_TERMINAL_OP")

#endif // _java_util_stream_StreamOpFlag$Type_h_