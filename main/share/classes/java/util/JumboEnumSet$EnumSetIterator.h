#ifndef _java_util_JumboEnumSet$EnumSetIterator_h_
#define _java_util_JumboEnumSet$EnumSetIterator_h_
//$ class java.util.JumboEnumSet$EnumSetIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class JumboEnumSet;
	}
}

namespace java {
	namespace util {

class JumboEnumSet$EnumSetIterator : public ::java::util::Iterator {
	$class(JumboEnumSet$EnumSetIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	JumboEnumSet$EnumSetIterator();
	void init$(::java::util::JumboEnumSet* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::JumboEnumSet* this$0 = nullptr;
	int64_t unseen = 0;
	int32_t unseenIndex = 0;
	int64_t lastReturned = 0;
	int32_t lastReturnedIndex = 0;
};

	} // util
} // java

#endif // _java_util_JumboEnumSet$EnumSetIterator_h_