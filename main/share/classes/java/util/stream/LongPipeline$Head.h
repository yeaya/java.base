#ifndef _java_util_stream_LongPipeline$Head_h_
#define _java_util_stream_LongPipeline$Head_h_
//$ class java.util.stream.LongPipeline$Head
//$ extends java.util.stream.LongPipeline

#include <java/util/stream/LongPipeline.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
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

class LongPipeline$Head : public ::java::util::stream::LongPipeline {
	$class(LongPipeline$Head, $NO_CLASS_INIT, ::java::util::stream::LongPipeline)
public:
	LongPipeline$Head();
	void init$(::java::util::function::Supplier* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::Spliterator* source, int32_t sourceFlags, bool parallel);
	virtual void forEach(::java::util::function::LongConsumer* action) override;
	virtual void forEachOrdered(::java::util::function::LongConsumer* action) override;
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

#endif // _java_util_stream_LongPipeline$Head_h_