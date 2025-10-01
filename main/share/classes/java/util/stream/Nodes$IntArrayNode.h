#ifndef _java_util_stream_Nodes$IntArrayNode_h_
#define _java_util_stream_Nodes$IntArrayNode_h_
//$ class java.util.stream.Nodes$IntArrayNode
//$ extends java.util.stream.Node$OfInt

#include <java/lang/Array.h>
#include <java/util/stream/Node$OfInt.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$IntArrayNode : public ::java::util::stream::Node$OfInt {
	$class(Nodes$IntArrayNode, $NO_CLASS_INIT, ::java::util::stream::Node$OfInt)
public:
	Nodes$IntArrayNode();
	using ::java::util::stream::Node$OfInt::forEach;
	using ::java::util::stream::Node$OfInt::copyInto;
	void init$(int64_t size);
	void init$($ints* array);
	virtual $Object* asPrimitiveArray() override;
	virtual void copyInto($ints* dest, int32_t destOffset);
	virtual void copyInto(Object$* dest, int32_t destOffset) override;
	virtual int64_t count() override;
	virtual void forEach(::java::util::function::IntConsumer* consumer);
	virtual void forEach(Object$* consumer) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	$ints* array = nullptr;
	int32_t curSize = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$IntArrayNode_h_