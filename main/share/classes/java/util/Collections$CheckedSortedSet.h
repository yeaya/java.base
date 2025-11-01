#ifndef _java_util_Collections$CheckedSortedSet_h_
#define _java_util_Collections$CheckedSortedSet_h_
//$ class java.util.Collections$CheckedSortedSet
//$ extends java.util.Collections$CheckedSet
//$ implements java.util.SortedSet

#include <java/util/Collections$CheckedSet.h>
#include <java/util/SortedSet.h>

namespace java {
	namespace util {
		class Comparator;
	}
}

namespace java {
	namespace util {

class $export Collections$CheckedSortedSet : public ::java::util::Collections$CheckedSet, public ::java::util::SortedSet {
	$class(Collections$CheckedSortedSet, $NO_CLASS_INIT, ::java::util::Collections$CheckedSet, ::java::util::SortedSet)
public:
	Collections$CheckedSortedSet();
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* coll) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* coll) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::SortedSet* s, $Class* type);
	virtual ::java::util::Comparator* comparator() override;
	virtual $Object* first() override;
	virtual ::java::util::SortedSet* headSet(Object$* toElement) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual $Object* last() override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* coll) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* coll) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::SortedSet* subSet(Object$* fromElement, Object$* toElement) override;
	virtual ::java::util::SortedSet* tailSet(Object$* fromElement) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* f) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x163406BA7362EB0F;
	::java::util::SortedSet* ss = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedSortedSet_h_