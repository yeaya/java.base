#ifndef _java_util_EnumMap$EntryIterator_h_
#define _java_util_EnumMap$EntryIterator_h_
//$ class java.util.EnumMap$EntryIterator
//$ extends java.util.EnumMap$EnumMapIterator

#include <java/util/EnumMap$EnumMapIterator.h>

namespace java {
	namespace util {
		class EnumMap;
		class EnumMap$EntryIterator$Entry;
	}
}

namespace java {
	namespace util {

class EnumMap$EntryIterator : public ::java::util::EnumMap$EnumMapIterator {
	$class(EnumMap$EntryIterator, $NO_CLASS_INIT, ::java::util::EnumMap$EnumMapIterator)
public:
	EnumMap$EntryIterator();
	void init$(::java::util::EnumMap* this$0);
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::EnumMap* this$0 = nullptr;
	::java::util::EnumMap$EntryIterator$Entry* lastReturnedEntry = nullptr;
};

	} // util
} // java

#endif // _java_util_EnumMap$EntryIterator_h_