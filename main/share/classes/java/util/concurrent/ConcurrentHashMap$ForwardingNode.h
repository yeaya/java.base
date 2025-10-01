#ifndef _java_util_concurrent_ConcurrentHashMap$ForwardingNode_h_
#define _java_util_concurrent_ConcurrentHashMap$ForwardingNode_h_
//$ class java.util.concurrent.ConcurrentHashMap$ForwardingNode
//$ extends java.util.concurrent.ConcurrentHashMap$Node

#include <java/lang/Array.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$ForwardingNode : public ::java::util::concurrent::ConcurrentHashMap$Node {
	$class(ConcurrentHashMap$ForwardingNode, $PRELOAD | $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$Node)
public:
	ConcurrentHashMap$ForwardingNode();
	void init$($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab);
	virtual ::java::util::concurrent::ConcurrentHashMap$Node* find(int32_t h, Object$* k) override;
	$Array<::java::util::concurrent::ConcurrentHashMap$Node>* nextTable = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$ForwardingNode_h_