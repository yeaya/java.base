#ifndef _java_util_stream_DoublePipeline$StatelessOp_h_
#define _java_util_stream_DoublePipeline$StatelessOp_h_
//$ class java.util.stream.DoublePipeline$StatelessOp
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

class DoublePipeline$StatelessOp : public ::java::util::stream::DoublePipeline {
	$class(DoublePipeline$StatelessOp, 0, ::java::util::stream::DoublePipeline)
public:
	DoublePipeline$StatelessOp();
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags);
	virtual ::java::util::Iterator* iterator();
	virtual ::java::util::Spliterator* lazySpliterator(::java::util::function::Supplier* supplier);
	virtual bool opIsStateful() override;
	virtual ::java::util::stream::BaseStream* parallel() override;
	virtual ::java::util::stream::BaseStream* sequential() override;
	virtual ::java::util::Spliterator* spliterator();
	virtual ::java::util::stream::BaseStream* unordered() override;
	static bool $assertionsDisabled;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoublePipeline$StatelessOp_h_