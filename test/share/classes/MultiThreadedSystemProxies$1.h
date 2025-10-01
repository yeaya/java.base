#ifndef _MultiThreadedSystemProxies$1_h_
#define _MultiThreadedSystemProxies$1_h_
//$ class MultiThreadedSystemProxies$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace net {
		class ProxySelector;
		class URI;
	}
}

class MultiThreadedSystemProxies$1 : public ::java::lang::Runnable {
	$class(MultiThreadedSystemProxies$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	MultiThreadedSystemProxies$1();
	void init$(::java::net::ProxySelector* val$ps, ::java::net::URI* val$uri);
	virtual void run() override;
	::java::net::URI* val$uri = nullptr;
	::java::net::ProxySelector* val$ps = nullptr;
};

#endif // _MultiThreadedSystemProxies$1_h_