#ifndef _java_util_stream_ForEachOps$ForEachOrderedTask_h_
#define _java_util_stream_ForEachOps$ForEachOrderedTask_h_
//$ class java.util.stream.ForEachOps$ForEachOrderedTask
//$ extends java.util.concurrent.CountedCompleter

#include <java/lang/Array.h>
#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Node;
			class PipelineHelper;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ForEachOps$ForEachOrderedTask : public ::java::util::concurrent::CountedCompleter {
	$class(ForEachOps$ForEachOrderedTask, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	ForEachOps$ForEachOrderedTask();
	void init$(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::stream::Sink* action);
	void init$(::java::util::stream::ForEachOps$ForEachOrderedTask* parent, ::java::util::Spliterator* spliterator, ::java::util::stream::ForEachOps$ForEachOrderedTask* leftPredecessor);
	virtual void compute() override;
	static void doCompute(::java::util::stream::ForEachOps$ForEachOrderedTask* task);
	static $ObjectArray* lambda$doCompute$0(int32_t size);
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* caller) override;
	::java::util::stream::PipelineHelper* helper = nullptr;
	::java::util::Spliterator* spliterator = nullptr;
	int64_t targetSize = 0;
	::java::util::concurrent::ConcurrentHashMap* completionMap = nullptr;
	::java::util::stream::Sink* action = nullptr;
	::java::util::stream::ForEachOps$ForEachOrderedTask* leftPredecessor = nullptr;
	::java::util::stream::Node* node = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ForEachOps$ForEachOrderedTask_h_