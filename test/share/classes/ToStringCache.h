#ifndef _ToStringCache_h_
#define _ToStringCache_h_
//$ class ToStringCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ToStringCache : public ::java::lang::Object {
	$class(ToStringCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ToStringCache();
	void init$();
	static void checkEqual($String* s1, $String* s2);
	static void checkUnequal($String* s1, $String* s2);
	static void main($StringArray* args);
};

#endif // _ToStringCache_h_