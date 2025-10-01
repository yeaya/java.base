#ifndef _java_util_stream_ForEachOps$ForEachOp$OfRef_h_
#define _java_util_stream_ForEachOps$ForEachOp$OfRef_h_
//$ class java.util.stream.ForEachOps$ForEachOp$OfRef
//$ extends java.util.stream.ForEachOps$ForEachOp

#include <java/util/stream/ForEachOps$ForEachOp.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class PipelineHelper;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ForEachOps$ForEachOp$OfRef : public ::java::util::stream::ForEachOps$ForEachOp {
	$class(ForEachOps$ForEachOp$OfRef, $NO_CLASS_INIT, ::java::util::stream::ForEachOps$ForEachOp)
public:
	ForEachOps$ForEachOp$OfRef();
	using ::java::util::stream::ForEachOps$ForEachOp::accept;
	void init$(::java::util::function::Consumer* consumer, bool ordered);
	virtual void accept(Object$* t) override;
	virtual $Object* evaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* evaluateSequential(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* get() override;
	::java::util::function::Consumer* consumer = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ForEachOps$ForEachOp$OfRef_h_