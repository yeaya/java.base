#ifndef _java_util_Collections$CheckedMap$CheckedEntrySet_h_
#define _java_util_Collections$CheckedMap$CheckedEntrySet_h_
//$ class java.util.Collections$CheckedMap$CheckedEntrySet
//$ extends java.util.Set

#include <java/lang/Array.h>
#include <java/util/Set.h>

namespace java {
	namespace util {
		class Collection;
		class Collections$CheckedMap$CheckedEntrySet$CheckedEntry;
		class Iterator;
		class Map$Entry;
	}
}

namespace java {
	namespace util {

class Collections$CheckedMap$CheckedEntrySet : public ::java::util::Set {
	$class(Collections$CheckedMap$CheckedEntrySet, $NO_CLASS_INIT, ::java::util::Set)
public:
	Collections$CheckedMap$CheckedEntrySet();
	void init$(::java::util::Set* s, $Class* valueType);
	virtual bool add(::java::util::Map$Entry* e);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* coll) override;
	bool batchRemove(::java::util::Collection* c, bool complement);
	static ::java::util::Collections$CheckedMap$CheckedEntrySet$CheckedEntry* checkedEntry(::java::util::Map$Entry* e, $Class* valueType);
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
	::java::util::Set* s = nullptr;
	$Class* valueType = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedMap$CheckedEntrySet_h_