#ifndef _java_util_Spliterators$1Adapter_h_
#define _java_util_Spliterators$1Adapter_h_
//$ class java.util.Spliterators$1Adapter
//$ extends java.util.Iterator
//$ implements java.util.function.Consumer

#include <java/util/Iterator.h>
#include <java/util/function/Consumer.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}

namespace java {
	namespace util {

class Spliterators$1Adapter : public ::java::util::Iterator, public ::java::util::function::Consumer {
	$class(Spliterators$1Adapter, $NO_CLASS_INIT, ::java::util::Iterator, ::java::util::function::Consumer)
public:
	Spliterators$1Adapter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator* val$spliterator);
	virtual void accept(Object$* t) override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual $String* toString() override;
	::java::util::Spliterator* val$spliterator = nullptr;
	bool valueReady = false;
	$Object* nextElement = nullptr;
};

	} // util
} // java

#endif // _java_util_Spliterators$1Adapter_h_