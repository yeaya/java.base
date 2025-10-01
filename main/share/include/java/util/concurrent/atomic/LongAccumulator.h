#ifndef _java_util_concurrent_atomic_LongAccumulator_h_
#define _java_util_concurrent_atomic_LongAccumulator_h_
//$ class java.util.concurrent.atomic.LongAccumulator
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
			class LongBinaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class $import LongAccumulator : public ::java::util::concurrent::atomic::Striped64 {
	$class(LongAccumulator, $NO_CLASS_INIT, ::java::util::concurrent::atomic::Striped64)
public:
	LongAccumulator();
	void init$(::java::util::function::LongBinaryOperator* accumulatorFunction, int64_t identity);
	virtual void accumulate(int64_t x);
	virtual double doubleValue() override;
	virtual float floatValue() override;
	virtual int64_t get();
	virtual int64_t getThenReset();
	virtual int32_t intValue() override;
	virtual int64_t longValue() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void reset();
	virtual $String* toString() override;
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x6499DE12A37D0A3D;
	::java::util::function::LongBinaryOperator* function = nullptr;
	int64_t identity = 0;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_LongAccumulator_h_