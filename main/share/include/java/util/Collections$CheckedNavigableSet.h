#ifndef _java_util_Collections$CheckedNavigableSet_h_
#define _java_util_Collections$CheckedNavigableSet_h_
//$ class java.util.Collections$CheckedNavigableSet
//$ extends java.util.Collections$CheckedSortedSet
//$ implements java.util.NavigableSet

#include <java/util/Collections$CheckedSortedSet.h>
#include <java/util/NavigableSet.h>

namespace java {
	namespace util {
		class Iterator;
		class SortedSet;
	}
}

namespace java {
	namespace util {

class $import Collections$CheckedNavigableSet : public ::java::util::Collections$CheckedSortedSet, public ::java::util::NavigableSet {
	$class(Collections$CheckedNavigableSet, $NO_CLASS_INIT, ::java::util::Collections$CheckedSortedSet, ::java::util::NavigableSet)
public:
	Collections$CheckedNavigableSet();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	void init$(::java::util::NavigableSet* s, $Class* type);
	virtual $Object* ceiling(Object$* e) override;
	virtual ::java::util::Iterator* descendingIterator() override;
	virtual ::java::util::NavigableSet* descendingSet() override;
	virtual $Object* floor(Object$* e) override;
	virtual ::java::util::SortedSet* headSet(Object$* toElement) override;
	virtual ::java::util::NavigableSet* headSet(Object$* toElement, bool inclusive) override;
	virtual $Object* higher(Object$* e) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual $Object* last() override;
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
	static const int64_t serialVersionUID = (int64_t)0xB4A7E3F3BBBED836;
	::java::util::NavigableSet* ns = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedNavigableSet_h_