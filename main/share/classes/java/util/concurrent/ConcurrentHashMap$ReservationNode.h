#ifndef _java_util_concurrent_ConcurrentHashMap$ReservationNode_h_
#define _java_util_concurrent_ConcurrentHashMap$ReservationNode_h_
//$ class java.util.concurrent.ConcurrentHashMap$ReservationNode
//$ extends java.util.concurrent.ConcurrentHashMap$Node

#include <java/util/concurrent/ConcurrentHashMap$Node.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$ReservationNode : public ::java::util::concurrent::ConcurrentHashMap$Node {
	$class(ConcurrentHashMap$ReservationNode, $PRELOAD | $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$Node)
public:
	ConcurrentHashMap$ReservationNode();
	void init$();
	virtual ::java::util::concurrent::ConcurrentHashMap$Node* find(int32_t h, Object$* k) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$ReservationNode_h_