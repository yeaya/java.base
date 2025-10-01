#ifndef _java_util_Observer_h_
#define _java_util_Observer_h_
//$ interface java.util.Observer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Observable;
	}
}

namespace java {
	namespace util {

class $import Observer : public ::java::lang::Object {
	$interface(Observer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void update(::java::util::Observable* o, Object$* arg) {}
};

	} // util
} // java

#endif // _java_util_Observer_h_