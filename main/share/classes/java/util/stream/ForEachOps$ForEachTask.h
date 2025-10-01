#ifndef _java_util_stream_ForEachOps$ForEachTask_h_
#define _java_util_stream_ForEachOps$ForEachTask_h_
//$ class java.util.stream.ForEachOps$ForEachTask
//$ extends java.util.concurrent.CountedCompleter

#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class PipelineHelper;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ForEachOps$ForEachTask : public ::java::util::concurrent::CountedCompleter {
	$class(ForEachOps$ForEachTask, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	ForEachOps$ForEachTask();
	void init$(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::stream::Sink* sink);
	void init$(::java::util::stream::ForEachOps$ForEachTask* parent, ::java::util::Spliterator* spliterator);
	virtual void compute() override;
	::java::util::Spliterator* spliterator = nullptr;
	::java::util::stream::Sink* sink = nullptr;
	::java::util::stream::PipelineHelper* helper = nullptr;
	int64_t targetSize = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ForEachOps$ForEachTask_h_