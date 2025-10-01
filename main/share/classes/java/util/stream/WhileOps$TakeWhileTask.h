#ifndef _java_util_stream_WhileOps$TakeWhileTask_h_
#define _java_util_stream_WhileOps$TakeWhileTask_h_
//$ class java.util.stream.WhileOps$TakeWhileTask
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

class WhileOps$TakeWhileTask : public ::java::util::stream::AbstractShortCircuitTask {
	$class(WhileOps$TakeWhileTask, $NO_CLASS_INIT, ::java::util::stream::AbstractShortCircuitTask)
public:
	WhileOps$TakeWhileTask();
	using ::java::util::stream::AbstractShortCircuitTask::cancel;
	void init$(::java::util::stream::AbstractPipeline* op, ::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator);
	void init$(::java::util::stream::WhileOps$TakeWhileTask* parent, ::java::util::Spliterator* spliterator);
	virtual void cancel() override;
	virtual $Object* doLeaf() override;
	virtual $Object* getEmptyResult() override;
	virtual ::java::util::stream::WhileOps$TakeWhileTask* makeChild(::java::util::Spliterator* spliterator) override;
	::java::util::stream::Node* merge();
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* caller) override;
	::java::util::stream::AbstractPipeline* op = nullptr;
	::java::util::function::IntFunction* generator = nullptr;
	bool isOrdered = false;
	int64_t thisNodeSize = 0;
	bool shortCircuited = false;
	$volatile(bool) completed = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$TakeWhileTask_h_