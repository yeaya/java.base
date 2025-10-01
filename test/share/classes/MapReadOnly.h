#ifndef _MapReadOnly_h_
#define _MapReadOnly_h_
//$ class MapReadOnly
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export MapReadOnly : public ::java::lang::Object {
	$class(MapReadOnly, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MapReadOnly();
	void init$();
	static void main($StringArray* args);
};

#endif // _MapReadOnly_h_