#ifndef _GetResource$2_h_
#define _GetResource$2_h_
//$ class GetResource$2
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class GetResource;

class GetResource$2 : public ::java::lang::Thread {
	$class(GetResource$2, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	GetResource$2();
	void init$(::GetResource* this$0);
	virtual void run() override;
	::GetResource* this$0 = nullptr;
};

#endif // _GetResource$2_h_