#ifndef _java_util_Spliterators$4Adapter_h_
#define _java_util_Spliterators$4Adapter_h_
//$ class java.util.Spliterators$4Adapter
//$ extends java.util.PrimitiveIterator$OfDouble
//$ implements java.util.function.DoubleConsumer

#include <java/util/PrimitiveIterator$OfDouble.h>
#include <java/util/function/DoubleConsumer.h>

namespace java {
	namespace util {
		class Spliterator$OfDouble;
	}
}

namespace java {
	namespace util {

class Spliterators$4Adapter : public ::java::util::PrimitiveIterator$OfDouble, public ::java::util::function::DoubleConsumer {
	$class(Spliterators$4Adapter, $NO_CLASS_INIT, ::java::util::PrimitiveIterator$OfDouble, ::java::util::function::DoubleConsumer)
public:
	Spliterators$4Adapter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::PrimitiveIterator$OfDouble::forEachRemaining;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator$OfDouble* val$spliterator);
	virtual void accept(double t) override;
	virtual void forEachRemaining(::java::util::function::DoubleConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual bool hasNext() override;
	virtual double nextDouble() override;
	virtual $String* toString() override;
	::java::util::Spliterator$OfDouble* val$spliterator = nullptr;
	bool valueReady = false;
	double nextElement = 0.0;
};

	} // util
} // java

#endif // _java_util_Spliterators$4Adapter_h_