#ifndef _GetArray_h_
#define _GetArray_h_
//$ interface GetArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export GetArray : public ::java::lang::Object {
	$interface(GetArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $ObjectArray* get($Array<double, 3>* x) {return nullptr;}
};

#endif // _GetArray_h_