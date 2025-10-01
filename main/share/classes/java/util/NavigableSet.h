#ifndef _java_util_NavigableSet_h_
#define _java_util_NavigableSet_h_
//$ interface java.util.NavigableSet
//$ extends java.util.SortedSet

#include <java/util/SortedSet.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace util {

class $export NavigableSet : public ::java::util::SortedSet {
	$interface(NavigableSet, $NO_CLASS_INIT, ::java::util::SortedSet)
public:
	virtual $Object* ceiling(Object$* e) {return nullptr;}
	virtual ::java::util::Iterator* descendingIterator() {return nullptr;}
	virtual ::java::util::NavigableSet* descendingSet() {return nullptr;}
	virtual $Object* floor(Object$* e) {return nullptr;}
	virtual ::java::util::SortedSet* headSet(Object$* toElement) override {return nullptr;}
	virtual ::java::util::NavigableSet* headSet(Object$* toElement, bool inclusive) {return nullptr;}
	virtual $Object* higher(Object$* e) {return nullptr;}
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual $Object* lower(Object$* e) {return nullptr;}
	virtual $Object* pollFirst() {return nullptr;}
	virtual $Object* pollLast() {return nullptr;}
	virtual ::java::util::SortedSet* subSet(Object$* fromElement, Object$* toElement) override {return nullptr;}
	virtual ::java::util::NavigableSet* subSet(Object$* fromElement, bool fromInclusive, Object$* toElement, bool toInclusive) {return nullptr;}
	virtual ::java::util::SortedSet* tailSet(Object$* fromElement) override {return nullptr;}
	virtual ::java::util::NavigableSet* tailSet(Object$* fromElement, bool inclusive) {return nullptr;}
	using ::java::util::SortedSet::toArray;
};

	} // util
} // java

#endif // _java_util_NavigableSet_h_