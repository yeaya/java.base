#ifndef _java_util_concurrent_atomic_DoubleAdder_h_
#define _java_util_concurrent_atomic_DoubleAdder_h_
//$ class java.util.concurrent.atomic.DoubleAdder
//$ extends java.util.concurrent.atomic.Striped64

#include <java/util/concurrent/atomic/Striped64.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class $import DoubleAdder : public ::java::util::concurrent::atomic::Striped64 {
	$class(DoubleAdder, $NO_CLASS_INIT, ::java::util::concurrent::atomic::Striped64)
public:
	DoubleAdder();
	void init$();
	virtual void add(double x);
	virtual double doubleValue() override;
	virtual float floatValue() override;
	virtual int32_t intValue() override;
	virtual int64_t longValue() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void reset();
	virtual double sum();
	virtual double sumThenReset();
	virtual $String* toString() override;
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x6499DE12A37D0A3D;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_DoubleAdder_h_