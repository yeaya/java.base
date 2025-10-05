#ifndef _java_util_stream_DoublePipeline$Head_h_
#define _java_util_stream_DoublePipeline$Head_h_
//$ class java.util.stream.DoublePipeline$Head
//$ extends java.util.stream.DoublePipeline

#include <java/util/stream/DoublePipeline.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
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

class DoublePipeline$Head : public ::java::util::stream::DoublePipeline {
	$class(DoublePipeline$Head, $NO_CLASS_INIT, ::java::util::stream::DoublePipeline)
public:
	DoublePipeline$Head();
	void init$(::java::util::function::Supplier* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::Spliterator* source, int32_t sourceFlags, bool parallel);
	virtual void forEach(::java::util::function::DoubleConsumer* consumer) override;
	virtual void forEachOrdered(::java::util::function::DoubleConsumer* consumer) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::Spliterator* lazySpliterator(::java::util::function::Supplier* supplier) override;
	virtual bool opIsStateful() override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::stream::BaseStream* parallel() override;
	virtual ::java::util::stream::BaseStream* sequential() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::BaseStream* unordered() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoublePipeline$Head_h_