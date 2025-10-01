#ifndef _java_util_stream_Node$OfLong_h_
#define _java_util_stream_Node$OfLong_h_
//$ interface java.util.stream.Node$OfLong
//$ extends java.util.stream.Node$OfPrimitive

#include <java/lang/Array.h>
#include <java/util/stream/Node$OfPrimitive.h>

namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class IntFunction;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Node$OfLong : public ::java::util::stream::Node$OfPrimitive {
	$interface(Node$OfLong, $NO_CLASS_INIT, ::java::util::stream::Node$OfPrimitive)
public:
	using ::java::util::stream::Node$OfPrimitive::copyInto;
	virtual void copyInto($Array<::java::lang::Long>* boxed, int32_t offset);
	virtual void copyInto($ObjectArray* boxed, int32_t offset) override;
	using ::java::util::stream::Node$OfPrimitive::forEach;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::stream::StreamShape* getShape() override;
	static void lambda$truncate$0(int64_t e);
	virtual $Object* newArray(int32_t count) override;
	virtual ::java::util::stream::Node$OfLong* truncate(int64_t from, int64_t to, ::java::util::function::IntFunction* generator) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Node$OfLong_h_