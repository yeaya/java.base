#ifndef _NonPublicProxyClass$PublicInterface_h_
#define _NonPublicProxyClass$PublicInterface_h_
//$ interface NonPublicProxyClass$PublicInterface
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export NonPublicProxyClass$PublicInterface : public ::java::lang::Object {
	$interface(NonPublicProxyClass$PublicInterface, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void foo() {}
};

#endif // _NonPublicProxyClass$PublicInterface_h_