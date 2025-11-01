#ifndef _java_util_concurrent_ScheduledFuture_h_
#define _java_util_concurrent_ScheduledFuture_h_
//$ interface java.util.concurrent.ScheduledFuture
//$ extends java.util.concurrent.Delayed,java.util.concurrent.Future

#include <java/util/concurrent/Delayed.h>
#include <java/util/concurrent/Future.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import ScheduledFuture : public ::java::util::concurrent::Delayed, public ::java::util::concurrent::Future {
	$interface(ScheduledFuture, $NO_CLASS_INIT, ::java::util::concurrent::Delayed, ::java::util::concurrent::Future)
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

#endif // _java_util_concurrent_ScheduledFuture_h_