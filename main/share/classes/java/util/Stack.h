#ifndef _java_util_Stack_h_
#define _java_util_Stack_h_
//$ class java.util.Stack
//$ extends java.util.Vector

#include <java/util/Vector.h>

namespace java {
	namespace util {

class $export Stack : public ::java::util::Vector {
	$class(Stack, $NO_CLASS_INIT, ::java::util::Vector)
public:
	Stack();
	void init$();
	virtual bool empty();
	virtual $Object* peek();
	virtual $Object* pop();
	virtual $Object* push(Object$* item);
	virtual int32_t search(Object$* o);
	using ::java::util::Vector::toArray;
	static const int64_t serialVersionUID = (int64_t)0x10FE2AC2BB09861D;
};

	} // util
} // java

#endif // _java_util_Stack_h_