#ifndef _AnnotationTypeRuntimeAssumptionTest$TestTask_h_
#define _AnnotationTypeRuntimeAssumptionTest$TestTask_h_
//$ class AnnotationTypeRuntimeAssumptionTest$TestTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class $export AnnotationTypeRuntimeAssumptionTest$TestTask : public ::java::lang::Runnable {
	$class(AnnotationTypeRuntimeAssumptionTest$TestTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AnnotationTypeRuntimeAssumptionTest$TestTask();
	void init$();
	virtual void run() override;
};

#endif // _AnnotationTypeRuntimeAssumptionTest$TestTask_h_