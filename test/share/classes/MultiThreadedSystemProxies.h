#ifndef _MultiThreadedSystemProxies_h_
#define _MultiThreadedSystemProxies_h_
//$ class MultiThreadedSystemProxies
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NUM_THREADS")
#undef NUM_THREADS

class $export MultiThreadedSystemProxies : public ::java::lang::Object {
	$class(MultiThreadedSystemProxies, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MultiThreadedSystemProxies();
	void init$();
	static void main($StringArray* args);
	static const int32_t NUM_THREADS = 100;
};

#pragma pop_macro("NUM_THREADS")

#endif // _MultiThreadedSystemProxies_h_