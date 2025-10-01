#ifndef _java_util_Spliterators$2Adapter_h_
#define _java_util_Spliterators$2Adapter_h_
//$ class java.util.Spliterators$2Adapter
//$ extends java.util.PrimitiveIterator$OfInt
//$ implements java.util.function.IntConsumer

#include <java/util/PrimitiveIterator$OfInt.h>
#include <java/util/function/IntConsumer.h>

namespace java {
	namespace util {
		class Spliterator$OfInt;
	}
}

namespace java {
	namespace util {

class Spliterators$2Adapter : public ::java::util::PrimitiveIterator$OfInt, public ::java::util::function::IntConsumer {
	$class(Spliterators$2Adapter, $NO_CLASS_INIT, ::java::util::PrimitiveIterator$OfInt, ::java::util::function::IntConsumer)
public:
	Spliterators$2Adapter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::PrimitiveIterator$OfInt::forEachRemaining;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator$OfInt* val$spliterator);
	virtual void accept(int32_t t) override;
	virtual void forEachRemaining(::java::util::function::IntConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual bool hasNext() override;
	virtual int32_t nextInt() override;
	virtual $String* toString() override;
	::java::util::Spliterator$OfInt* val$spliterator = nullptr;
	bool valueReady = false;
	int32_t nextElement = 0;
};

	} // util
} // java

#endif // _java_util_Spliterators$2Adapter_h_