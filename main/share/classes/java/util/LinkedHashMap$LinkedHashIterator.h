#ifndef _java_util_LinkedHashMap$LinkedHashIterator_h_
#define _java_util_LinkedHashMap$LinkedHashIterator_h_
//$ class java.util.LinkedHashMap$LinkedHashIterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class LinkedHashMap;
		class LinkedHashMap$Entry;
	}
}

namespace java {
	namespace util {

class $export LinkedHashMap$LinkedHashIterator : public ::java::lang::Object {
	$class(LinkedHashMap$LinkedHashIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LinkedHashMap$LinkedHashIterator();
	void init$(::java::util::LinkedHashMap* this$0);
	bool hasNext();
	::java::util::LinkedHashMap$Entry* nextNode();
	void remove();
	::java::util::LinkedHashMap* this$0 = nullptr;
	::java::util::LinkedHashMap$Entry* next = nullptr;
	::java::util::LinkedHashMap$Entry* current = nullptr;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_LinkedHashMap$LinkedHashIterator_h_