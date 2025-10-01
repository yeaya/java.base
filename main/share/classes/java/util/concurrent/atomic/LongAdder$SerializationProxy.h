#ifndef _java_util_concurrent_atomic_LongAdder$SerializationProxy_h_
#define _java_util_concurrent_atomic_LongAdder$SerializationProxy_h_
//$ class java.util.concurrent.atomic.LongAdder$SerializationProxy
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class LongAdder;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class LongAdder$SerializationProxy : public ::java::io::Serializable {
	$class(LongAdder$SerializationProxy, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	LongAdder$SerializationProxy();
	void init$(::java::util::concurrent::atomic::LongAdder* a);
	$Object* readResolve();
	static const int64_t serialVersionUID = (int64_t)0x6499DE12A37D0A3D;
	int64_t value = 0;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_LongAdder$SerializationProxy_h_