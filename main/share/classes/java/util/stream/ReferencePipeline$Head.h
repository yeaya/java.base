#ifndef _java_util_stream_ReferencePipeline$Head_h_
#define _java_util_stream_ReferencePipeline$Head_h_
//$ class java.util.stream.ReferencePipeline$Head
//$ extends java.util.stream.ReferencePipeline

#include <java/util/stream/ReferencePipeline.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class BaseStream;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReferencePipeline$Head : public ::java::util::stream::ReferencePipeline {
	$class(ReferencePipeline$Head, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::ReferencePipeline)
public:
	ReferencePipeline$Head();
	void init$(::java::util::function::Supplier* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::Spliterator* source, int32_t sourceFlags, bool parallel);
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual void forEachOrdered(::java::util::function::Consumer* action) override;
	virtual bool opIsStateful() override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::stream::BaseStream* unordered() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReferencePipeline$Head_h_