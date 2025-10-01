#ifndef _java_util_AbstractCollection_h_
#define _java_util_AbstractCollection_h_
//$ class java.util.AbstractCollection
//$ extends java.util.Collection

#include <java/lang/Array.h>
#include <java/util/Collection.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace util {

class $export AbstractCollection : public ::java::util::Collection {
	$class(AbstractCollection, $PRELOAD | $NO_CLASS_INIT, ::java::util::Collection)
public:
	AbstractCollection();
	void init$();
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	static $ObjectArray* finishToArray($ObjectArray* r, ::java::util::Iterator* it);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override {return 0;}
	using ::java::util::Collection::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
};

	} // util
} // java

#endif // _java_util_AbstractCollection_h_