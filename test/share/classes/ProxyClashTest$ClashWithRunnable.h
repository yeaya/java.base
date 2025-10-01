#ifndef _ProxyClashTest$ClashWithRunnable_h_
#define _ProxyClashTest$ClashWithRunnable_h_
//$ interface ProxyClashTest$ClashWithRunnable
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export ProxyClashTest$ClashWithRunnable : public ::java::lang::Object {
	$interface(ProxyClashTest$ClashWithRunnable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static void foo();
	static int32_t run();
};

#endif // _ProxyClashTest$ClashWithRunnable_h_