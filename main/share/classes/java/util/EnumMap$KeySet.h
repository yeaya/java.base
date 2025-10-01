#ifndef _java_util_EnumMap$KeySet_h_
#define _java_util_EnumMap$KeySet_h_
//$ class java.util.EnumMap$KeySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class EnumMap;
		class Iterator;
	}
}

namespace java {
	namespace util {

class EnumMap$KeySet : public ::java::util::AbstractSet {
	$class(EnumMap$KeySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	EnumMap$KeySet();
	void init$(::java::util::EnumMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::EnumMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_EnumMap$KeySet_h_