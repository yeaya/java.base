#ifndef _java_util_stream_WhileOps$DropWhileTask_h_
#define _java_util_stream_WhileOps$DropWhileTask_h_
//$ class java.util.stream.WhileOps$DropWhileTask
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

class WhileOps$DropWhileTask : public ::java::util::stream::AbstractTask {
	$class(WhileOps$DropWhileTask, 0, ::java::util::stream::AbstractTask)
public:
	WhileOps$DropWhileTask();
	void init$(::java::util::stream::AbstractPipeline* op, ::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator);
	void init$(::java::util::stream::WhileOps$DropWhileTask* parent, ::java::util::Spliterator* spliterator);
	virtual $Object* doLeaf() override;
	::java::util::stream::Node* doTruncate(::java::util::stream::Node* input);
	virtual ::java::util::stream::WhileOps$DropWhileTask* makeChild(::java::util::Spliterator* spliterator) override;
	::java::util::stream::Node* merge();
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* caller) override;
	static bool $assertionsDisabled;
	::java::util::stream::AbstractPipeline* op = nullptr;
	::java::util::function::IntFunction* generator = nullptr;
	bool isOrdered = false;
	int64_t thisNodeSize = 0;
	int64_t index = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$DropWhileTask_h_