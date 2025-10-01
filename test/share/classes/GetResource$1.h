#ifndef _GetResource$1_h_
#define _GetResource$1_h_
//$ class GetResource$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class GetResource;

class GetResource$1 : public ::java::lang::Thread {
	$class(GetResource$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	GetResource$1();
	void init$(::GetResource* this$0);
	virtual void run() override;
	::GetResource* this$0 = nullptr;
};

#endif // _GetResource$1_h_