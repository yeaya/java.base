#ifndef _java_util_concurrent_ConcurrentSkipListMap$KeySet_h_
#define _java_util_concurrent_ConcurrentSkipListMap$KeySet_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$KeySet
//$ extends java.util.AbstractSet
//$ implements java.util.NavigableSet

#include <java/lang/Array.h>
#include <java/util/AbstractSet.h>
#include <java/util/NavigableSet.h>

namespace java {
	namespace util {
		class Comparator;
		class Iterator;
		class SortedSet;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentNavigableMap;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentSkipListMap$KeySet : public ::java::util::AbstractSet, public ::java::util::NavigableSet {
	$class(ConcurrentSkipListMap$KeySet, $NO_CLASS_INIT, ::java::util::AbstractSet, ::java::util::NavigableSet)
public:
	ConcurrentSkipListMap$KeySet();
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::ConcurrentNavigableMap* map);
	virtual $Object* ceiling(Object$* e) override;
	virtual void clear() override;
	virtual ::java::util::Comparator* comparator() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* descendingIterator() override;
	virtual ::java::util::NavigableSet* descendingSet() override;
	virtual bool equals(Object$* o) override;
	virtual $Object* first() override;
	virtual $Object* floor(Object$* e) override;
	virtual ::java::util::NavigableSet* headSet(Object$* toElement, bool inclusive) override;
	virtual ::java::util::SortedSet* headSet(Object$* toElement) override;
	virtual $Object* higher(Object$* e) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual $Object* last() override;
	virtual $Object* lower(Object$* e) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* pollFirst() override;
	virtual $Object* pollLast() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::NavigableSet* subSet(Object$* fromElement, bool fromInclusive, Object$* toElement, bool toInclusive) override;
	virtual ::java::util::SortedSet* subSet(Object$* fromElement, Object$* toElement) override;
	virtual ::java::util::NavigableSet* tailSet(Object$* fromElement, bool inclusive) override;
	virtual ::java::util::SortedSet* tailSet(Object$* fromElement) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	::java::util::concurrent::ConcurrentNavigableMap* m = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$KeySet_h_