#ifndef _java_util_EnumMap$EntrySet_h_
#define _java_util_EnumMap$EntrySet_h_
//$ class java.util.EnumMap$EntrySet
//$ extends java.util.AbstractSet

#include <java/lang/Array.h>
#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class EnumMap;
		class Iterator;
	}
}

namespace java {
	namespace util {

class EnumMap$EntrySet : public ::java::util::AbstractSet {
	$class(EnumMap$EntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	EnumMap$EntrySet();
	void init$(::java::util::EnumMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	$ObjectArray* fillEntryArray($ObjectArray* a);
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	::java::util::EnumMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_EnumMap$EntrySet_h_