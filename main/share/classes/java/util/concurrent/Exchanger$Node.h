#ifndef _java_util_concurrent_Exchanger$Node_h_
#define _java_util_concurrent_Exchanger$Node_h_
//$ class java.util.concurrent.Exchanger$Node
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Thread;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export Exchanger$Node : public ::java::lang::Object {
	$class(Exchanger$Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Exchanger$Node();
	void init$();
	int32_t index = 0;
	int32_t bound = 0;
	int32_t collides = 0;
	int32_t hash = 0;
	$Object* item = nullptr;
	$volatile($Object*) match = nullptr;
	$volatile($Thread*) parked = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Exchanger$Node_h_