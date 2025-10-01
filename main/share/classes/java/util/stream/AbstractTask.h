#ifndef _java_util_stream_AbstractTask_h_
#define _java_util_stream_AbstractTask_h_
//$ class java.util.stream.AbstractTask
//$ extends java.util.concurrent.CountedCompleter

#include <java/util/concurrent/CountedCompleter.h>

#pragma push_macro("LEAF_TARGET")
#undef LEAF_TARGET

namespace java {
	namespace util {
		class Spliterator;
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

class AbstractTask : public ::java::util::concurrent::CountedCompleter {
	$class(AbstractTask, 0, ::java::util::concurrent::CountedCompleter)
public:
	AbstractTask();
	void init$(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator);
	void init$(::java::util::stream::AbstractTask* parent, ::java::util::Spliterator* spliterator);
	virtual void compute() override;
	virtual $Object* doLeaf() {return nullptr;}
	static int32_t getLeafTarget();
	virtual $Object* getLocalResult();
	virtual ::java::util::stream::AbstractTask* getParent();
	virtual $Object* getRawResult() override;
	int64_t getTargetSize(int64_t sizeEstimate);
	virtual bool isLeaf();
	virtual bool isLeftmostNode();
	virtual bool isRoot();
	virtual ::java::util::stream::AbstractTask* makeChild(::java::util::Spliterator* spliterator) {return nullptr;}
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* caller) override;
	virtual void setLocalResult(Object$* localResult);
	virtual void setRawResult(Object$* result) override;
	static int64_t suggestTargetSize(int64_t sizeEstimate);
	static int32_t LEAF_TARGET;
	::java::util::stream::PipelineHelper* helper = nullptr;
	::java::util::Spliterator* spliterator = nullptr;
	int64_t targetSize = 0;
	::java::util::stream::AbstractTask* leftChild = nullptr;
	::java::util::stream::AbstractTask* rightChild = nullptr;
	$Object* localResult = nullptr;
};

		} // stream
	} // util
} // java

#pragma pop_macro("LEAF_TARGET")

#endif // _java_util_stream_AbstractTask_h_