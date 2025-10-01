#ifndef _OOMEInReferenceHandler_h_
#define _OOMEInReferenceHandler_h_
//$ class OOMEInReferenceHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export OOMEInReferenceHandler : public ::java::lang::Object {
	$class(OOMEInReferenceHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OOMEInReferenceHandler();
	void init$();
	static $ObjectArray* fillHeap();
	static void main($StringArray* args);
};

#endif // _OOMEInReferenceHandler_h_