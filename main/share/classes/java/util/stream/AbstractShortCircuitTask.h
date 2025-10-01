#ifndef _java_util_stream_AbstractShortCircuitTask_h_
#define _java_util_stream_AbstractShortCircuitTask_h_
//$ class java.util.stream.AbstractShortCircuitTask
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
			namespace atomic {
				class AtomicReference;
			}
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

class AbstractShortCircuitTask : public ::java::util::stream::AbstractTask {
	$class(AbstractShortCircuitTask, $NO_CLASS_INIT, ::java::util::stream::AbstractTask)
public:
	AbstractShortCircuitTask();
	using ::java::util::stream::AbstractTask::cancel;
	void init$(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator);
	void init$(::java::util::stream::AbstractShortCircuitTask* parent, ::java::util::Spliterator* spliterator);
	virtual void cancel();
	virtual void cancelLaterNodes();
	virtual void compute() override;
	virtual $Object* getEmptyResult() {return nullptr;}
	virtual $Object* getLocalResult() override;
	virtual $Object* getRawResult() override;
	virtual void setLocalResult(Object$* localResult) override;
	virtual void shortCircuit(Object$* result);
	virtual bool taskCanceled();
	::java::util::concurrent::atomic::AtomicReference* sharedResult = nullptr;
	$volatile(bool) canceled = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_AbstractShortCircuitTask_h_