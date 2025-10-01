#ifndef _java_util_stream_Nodes$InternalNodeSpliterator$OfPrimitive_h_
#define _java_util_stream_Nodes$InternalNodeSpliterator$OfPrimitive_h_
//$ class java.util.stream.Nodes$InternalNodeSpliterator$OfPrimitive
//$ extends java.util.stream.Nodes$InternalNodeSpliterator
//$ implements java.util.Spliterator$OfPrimitive

#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/stream/Nodes$InternalNodeSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Node$OfPrimitive;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$InternalNodeSpliterator$OfPrimitive : public ::java::util::stream::Nodes$InternalNodeSpliterator, public ::java::util::Spliterator$OfPrimitive {
	$class(Nodes$InternalNodeSpliterator$OfPrimitive, $NO_CLASS_INIT, ::java::util::stream::Nodes$InternalNodeSpliterator, ::java::util::Spliterator$OfPrimitive)
public:
	Nodes$InternalNodeSpliterator$OfPrimitive();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::stream::Node$OfPrimitive* cur);
	virtual void forEachRemaining(Object$* consumer) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override {return false;}
	virtual bool tryAdvance(Object$* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$InternalNodeSpliterator$OfPrimitive_h_