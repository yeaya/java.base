#ifndef _java_util_concurrent_atomic_DoubleAdder$SerializationProxy_h_
#define _java_util_concurrent_atomic_DoubleAdder$SerializationProxy_h_
//$ class java.util.concurrent.atomic.DoubleAdder$SerializationProxy
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class DoubleAdder;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class DoubleAdder$SerializationProxy : public ::java::io::Serializable {
	$class(DoubleAdder$SerializationProxy, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	DoubleAdder$SerializationProxy();
	void init$(::java::util::concurrent::atomic::DoubleAdder* a);
	$Object* readResolve();
	static const int64_t serialVersionUID = (int64_t)0x6499DE12A37D0A3D;
	double value = 0.0;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_DoubleAdder$SerializationProxy_h_