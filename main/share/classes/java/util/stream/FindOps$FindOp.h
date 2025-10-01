#ifndef _java_util_stream_FindOps$FindOp_h_
#define _java_util_stream_FindOps$FindOp_h_
//$ class java.util.stream.FindOps$FindOp
//$ extends java.util.stream.TerminalOp

#include <java/util/stream/TerminalOp.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class PipelineHelper;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class FindOps$FindOp : public ::java::util::stream::TerminalOp {
	$class(FindOps$FindOp, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::TerminalOp)
public:
	FindOps$FindOp();
	void init$(bool mustFindFirst, ::java::util::stream::StreamShape* shape, Object$* emptyValue, ::java::util::function::Predicate* presentPredicate, ::java::util::function::Supplier* sinkSupplier);
	virtual $Object* evaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* evaluateSequential(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual int32_t getOpFlags() override;
	virtual ::java::util::stream::StreamShape* inputShape() override;
	::java::util::stream::StreamShape* shape = nullptr;
	int32_t opFlags = 0;
	$Object* emptyValue = nullptr;
	::java::util::function::Predicate* presentPredicate = nullptr;
	::java::util::function::Supplier* sinkSupplier = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_FindOps$FindOp_h_