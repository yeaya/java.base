#ifndef _java_util_stream_Nodes$SizedCollectorTask$OfRef_h_
#define _java_util_stream_Nodes$SizedCollectorTask$OfRef_h_
//$ class java.util.stream.Nodes$SizedCollectorTask$OfRef
//$ extends java.util.stream.Nodes$SizedCollectorTask

#include <java/lang/Array.h>
#include <java/util/stream/Nodes$SizedCollectorTask.h>

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

class Nodes$SizedCollectorTask$OfRef : public ::java::util::stream::Nodes$SizedCollectorTask {
	$class(Nodes$SizedCollectorTask$OfRef, $NO_CLASS_INIT, ::java::util::stream::Nodes$SizedCollectorTask)
public:
	Nodes$SizedCollectorTask$OfRef();
	using ::java::util::stream::Nodes$SizedCollectorTask::accept;
	void init$(::java::util::Spliterator* spliterator, ::java::util::stream::PipelineHelper* helper, $ObjectArray* array);
	void init$(::java::util::stream::Nodes$SizedCollectorTask$OfRef* parent, ::java::util::Spliterator* spliterator, int64_t offset, int64_t length);
	virtual void accept(Object$* value) override;
	virtual ::java::util::stream::Nodes$SizedCollectorTask$OfRef* makeChild(::java::util::Spliterator* spliterator, int64_t offset, int64_t size) override;
	$ObjectArray* array = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$SizedCollectorTask$OfRef_h_