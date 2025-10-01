#ifndef _java_util_EnumMap$KeyIterator_h_
#define _java_util_EnumMap$KeyIterator_h_
//$ class java.util.EnumMap$KeyIterator
//$ extends java.util.EnumMap$EnumMapIterator

#include <java/util/EnumMap$EnumMapIterator.h>

namespace java {
	namespace util {
		class EnumMap;
	}
}

namespace java {
	namespace util {

class EnumMap$KeyIterator : public ::java::util::EnumMap$EnumMapIterator {
	$class(EnumMap$KeyIterator, $NO_CLASS_INIT, ::java::util::EnumMap$EnumMapIterator)
public:
	EnumMap$KeyIterator();
	void init$(::java::util::EnumMap* this$0);
	virtual $Object* next() override;
	::java::util::EnumMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_EnumMap$KeyIterator_h_