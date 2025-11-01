#ifndef _java_util_Spliterators$3Adapter_h_
#define _java_util_Spliterators$3Adapter_h_
//$ class java.util.Spliterators$3Adapter
//$ extends java.util.PrimitiveIterator$OfLong
//$ implements java.util.function.LongConsumer

#include <java/util/PrimitiveIterator$OfLong.h>
#include <java/util/function/LongConsumer.h>

namespace java {
	namespace util {
		class Spliterator$OfLong;
	}
}

namespace java {
	namespace util {

class Spliterators$3Adapter : public ::java::util::PrimitiveIterator$OfLong, public ::java::util::function::LongConsumer {
	$class(Spliterators$3Adapter, $NO_CLASS_INIT, ::java::util::PrimitiveIterator$OfLong, ::java::util::function::LongConsumer)
public:
	Spliterators$3Adapter();
	using ::java::util::PrimitiveIterator$OfLong::forEachRemaining;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator$OfLong* val$spliterator);
	virtual void accept(int64_t t) override;
	virtual void forEachRemaining(::java::util::function::LongConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	virtual bool hasNext() override;
	virtual int64_t nextLong() override;
	virtual $String* toString() override;
	::java::util::Spliterator$OfLong* val$spliterator = nullptr;
	bool valueReady = false;
	int64_t nextElement = 0;
};

	} // util
} // java

#endif // _java_util_Spliterators$3Adapter_h_