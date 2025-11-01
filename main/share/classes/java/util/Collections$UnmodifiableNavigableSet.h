#ifndef _java_util_Collections$UnmodifiableNavigableSet_h_
#define _java_util_Collections$UnmodifiableNavigableSet_h_
//$ class java.util.Collections$UnmodifiableNavigableSet
//$ extends java.util.Collections$UnmodifiableSortedSet
//$ implements java.util.NavigableSet

#include <java/util/Collections$UnmodifiableSortedSet.h>
#include <java/util/NavigableSet.h>

#pragma push_macro("EMPTY_NAVIGABLE_SET")
#undef EMPTY_NAVIGABLE_SET

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace util {

class $export Collections$UnmodifiableNavigableSet : public ::java::util::Collections$UnmodifiableSortedSet, public ::java::util::NavigableSet {
	$class(Collections$UnmodifiableNavigableSet, 0, ::java::util::Collections$UnmodifiableSortedSet, ::java::util::NavigableSet)
public:
	Collections$UnmodifiableNavigableSet();
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* coll) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual ::java::util::Comparator* comparator() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* coll) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual $Object* first() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	virtual ::java::util::SortedSet* headSet(Object$* toElement) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual $Object* last() override;
	void init$(::java::util::NavigableSet* s);
	virtual $Object* ceiling(Object$* e) override;
	virtual ::java::util::Iterator* descendingIterator() override;
	virtual ::java::util::NavigableSet* descendingSet() override;
	virtual $Object* floor(Object$* e) override;
	virtual ::java::util::NavigableSet* headSet(Object$* toElement, bool inclusive) override;
	virtual $Object* higher(Object$* e) override;
	virtual $Object* lower(Object$* e) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* pollFirst() override;
	virtual $Object* pollLast() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* coll) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* coll) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::SortedSet* subSet(Object$* fromElement, Object$* toElement) override;
	virtual ::java::util::NavigableSet* subSet(Object$* fromElement, bool fromInclusive, Object$* toElement, bool toInclusive) override;
	virtual ::java::util::SortedSet* tailSet(Object$* fromElement) override;
	virtual ::java::util::NavigableSet* tailSet(Object$* fromElement, bool inclusive) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* f) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xAC5A33CB96748287;
	static ::java::util::NavigableSet* EMPTY_NAVIGABLE_SET;
	::java::util::NavigableSet* ns = nullptr;
};

	} // util
} // java

#pragma pop_macro("EMPTY_NAVIGABLE_SET")

#endif // _java_util_Collections$UnmodifiableNavigableSet_h_