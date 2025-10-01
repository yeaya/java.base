#ifndef _java_util_stream_ReduceOps$4_h_
#define _java_util_stream_ReduceOps$4_h_
//$ class java.util.stream.ReduceOps$4
//$ extends java.util.stream.ReduceOps$ReduceOp

#include <java/util/stream/ReduceOps$ReduceOp.h>

namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class ReduceOps$AccumulatingSink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$4 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$4, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$4();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::function::BiConsumer* val$reducer, ::java::util::function::BiConsumer* val$accumulator, ::java::util::function::Supplier* val$seedFactory);
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
	::java::util::function::Supplier* val$seedFactory = nullptr;
	::java::util::function::BiConsumer* val$accumulator = nullptr;
	::java::util::function::BiConsumer* val$reducer = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$4_h_