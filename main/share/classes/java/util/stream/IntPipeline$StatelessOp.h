#ifndef _java_util_stream_IntPipeline$StatelessOp_h_
#define _java_util_stream_IntPipeline$StatelessOp_h_
//$ class java.util.stream.IntPipeline$StatelessOp
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
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class BaseStream;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class IntPipeline$StatelessOp : public ::java::util::stream::IntPipeline {
	$class(IntPipeline$StatelessOp, 0, ::java::util::stream::IntPipeline)
public:
	IntPipeline$StatelessOp();
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags);
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::Spliterator* lazySpliterator(::java::util::function::Supplier* supplier) override;
	virtual bool opIsStateful() override;
	virtual ::java::util::stream::BaseStream* parallel() override;
	virtual ::java::util::stream::BaseStream* sequential() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::BaseStream* unordered() override;
	static bool $assertionsDisabled;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$StatelessOp_h_