#ifndef _Basic4ref$ClearFinalizerThread_h_
#define _Basic4ref$ClearFinalizerThread_h_
//$ class Basic4ref$ClearFinalizerThread
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export Basic4ref$ClearFinalizerThread : public ::java::lang::Object {
	$class(Basic4ref$ClearFinalizerThread, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	Basic4ref$ClearFinalizerThread();
	void init$();
	virtual void finalize() override;
};

#endif // _Basic4ref$ClearFinalizerThread_h_