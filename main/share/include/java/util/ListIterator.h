#ifndef _java_util_ListIterator_h_
#define _java_util_ListIterator_h_
//$ interface java.util.ListIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {

class $import ListIterator : public ::java::util::Iterator {
	$interface(ListIterator, $PRELOAD | $NO_CLASS_INIT, ::java::util::Iterator)
public:
	virtual void add(Object$* e) {}
	virtual bool hasNext() override {return false;}
	virtual bool hasPrevious() {return false;}
	virtual $Object* next() override {return nullptr;}
	virtual int32_t nextIndex() {return 0;}
	virtual $Object* previous() {return nullptr;}
	virtual int32_t previousIndex() {return 0;}
	virtual void remove() override {}
	virtual void set(Object$* e) {}
};

	} // util
} // java

#endif // _java_util_ListIterator_h_