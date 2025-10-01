#ifndef _java_util_stream_Nodes$DoubleArrayNode_h_
#define _java_util_stream_Nodes$DoubleArrayNode_h_
//$ class java.util.stream.Nodes$DoubleArrayNode
//$ extends java.util.stream.Node$OfDouble

#include <java/lang/Array.h>
#include <java/util/stream/Node$OfDouble.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$DoubleArrayNode : public ::java::util::stream::Node$OfDouble {
	$class(Nodes$DoubleArrayNode, $NO_CLASS_INIT, ::java::util::stream::Node$OfDouble)
public:
	Nodes$DoubleArrayNode();
	using ::java::util::stream::Node$OfDouble::forEach;
	using ::java::util::stream::Node$OfDouble::copyInto;
	void init$(int64_t size);
	void init$($doubles* array);
	virtual $Object* asPrimitiveArray() override;
	virtual void copyInto($doubles* dest, int32_t destOffset);
	virtual void copyInto(Object$* dest, int32_t destOffset) override;
	virtual int64_t count() override;
	virtual void forEach(::java::util::function::DoubleConsumer* consumer);
	virtual void forEach(Object$* consumer) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	$doubles* array = nullptr;
	int32_t curSize = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$DoubleArrayNode_h_