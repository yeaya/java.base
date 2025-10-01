#ifndef _java_util_stream_Nodes$CollectorTask$OfRef_h_
#define _java_util_stream_Nodes$CollectorTask$OfRef_h_
//$ class java.util.stream.Nodes$CollectorTask$OfRef
//$ extends java.util.stream.Nodes$CollectorTask

#include <java/util/stream/Nodes$CollectorTask.h>

namespace java {
	namespace util {
		class Spliterator;
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
			class Node$Builder;
			class PipelineHelper;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$CollectorTask$OfRef : public ::java::util::stream::Nodes$CollectorTask {
	$class(Nodes$CollectorTask$OfRef, $NO_CLASS_INIT, ::java::util::stream::Nodes$CollectorTask)
public:
	Nodes$CollectorTask$OfRef();
	void init$(::java::util::stream::PipelineHelper* helper, ::java::util::function::IntFunction* generator, ::java::util::Spliterator* spliterator);
	virtual $Object* doLeaf() override;
	static ::java::util::stream::Node$Builder* lambda$new$0(::java::util::function::IntFunction* generator, int64_t s);
	virtual ::java::util::stream::Nodes$CollectorTask* makeChild(::java::util::Spliterator* spliterator) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$CollectorTask$OfRef_h_