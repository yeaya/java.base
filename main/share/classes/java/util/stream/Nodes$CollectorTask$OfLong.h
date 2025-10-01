#ifndef _java_util_stream_Nodes$CollectorTask$OfLong_h_
#define _java_util_stream_Nodes$CollectorTask$OfLong_h_
//$ class java.util.stream.Nodes$CollectorTask$OfLong
//$ extends java.util.stream.Nodes$CollectorTask

#include <java/util/stream/Nodes$CollectorTask.h>

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

class Nodes$CollectorTask$OfLong : public ::java::util::stream::Nodes$CollectorTask {
	$class(Nodes$CollectorTask$OfLong, $NO_CLASS_INIT, ::java::util::stream::Nodes$CollectorTask)
public:
	Nodes$CollectorTask$OfLong();
	void init$(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator);
	virtual $Object* doLeaf() override;
	virtual ::java::util::stream::Nodes$CollectorTask* makeChild(::java::util::Spliterator* spliterator) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$CollectorTask$OfLong_h_