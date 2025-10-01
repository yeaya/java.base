#ifndef _java_util_Queue_h_
#define _java_util_Queue_h_
//$ interface java.util.Queue
//$ extends java.util.Collection

#include <java/util/Collection.h>

namespace java {
	namespace util {

class $import Queue : public ::java::util::Collection {
	$interface(Queue, $PRELOAD | $NO_CLASS_INIT, ::java::util::Collection)
public:
	virtual bool add(Object$* e) override {return false;}
	virtual $Object* element() {return nullptr;}
	virtual bool offer(Object$* e) {return false;}
	virtual $Object* peek() {return nullptr;}
	virtual $Object* poll() {return nullptr;}
	using ::java::util::Collection::remove;
	virtual $Object* remove() {return nullptr;}
};

	} // util
} // java

#endif // _java_util_Queue_h_