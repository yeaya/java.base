#ifndef _NativeThread_h_
#define _NativeThread_h_
//$ class NativeThread
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SIGPIPE")
#undef SIGPIPE

class $export NativeThread : public ::java::lang::Object {
	$class(NativeThread, 0, ::java::lang::Object)
public:
	NativeThread();
	void init$();
	static int64_t getID();
	static int32_t getSIGPIPE();
	static int32_t signal(int64_t threadId, int32_t sig);
	static int32_t SIGPIPE;
};

#pragma pop_macro("SIGPIPE")

#endif // _NativeThread_h_