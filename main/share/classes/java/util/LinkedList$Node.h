#ifndef _java_util_LinkedList$Node_h_
#define _java_util_LinkedList$Node_h_
//$ class java.util.LinkedList$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {

class LinkedList$Node : public ::java::lang::Object {
	$class(LinkedList$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LinkedList$Node();
	void init$(::java::util::LinkedList$Node* prev, Object$* element, ::java::util::LinkedList$Node* next);
	$Object* item = nullptr;
	::java::util::LinkedList$Node* next = nullptr;
	::java::util::LinkedList$Node* prev = nullptr;
};

	} // util
} // java

#endif // _java_util_LinkedList$Node_h_