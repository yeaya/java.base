#ifndef _java_util_Iterator_h_
#define _java_util_Iterator_h_
//$ interface java.util.Iterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class $export Iterator : public ::java::lang::Object {
	$interface(Iterator, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void forEachRemaining(::java::util::function::Consumer* action);
	virtual bool hasNext() {return false;}
	virtual $Object* next() {return nullptr;}
	virtual void remove();
};

	} // util
} // java

#endif // _java_util_Iterator_h_