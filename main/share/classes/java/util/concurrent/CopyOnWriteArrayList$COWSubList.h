#ifndef _java_util_concurrent_CopyOnWriteArrayList$COWSubList_h_
#define _java_util_concurrent_CopyOnWriteArrayList$COWSubList_h_
//$ class java.util.concurrent.CopyOnWriteArrayList$COWSubList
//$ extends java.util.List
//$ implements java.util.RandomAccess

#include <java/lang/Array.h>
#include <java/util/List.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class Iterator;
		class ListIterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CopyOnWriteArrayList;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Predicate;
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class CopyOnWriteArrayList$COWSubList : public ::java::util::List, public ::java::util::RandomAccess {
	$class(CopyOnWriteArrayList$COWSubList, $NO_CLASS_INIT, ::java::util::List, ::java::util::RandomAccess)
public:
	CopyOnWriteArrayList$COWSubList();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::concurrent::CopyOnWriteArrayList* this$0, $ObjectArray* es, int32_t offset, int32_t size);
	virtual bool add(Object$* element) override;
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	bool bulkRemove(::java::util::function::Predicate* filter);
	void checkForComodification();
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual $Object* get(int32_t index) override;
	$ObjectArray* getArrayChecked();
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(Object$* o) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	static bool lambda$removeAll$0(::java::util::Collection* c, Object$* e);
	static bool lambda$retainAll$1(::java::util::Collection* c, Object$* e);
	virtual int32_t lastIndexOf(Object$* o) override;
	virtual ::java::util::ListIterator* listIterator() override;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	void rangeCheck(int32_t index);
	void rangeCheckForAdd(int32_t index);
	virtual $Object* remove(int32_t index) override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual int32_t size() override;
	virtual void sort(::java::util::Comparator* c) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	using ::java::util::List::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	::java::util::concurrent::CopyOnWriteArrayList* this$0 = nullptr;
	int32_t offset = 0;
	int32_t size$ = 0;
	$ObjectArray* expectedArray = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CopyOnWriteArrayList$COWSubList_h_