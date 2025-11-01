#ifndef _java_util_concurrent_Flow$Processor_h_
#define _java_util_concurrent_Flow$Processor_h_
//$ interface java.util.concurrent.Flow$Processor
//$ extends java.util.concurrent.Flow$Subscriber,java.util.concurrent.Flow$Publisher

#include <java/util/concurrent/Flow$Publisher.h>
#include <java/util/concurrent/Flow$Subscriber.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import Flow$Processor : public ::java::util::concurrent::Flow$Subscriber, public ::java::util::concurrent::Flow$Publisher {
	$interface(Flow$Processor, $NO_CLASS_INIT, ::java::util::concurrent::Flow$Subscriber, ::java::util::concurrent::Flow$Publisher)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Flow$Processor_h_