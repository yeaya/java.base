#ifndef _java_util_List_h_
#define _java_util_List_h_
//$ interface java.util.List
//$ extends java.util.Collection

#include <java/lang/Array.h>
#include <java/util/Collection.h>

namespace java {
	namespace util {
		class Comparator;
		class ListIterator;
		class Spliterator;
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

class $export List : public ::java::util::Collection {
	$interface(List, $PRELOAD | $NO_CLASS_INIT, ::java::util::Collection)
public:
	virtual bool add(Object$* e) override {return false;}
	virtual void add(int32_t index, Object$* element) {}
	virtual bool addAll(::java::util::Collection* c) override {return false;}
	virtual bool addAll(int32_t index, ::java::util::Collection* c) {return false;}
	virtual void clear() override {}
	virtual bool contains(Object$* o) override {return false;}
	virtual bool containsAll(::java::util::Collection* c) override {return false;}
	static ::java::util::List* copyOf(::java::util::Collection* coll);
	virtual bool equals(Object$* o) override;
	virtual $Object* get(int32_t index) {return nullptr;}
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(Object$* o) {return 0;}
	virtual bool isEmpty() override {return false;}
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual int32_t lastIndexOf(Object$* o) {return 0;}
	virtual ::java::util::ListIterator* listIterator() {return nullptr;}
	virtual ::java::util::ListIterator* listIterator(int32_t index) {return nullptr;}
	static ::java::util::List* of();
	static ::java::util::List* of(Object$* e1);
	static ::java::util::List* of(Object$* e1, Object$* e2);
	static ::java::util::List* of(Object$* e1, Object$* e2, Object$* e3);
	static ::java::util::List* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4);
	static ::java::util::List* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5);
	static ::java::util::List* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6);
	static ::java::util::List* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7);
	static ::java::util::List* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7, Object$* e8);
	static ::java::util::List* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7, Object$* e8, Object$* e9);
	static ::java::util::List* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7, Object$* e8, Object$* e9, Object$* e10);
	static ::java::util::List* of($ObjectArray* elements);
	virtual bool remove(Object$* o) override {return false;}
	virtual $Object* remove(int32_t index) {return nullptr;}
	virtual bool removeAll(::java::util::Collection* c) override {return false;}
	virtual void replaceAll(::java::util::function::UnaryOperator* operator$);
	virtual bool retainAll(::java::util::Collection* c) override {return false;}
	virtual $Object* set(int32_t index, Object$* element) {return nullptr;}
	virtual int32_t size() override {return 0;}
	virtual void sort(::java::util::Comparator* c);
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) {return nullptr;}
	using ::java::util::Collection::toArray;
	virtual $ObjectArray* toArray() override {return nullptr;}
	virtual $ObjectArray* toArray($ObjectArray* a) override {return nullptr;}
};

	} // util
} // java

#endif // _java_util_List_h_