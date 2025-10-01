#ifndef _B8035158$TestCase_h_
#define _B8035158$TestCase_h_
//$ class B8035158$TestCase
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
		class Map;
	}
}

class B8035158$TestCase : public ::java::lang::Object {
	$class(B8035158$TestCase, $NO_CLASS_INIT, ::java::lang::Object)
public:
	B8035158$TestCase();
	void init$($String* nonProxyHosts, $String* urlhost, bool expectedProxying);
	void init$($String* nonProxyHosts, $String* proxyHost, $String* urlhost, bool expectedProxying);
	void init$(::java::util::Map* localProperties, $String* urlhost, bool expectedProxying);
	::java::util::List* lambda$run$0();
	virtual void run();
	virtual void verify(::java::util::List* proxies);
	::java::util::Map* localProperties = nullptr;
	$String* urlhost = nullptr;
	bool expectedProxying = false;
};

#endif // _B8035158$TestCase_h_