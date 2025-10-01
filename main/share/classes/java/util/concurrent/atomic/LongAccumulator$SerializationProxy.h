#ifndef _java_util_concurrent_atomic_LongAccumulator$SerializationProxy_h_
#define _java_util_concurrent_atomic_LongAccumulator$SerializationProxy_h_
//$ class java.util.concurrent.atomic.LongAccumulator$SerializationProxy
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		namespace function {
			class LongBinaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class LongAccumulator$SerializationProxy : public ::java::io::Serializable {
	$class(LongAccumulator$SerializationProxy, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	LongAccumulator$SerializationProxy();
	void init$(int64_t value, ::java::util::function::LongBinaryOperator* function, int64_t identity);
	$Object* readResolve();
	static const int64_t serialVersionUID = (int64_t)0x6499DE12A37D0A3D;
	int64_t value = 0;
	::java::util::function::LongBinaryOperator* function = nullptr;
	int64_t identity = 0;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_LongAccumulator$SerializationProxy_h_