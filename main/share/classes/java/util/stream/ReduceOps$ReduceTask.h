#ifndef _java_util_stream_ReduceOps$ReduceTask_h_
#define _java_util_stream_ReduceOps$ReduceTask_h_
//$ class java.util.stream.ReduceOps$ReduceTask
//$ extends java.util.stream.AbstractTask

#include <java/util/stream/AbstractTask.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountedCompleter;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class PipelineHelper;
			class ReduceOps$ReduceOp;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$ReduceTask : public ::java::util::stream::AbstractTask {
	$class(ReduceOps$ReduceTask, $NO_CLASS_INIT, ::java::util::stream::AbstractTask)
public:
	ReduceOps$ReduceTask();
	void init$(::java::util::stream::ReduceOps$ReduceOp* op, ::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator);
	void init$(::java::util::stream::ReduceOps$ReduceTask* parent, ::java::util::Spliterator* spliterator);
	virtual $Object* doLeaf() override;
	virtual ::java::util::stream::ReduceOps$ReduceTask* makeChild(::java::util::Spliterator* spliterator) override;
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* caller) override;
	::java::util::stream::ReduceOps$ReduceOp* op = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$ReduceTask_h_