#ifndef _java_util_stream_PipelineHelper_h_
#define _java_util_stream_PipelineHelper_h_
//$ class java.util.stream.PipelineHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntFunction;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Node;
			class Node$Builder;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class PipelineHelper : public ::java::lang::Object {
	$class(PipelineHelper, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	PipelineHelper();
	void init$();
	virtual void copyInto(::java::util::stream::Sink* wrappedSink, ::java::util::Spliterator* spliterator) {}
	virtual bool copyIntoWithCancel(::java::util::stream::Sink* wrappedSink, ::java::util::Spliterator* spliterator) {return false;}
	virtual ::java::util::stream::Node* evaluate(::java::util::Spliterator* spliterator, bool flatten, ::java::util::function::IntFunction* generator) {return nullptr;}
	virtual int64_t exactOutputSizeIfKnown(::java::util::Spliterator* spliterator) {return 0;}
	virtual ::java::util::stream::StreamShape* getSourceShape() {return nullptr;}
	virtual int32_t getStreamAndOpFlags() {return 0;}
	virtual ::java::util::stream::Node$Builder* makeNodeBuilder(int64_t exactSizeIfKnown, ::java::util::function::IntFunction* generator) {return nullptr;}
	virtual ::java::util::stream::Sink* wrapAndCopyInto(::java::util::stream::Sink* sink, ::java::util::Spliterator* spliterator) {return nullptr;}
	virtual ::java::util::stream::Sink* wrapSink(::java::util::stream::Sink* sink) {return nullptr;}
	virtual ::java::util::Spliterator* wrapSpliterator(::java::util::Spliterator* spliterator) {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_PipelineHelper_h_