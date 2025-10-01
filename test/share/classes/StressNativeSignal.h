#ifndef _StressNativeSignal_h_
#define _StressNativeSignal_h_
//$ class StressNativeSignal
//$ extends java.lang.Object

#include <java/lang/Array.h>

class StressNativeSignal$ServerSocketThread;
class StressNativeSignal$UDPThread;

class $export StressNativeSignal : public ::java::lang::Object {
	$class(StressNativeSignal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StressNativeSignal();
	void init$();
	static void main($StringArray* args);
	virtual void shutdown();
	::StressNativeSignal$UDPThread* udpThread = nullptr;
	::StressNativeSignal$ServerSocketThread* serverSocketThread = nullptr;
};

#endif // _StressNativeSignal_h_