#ifndef _NonPublicProxyClass$NonPublicInterface_h_
#define _NonPublicProxyClass$NonPublicInterface_h_
//$ interface NonPublicProxyClass$NonPublicInterface
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export NonPublicProxyClass$NonPublicInterface : public ::java::lang::Object {
	$interface(NonPublicProxyClass$NonPublicInterface, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void bar() {}
};

#endif // _NonPublicProxyClass$NonPublicInterface_h_