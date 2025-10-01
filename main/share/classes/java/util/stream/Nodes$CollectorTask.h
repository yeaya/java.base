#ifndef _java_util_stream_Nodes$CollectorTask_h_
#define _java_util_stream_Nodes$CollectorTask_h_
//$ class java.util.stream.Nodes$CollectorTask
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
			class BinaryOperator;
			class LongFunction;
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

class Nodes$CollectorTask : public ::java::util::stream::AbstractTask {
	$class(Nodes$CollectorTask, $NO_CLASS_INIT, ::java::util::stream::AbstractTask)
public:
	Nodes$CollectorTask();
	void init$(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::LongFunction* builderFactory, ::java::util::function::BinaryOperator* concFactory);
	void init$(::java::util::stream::Nodes$CollectorTask* parent, ::java::util::Spliterator* spliterator);
	virtual $Object* doLeaf() override;
	virtual ::java::util::stream::Nodes$CollectorTask* makeChild(::java::util::Spliterator* spliterator) override;
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* caller) override;
	::java::util::stream::PipelineHelper* helper = nullptr;
	::java::util::function::LongFunction* builderFactory = nullptr;
	::java::util::function::BinaryOperator* concFactory = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$CollectorTask_h_