#ifndef _AdaptServerSocket$1_h_
#define _AdaptServerSocket$1_h_
//$ class AdaptServerSocket$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class AdaptServerSocket$1 : public ::java::lang::Thread {
	$class(AdaptServerSocket$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AdaptServerSocket$1();
	void init$(int32_t val$dally, int32_t val$port);
	virtual void run() override;
	int32_t val$port = 0;
	int32_t val$dally = 0;
};

#endif // _AdaptServerSocket$1_h_