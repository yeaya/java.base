#ifndef _java_util_EnumMap$EnumMapIterator_h_
#define _java_util_EnumMap$EnumMapIterator_h_
//$ class java.util.EnumMap$EnumMapIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class EnumMap;
	}
}

namespace java {
	namespace util {

class EnumMap$EnumMapIterator : public ::java::util::Iterator {
	$class(EnumMap$EnumMapIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	EnumMap$EnumMapIterator();
	void init$(::java::util::EnumMap* this$0);
	void checkLastReturnedIndex();
	virtual bool hasNext() override;
	virtual void remove() override;
	::java::util::EnumMap* this$0 = nullptr;
	int32_t index = 0;
	int32_t lastReturnedIndex = 0;
};

	} // util
} // java

#endif // _java_util_EnumMap$EnumMapIterator_h_