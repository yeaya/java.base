#ifndef _java_util_Collections$CheckedList_h_
#define _java_util_Collections$CheckedList_h_
//$ class java.util.Collections$CheckedList
//$ extends java.util.Collections$CheckedCollection
//$ implements java.util.List

#include <java/util/Collections$CheckedCollection.h>
#include <java/util/List.h>

namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class ListIterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace util {

class $import Collections$CheckedList : public ::java::util::Collections$CheckedCollection, public ::java::util::List {
	$class(Collections$CheckedList, $NO_CLASS_INIT, ::java::util::Collections$CheckedCollection, ::java::util::List)
public:
	Collections$CheckedList();
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* coll) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* coll) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	void init$(::java::util::List* list, $Class* type);
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual $Object* get(int32_t index) override;
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(Object$* o) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	$Object* lambda$replaceAll$0(::java::util::function::UnaryOperator* operator$, Object$* e);
	virtual int32_t lastIndexOf(Object$* o) override;
	virtual ::java::util::ListIterator* listIterator() override;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual bool remove(Object$* o) override;
	virtual $Object* remove(int32_t index) override;
	virtual bool removeAll(::java::util::Collection* coll) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$) override;
	virtual bool retainAll(::java::util::Collection* coll) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual int32_t size() override;
	virtual void sort(::java::util::Comparator* c) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* f) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x00E7CE7692C45F7C;
	::java::util::List* list = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedList_h_