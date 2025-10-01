#ifndef _java_util_Set_h_
#define _java_util_Set_h_
//$ interface java.util.Set
//$ extends java.util.Collection

#include <java/lang/Array.h>
#include <java/util/Collection.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}

namespace java {
	namespace util {

class $import Set : public ::java::util::Collection {
	$interface(Set, $PRELOAD | $NO_CLASS_INIT, ::java::util::Collection)
public:
	virtual bool add(Object$* e) override {return false;}
	virtual bool addAll(::java::util::Collection* c) override {return false;}
	virtual void clear() override {}
	virtual bool contains(Object$* o) override {return false;}
	virtual bool containsAll(::java::util::Collection* c) override {return false;}
	static ::java::util::Set* copyOf(::java::util::Collection* coll);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override {return false;}
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	static ::java::util::Set* of();
	static ::java::util::Set* of(Object$* e1);
	static ::java::util::Set* of(Object$* e1, Object$* e2);
	static ::java::util::Set* of(Object$* e1, Object$* e2, Object$* e3);
	static ::java::util::Set* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4);
	static ::java::util::Set* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5);
	static ::java::util::Set* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6);
	static ::java::util::Set* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7);
	static ::java::util::Set* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7, Object$* e8);
	static ::java::util::Set* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7, Object$* e8, Object$* e9);
	static ::java::util::Set* of(Object$* e1, Object$* e2, Object$* e3, Object$* e4, Object$* e5, Object$* e6, Object$* e7, Object$* e8, Object$* e9, Object$* e10);
	static ::java::util::Set* of($ObjectArray* elements);
	virtual bool remove(Object$* o) override {return false;}
	virtual bool removeAll(::java::util::Collection* c) override {return false;}
	virtual bool retainAll(::java::util::Collection* c) override {return false;}
	virtual int32_t size() override {return 0;}
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::Collection::toArray;
	virtual $ObjectArray* toArray() override {return nullptr;}
	virtual $ObjectArray* toArray($ObjectArray* a) override {return nullptr;}
};

	} // util
} // java

#endif // _java_util_Set_h_