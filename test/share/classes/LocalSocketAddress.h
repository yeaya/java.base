#ifndef _LocalSocketAddress_h_
#define _LocalSocketAddress_h_
//$ class LocalSocketAddress
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export LocalSocketAddress : public ::java::lang::Object {
	$class(LocalSocketAddress, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LocalSocketAddress();
	void init$();
	static void main($StringArray* args);
};

#endif // _LocalSocketAddress_h_