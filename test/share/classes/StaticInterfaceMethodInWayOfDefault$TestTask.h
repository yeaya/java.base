#ifndef _StaticInterfaceMethodInWayOfDefault$TestTask_h_
#define _StaticInterfaceMethodInWayOfDefault$TestTask_h_
//$ class StaticInterfaceMethodInWayOfDefault$TestTask
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

class $export StaticInterfaceMethodInWayOfDefault$TestTask : public ::java::util::concurrent::Callable {
	$class(StaticInterfaceMethodInWayOfDefault$TestTask, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	StaticInterfaceMethodInWayOfDefault$TestTask();
	void init$();
	virtual $Object* call() override;
};

#endif // _StaticInterfaceMethodInWayOfDefault$TestTask_h_