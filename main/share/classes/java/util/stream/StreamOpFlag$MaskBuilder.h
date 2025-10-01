#ifndef _java_util_stream_StreamOpFlag$MaskBuilder_h_
#define _java_util_stream_StreamOpFlag$MaskBuilder_h_
//$ class java.util.stream.StreamOpFlag$MaskBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class StreamOpFlag$Type;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamOpFlag$MaskBuilder : public ::java::lang::Object {
	$class(StreamOpFlag$MaskBuilder, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	StreamOpFlag$MaskBuilder();
	void init$(::java::util::Map* map);
	virtual ::java::util::Map* build();
	virtual ::java::util::stream::StreamOpFlag$MaskBuilder* clear(::java::util::stream::StreamOpFlag$Type* t);
	virtual ::java::util::stream::StreamOpFlag$MaskBuilder* mask(::java::util::stream::StreamOpFlag$Type* t, ::java::lang::Integer* i);
	virtual ::java::util::stream::StreamOpFlag$MaskBuilder* set(::java::util::stream::StreamOpFlag$Type* t);
	virtual ::java::util::stream::StreamOpFlag$MaskBuilder* setAndClear(::java::util::stream::StreamOpFlag$Type* t);
	::java::util::Map* map = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamOpFlag$MaskBuilder_h_