#ifndef _java_util_stream_Nodes$ToArrayTask_h_
#define _java_util_stream_Nodes$ToArrayTask_h_
//$ class java.util.stream.Nodes$ToArrayTask
//$ extends java.util.concurrent.CountedCompleter

#include <java/util/concurrent/CountedCompleter.h>

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

class Nodes$ToArrayTask : public ::java::util::concurrent::CountedCompleter {
	$class(Nodes$ToArrayTask, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	Nodes$ToArrayTask();
	void init$(::java::util::stream::Node* node, int32_t offset);
	void init$(::java::util::stream::Nodes$ToArrayTask* parent, ::java::util::stream::Node* node, int32_t offset);
	virtual void compute() override;
	virtual void copyNodeToArray() {}
	virtual ::java::util::stream::Nodes$ToArrayTask* makeChild(int32_t childIndex, int32_t offset) {return nullptr;}
	::java::util::stream::Node* node = nullptr;
	int32_t offset = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$ToArrayTask_h_