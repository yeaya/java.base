#ifndef _Bug6335238$DateParseThread_h_
#define _Bug6335238$DateParseThread_h_
//$ class Bug6335238$DateParseThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

class Bug6335238;

class $export Bug6335238$DateParseThread : public ::java::lang::Thread {
	$class(Bug6335238$DateParseThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	Bug6335238$DateParseThread();
	void init$(::Bug6335238* this$0);
	virtual void run() override;
	::Bug6335238* this$0 = nullptr;
};

#endif // _Bug6335238$DateParseThread_h_