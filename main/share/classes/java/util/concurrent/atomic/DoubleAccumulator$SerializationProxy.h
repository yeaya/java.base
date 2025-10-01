#ifndef _java_util_concurrent_atomic_DoubleAccumulator$SerializationProxy_h_
#define _java_util_concurrent_atomic_DoubleAccumulator$SerializationProxy_h_
//$ class java.util.concurrent.atomic.DoubleAccumulator$SerializationProxy
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleBinaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class DoubleAccumulator$SerializationProxy : public ::java::io::Serializable {
	$class(DoubleAccumulator$SerializationProxy, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	DoubleAccumulator$SerializationProxy();
	void init$(double value, ::java::util::function::DoubleBinaryOperator* function, int64_t identity);
	$Object* readResolve();
	static const int64_t serialVersionUID = (int64_t)0x6499DE12A37D0A3D;
	double value = 0.0;
	::java::util::function::DoubleBinaryOperator* function = nullptr;
	int64_t identity = 0;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_DoubleAccumulator$SerializationProxy_h_