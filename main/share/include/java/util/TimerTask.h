#ifndef _java_util_TimerTask_h_
#define _java_util_TimerTask_h_
//$ class java.util.TimerTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

#pragma push_macro("CANCELLED")
#undef CANCELLED
#pragma push_macro("EXECUTED")
#undef EXECUTED
#pragma push_macro("VIRGIN")
#undef VIRGIN
#pragma push_macro("SCHEDULED")
#undef SCHEDULED

namespace java {
	namespace util {

class $import TimerTask : public ::java::lang::Runnable {
	$class(TimerTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TimerTask();
	void init$();
	virtual bool cancel();
	virtual void run() override {}
	virtual int64_t scheduledExecutionTime();
	$Object* lock = nullptr;
	int32_t state = 0;
	static const int32_t VIRGIN = 0;
	static const int32_t SCHEDULED = 1;
	static const int32_t EXECUTED = 2;
	static const int32_t CANCELLED = 3;
	int64_t nextExecutionTime = 0;
	int64_t period = 0;
};

	} // util
} // java

#pragma pop_macro("CANCELLED")
#pragma pop_macro("EXECUTED")
#pragma pop_macro("VIRGIN")
#pragma pop_macro("SCHEDULED")

#endif // _java_util_TimerTask_h_