#ifndef _java_util_stream_MatchOps$MatchTask_h_
#define _java_util_stream_MatchOps$MatchTask_h_
//$ class java.util.stream.MatchOps$MatchTask
//$ extends java.util.stream.AbstractShortCircuitTask

#include <java/util/stream/AbstractShortCircuitTask.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class MatchOps$MatchOp;
			class PipelineHelper;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class MatchOps$MatchTask : public ::java::util::stream::AbstractShortCircuitTask {
	$class(MatchOps$MatchTask, $NO_CLASS_INIT, ::java::util::stream::AbstractShortCircuitTask)
public:
	MatchOps$MatchTask();
	using ::java::util::stream::AbstractShortCircuitTask::cancel;
	void init$(::java::util::stream::MatchOps$MatchOp* op, ::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator);
	void init$(::java::util::stream::MatchOps$MatchTask* parent, ::java::util::Spliterator* spliterator);
	virtual $Object* doLeaf() override;
	virtual $Object* getEmptyResult() override;
	virtual ::java::util::stream::MatchOps$MatchTask* makeChild(::java::util::Spliterator* spliterator) override;
	::java::util::stream::MatchOps$MatchOp* op = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_MatchOps$MatchTask_h_