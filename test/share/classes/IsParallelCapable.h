#ifndef _IsParallelCapable_h_
#define _IsParallelCapable_h_
//$ class IsParallelCapable
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export IsParallelCapable : public ::java::lang::Object {
	$class(IsParallelCapable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IsParallelCapable();
	void init$();
	static void main($StringArray* args);
	static void testClassLoaderClass($Class* klazz);
};

#endif // _IsParallelCapable_h_