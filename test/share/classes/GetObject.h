#ifndef _GetObject_h_
#define _GetObject_h_
//$ interface GetObject
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export GetObject : public ::java::lang::Object {
	$interface(GetObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* get($Array<double, 3>* x) {return nullptr;}
};

#endif // _GetObject_h_