#ifndef _java_util_concurrent_RunnableFuture_h_
#define _java_util_concurrent_RunnableFuture_h_
//$ interface java.util.concurrent.RunnableFuture
//$ extends java.lang.Runnable,java.util.concurrent.Future

#include <java/lang/Runnable.h>
#include <java/util/concurrent/Future.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export RunnableFuture : public ::java::lang::Runnable, public ::java::util::concurrent::Future {
	$interface(RunnableFuture, $NO_CLASS_INIT, ::java::lang::Runnable, ::java::util::concurrent::Future)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual void run() override {}
	virtual $String* toString() override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_RunnableFuture_h_