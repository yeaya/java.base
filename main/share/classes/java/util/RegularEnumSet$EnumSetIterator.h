#ifndef _java_util_RegularEnumSet$EnumSetIterator_h_
#define _java_util_RegularEnumSet$EnumSetIterator_h_
//$ class java.util.RegularEnumSet$EnumSetIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class RegularEnumSet;
	}
}

namespace java {
	namespace util {

class RegularEnumSet$EnumSetIterator : public ::java::util::Iterator {
	$class(RegularEnumSet$EnumSetIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	RegularEnumSet$EnumSetIterator();
	void init$(::java::util::RegularEnumSet* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::RegularEnumSet* this$0 = nullptr;
	int64_t unseen = 0;
	int64_t lastReturned = 0;
};

	} // util
} // java

#endif // _java_util_RegularEnumSet$EnumSetIterator_h_