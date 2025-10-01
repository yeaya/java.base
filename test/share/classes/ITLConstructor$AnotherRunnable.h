#ifndef _ITLConstructor$AnotherRunnable_h_
#define _ITLConstructor$AnotherRunnable_h_
//$ class ITLConstructor$AnotherRunnable
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class $export ITLConstructor$AnotherRunnable : public ::java::lang::Runnable {
	$class(ITLConstructor$AnotherRunnable, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ITLConstructor$AnotherRunnable();
	void init$(int32_t threadId, $ints* x, bool inherit);
	virtual void run() override;
	int32_t threadId = 0;
	$ints* x = nullptr;
	bool inherit = false;
};

#endif // _ITLConstructor$AnotherRunnable_h_