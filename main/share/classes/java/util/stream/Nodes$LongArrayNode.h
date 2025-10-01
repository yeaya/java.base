#ifndef _java_util_stream_Nodes$LongArrayNode_h_
#define _java_util_stream_Nodes$LongArrayNode_h_
//$ class java.util.stream.Nodes$LongArrayNode
//$ extends java.util.stream.Node$OfLong

#include <java/lang/Array.h>
#include <java/util/stream/Node$OfLong.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$LongArrayNode : public ::java::util::stream::Node$OfLong {
	$class(Nodes$LongArrayNode, $NO_CLASS_INIT, ::java::util::stream::Node$OfLong)
public:
	Nodes$LongArrayNode();
	using ::java::util::stream::Node$OfLong::forEach;
	using ::java::util::stream::Node$OfLong::copyInto;
	void init$(int64_t size);
	void init$($longs* array);
	virtual $Object* asPrimitiveArray() override;
	virtual void copyInto($longs* dest, int32_t destOffset);
	virtual void copyInto(Object$* dest, int32_t destOffset) override;
	virtual int64_t count() override;
	virtual void forEach(::java::util::function::LongConsumer* consumer);
	virtual void forEach(Object$* consumer) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	$longs* array = nullptr;
	int32_t curSize = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$LongArrayNode_h_