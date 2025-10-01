#ifndef _java_util_stream_IntPipeline$Head_h_
#define _java_util_stream_IntPipeline$Head_h_
//$ class java.util.stream.IntPipeline$Head
//$ extends java.util.stream.IntPipeline

#include <java/util/stream/IntPipeline.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
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

class IntPipeline$Head : public ::java::util::stream::IntPipeline {
	$class(IntPipeline$Head, $NO_CLASS_INIT, ::java::util::stream::IntPipeline)
public:
	IntPipeline$Head();
	void init$(::java::util::function::Supplier* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::Spliterator* source, int32_t sourceFlags, bool parallel);
	virtual void forEach(::java::util::function::IntConsumer* action) override;
	virtual void forEachOrdered(::java::util::function::IntConsumer* action) override;
	virtual ::java::util::Iterator* iterator();
	virtual ::java::util::Spliterator* lazySpliterator(::java::util::function::Supplier* supplier);
	virtual bool opIsStateful() override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::stream::BaseStream* parallel() override;
	virtual ::java::util::stream::BaseStream* sequential() override;
	virtual ::java::util::Spliterator* spliterator();
	virtual ::java::util::stream::BaseStream* unordered() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$Head_h_