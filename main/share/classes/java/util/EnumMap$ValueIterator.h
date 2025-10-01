#ifndef _java_util_EnumMap$ValueIterator_h_
#define _java_util_EnumMap$ValueIterator_h_
//$ class java.util.EnumMap$ValueIterator
//$ extends java.util.EnumMap$EnumMapIterator

#include <java/util/EnumMap$EnumMapIterator.h>

namespace java {
	namespace util {
		class EnumMap;
	}
}

namespace java {
	namespace util {

class EnumMap$ValueIterator : public ::java::util::EnumMap$EnumMapIterator {
	$class(EnumMap$ValueIterator, $NO_CLASS_INIT, ::java::util::EnumMap$EnumMapIterator)
public:
	EnumMap$ValueIterator();
	void init$(::java::util::EnumMap* this$0);
	virtual $Object* next() override;
	::java::util::EnumMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_EnumMap$ValueIterator_h_