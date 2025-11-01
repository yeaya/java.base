#ifndef _java_util_TreeSet_h_
#define _java_util_TreeSet_h_
//$ class java.util.TreeSet
//$ extends java.util.AbstractSet
//$ implements java.util.NavigableSet,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractSet.h>
#include <java/util/NavigableSet.h>

#pragma push_macro("PRESENT")
#undef PRESENT

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class Iterator;
		class NavigableMap;
		class SortedSet;
		class Spliterator;
	}
}

namespace java {
	namespace util {

class $import TreeSet : public ::java::util::AbstractSet, public ::java::util::NavigableSet, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(TreeSet, 0, ::java::util::AbstractSet, ::java::util::NavigableSet, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	TreeSet();
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::NavigableMap* m);
	void init$();
	void init$(::java::util::Comparator* comparator);
	void init$(::java::util::Collection* c);
	void init$(::java::util::SortedSet* s);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual $Object* ceiling(Object$* e) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual ::java::util::Comparator* comparator() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* descendingIterator() override;
	virtual ::java::util::NavigableSet* descendingSet() override;
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
	void readObject(::java::io::ObjectInputStream* s);
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
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::util::NavigableMap* m = nullptr;
	static $Object* PRESENT;
	static const int64_t serialVersionUID = (int64_t)0xDD98509395ED875B;
};

	} // util
} // java

#pragma pop_macro("PRESENT")

#endif // _java_util_TreeSet_h_