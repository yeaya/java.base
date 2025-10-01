#ifndef _java_util_stream_Node$OfDouble_h_
#define _java_util_stream_Node$OfDouble_h_
//$ interface java.util.stream.Node$OfDouble
//$ extends java.util.stream.Node$OfPrimitive

#include <java/lang/Array.h>
#include <java/util/stream/Node$OfPrimitive.h>

namespace java {
	namespace lang {
		class Double;
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

class Node$OfDouble : public ::java::util::stream::Node$OfPrimitive {
	$interface(Node$OfDouble, $NO_CLASS_INIT, ::java::util::stream::Node$OfPrimitive)
public:
	using ::java::util::stream::Node$OfPrimitive::copyInto;
	virtual void copyInto($Array<::java::lang::Double>* boxed, int32_t offset);
	virtual void copyInto($ObjectArray* boxed, int32_t offset) override;
	using ::java::util::stream::Node$OfPrimitive::forEach;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::stream::StreamShape* getShape() override;
	static void lambda$truncate$0(double e);
	virtual $Object* newArray(int32_t count) override;
	virtual ::java::util::stream::Node$OfDouble* truncate(int64_t from, int64_t to, ::java::util::function::IntFunction* generator) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Node$OfDouble_h_