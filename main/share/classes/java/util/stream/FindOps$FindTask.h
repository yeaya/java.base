#ifndef _java_util_stream_FindOps$FindTask_h_
#define _java_util_stream_FindOps$FindTask_h_
//$ class java.util.stream.FindOps$FindTask
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
		namespace stream {
			class FindOps$FindOp;
			class PipelineHelper;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class FindOps$FindTask : public ::java::util::stream::AbstractShortCircuitTask {
	$class(FindOps$FindTask, $NO_CLASS_INIT, ::java::util::stream::AbstractShortCircuitTask)
public:
	FindOps$FindTask();
	using ::java::util::stream::AbstractShortCircuitTask::cancel;
	void init$(::java::util::stream::FindOps$FindOp* op, bool mustFindFirst, ::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator);
	void init$(::java::util::stream::FindOps$FindTask* parent, ::java::util::Spliterator* spliterator);
	virtual $Object* doLeaf() override;
	void foundResult(Object$* answer);
	virtual $Object* getEmptyResult() override;
	virtual ::java::util::stream::FindOps$FindTask* makeChild(::java::util::Spliterator* spliterator) override;
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* caller) override;
	::java::util::stream::FindOps$FindOp* op = nullptr;
	bool mustFindFirst = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_FindOps$FindTask_h_