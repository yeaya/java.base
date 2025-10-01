#ifndef _java_util_stream_Nodes$ToArrayTask$OfRef_h_
#define _java_util_stream_Nodes$ToArrayTask$OfRef_h_
//$ class java.util.stream.Nodes$ToArrayTask$OfRef
//$ extends java.util.stream.Nodes$ToArrayTask

#include <java/lang/Array.h>
#include <java/util/stream/Nodes$ToArrayTask.h>

namespace java {
	namespace util {
		namespace stream {
			class Node;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$ToArrayTask$OfRef : public ::java::util::stream::Nodes$ToArrayTask {
	$class(Nodes$ToArrayTask$OfRef, $NO_CLASS_INIT, ::java::util::stream::Nodes$ToArrayTask)
public:
	Nodes$ToArrayTask$OfRef();
	void init$(::java::util::stream::Node* node, $ObjectArray* array, int32_t offset);
	void init$(::java::util::stream::Nodes$ToArrayTask$OfRef* parent, ::java::util::stream::Node* node, int32_t offset);
	virtual void copyNodeToArray() override;
	virtual ::java::util::stream::Nodes$ToArrayTask$OfRef* makeChild(int32_t childIndex, int32_t offset) override;
	$ObjectArray* array = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$ToArrayTask$OfRef_h_