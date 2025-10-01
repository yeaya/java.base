#ifndef _java_util_Properties$EntrySet_h_
#define _java_util_Properties$EntrySet_h_
//$ class java.util.Properties$EntrySet
//$ extends java.util.Set

#include <java/lang/Array.h>
#include <java/util/Set.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class Map$Entry;
	}
}

namespace java {
	namespace util {

class Properties$EntrySet : public ::java::util::Set {
	$class(Properties$EntrySet, $NO_CLASS_INIT, ::java::util::Set)
public:
	Properties$EntrySet();
	void init$(::java::util::Set* entrySet);
	virtual bool add(::java::util::Map$Entry* e);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	using ::java::util::Set::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	::java::util::Set* entrySet = nullptr;
};

	} // util
} // java

#endif // _java_util_Properties$EntrySet_h_