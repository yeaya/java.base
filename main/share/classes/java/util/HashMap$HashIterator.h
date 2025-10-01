#ifndef _java_util_HashMap$HashIterator_h_
#define _java_util_HashMap$HashIterator_h_
//$ class java.util.HashMap$HashIterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class HashMap;
		class HashMap$Node;
	}
}

namespace java {
	namespace util {

class $export HashMap$HashIterator : public ::java::lang::Object {
	$class(HashMap$HashIterator, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	HashMap$HashIterator();
	void init$(::java::util::HashMap* this$0);
	bool hasNext();
	::java::util::HashMap$Node* nextNode();
	void remove();
	::java::util::HashMap* this$0 = nullptr;
	::java::util::HashMap$Node* next = nullptr;
	::java::util::HashMap$Node* current = nullptr;
	int32_t expectedModCount = 0;
	int32_t index = 0;
};

	} // util
} // java

#endif // _java_util_HashMap$HashIterator_h_