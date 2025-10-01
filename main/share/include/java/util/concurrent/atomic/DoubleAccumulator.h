#ifndef _java_util_concurrent_atomic_DoubleAccumulator_h_
#define _java_util_concurrent_atomic_DoubleAccumulator_h_
//$ class java.util.concurrent.atomic.DoubleAccumulator
//$ extends java.util.concurrent.atomic.Striped64

#include <java/util/concurrent/atomic/Striped64.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
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

class $import DoubleAccumulator : public ::java::util::concurrent::atomic::Striped64 {
	$class(DoubleAccumulator, $NO_CLASS_INIT, ::java::util::concurrent::atomic::Striped64)
public:
	DoubleAccumulator();
	void init$(::java::util::function::DoubleBinaryOperator* accumulatorFunction, double identity);
	virtual void accumulate(double x);
	virtual double doubleValue() override;
	virtual float floatValue() override;
	virtual double get();
	virtual double getThenReset();
	virtual int32_t intValue() override;
	virtual int64_t longValue() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void reset();
	virtual $String* toString() override;
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x6499DE12A37D0A3D;
	::java::util::function::DoubleBinaryOperator* function = nullptr;
	int64_t identity = 0;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_DoubleAccumulator_h_