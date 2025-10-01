#ifndef _java_util_stream_SliceOps$SliceTask_h_
#define _java_util_stream_SliceOps$SliceTask_h_
//$ class java.util.stream.SliceOps$SliceTask
//$ extends java.util.stream.AbstractShortCircuitTask

#include <java/util/stream/AbstractShortCircuitTask.h>

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
		namespace function {
			class IntFunction;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class Node;
			class PipelineHelper;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SliceOps$SliceTask : public ::java::util::stream::AbstractShortCircuitTask {
	$class(SliceOps$SliceTask, $NO_CLASS_INIT, ::java::util::stream::AbstractShortCircuitTask)
public:
	SliceOps$SliceTask();
	using ::java::util::stream::AbstractShortCircuitTask::cancel;
	void init$(::java::util::stream::AbstractPipeline* op, ::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator, int64_t offset, int64_t size);
	void init$(::java::util::stream::SliceOps$SliceTask* parent, ::java::util::Spliterator* spliterator);
	virtual void cancel() override;
	int64_t completedSize(int64_t target);
	virtual $Object* doLeaf() override;
	::java::util::stream::Node* doTruncate(::java::util::stream::Node* input);
	virtual $Object* getEmptyResult() override;
	bool isLeftCompleted(int64_t target);
	virtual ::java::util::stream::SliceOps$SliceTask* makeChild(::java::util::Spliterator* spliterator) override;
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* caller) override;
	::java::util::stream::AbstractPipeline* op = nullptr;
	::java::util::function::IntFunction* generator = nullptr;
	int64_t targetOffset = 0;
	int64_t targetSize = 0;
	int64_t thisNodeSize = 0;
	$volatile(bool) completed = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SliceOps$SliceTask_h_