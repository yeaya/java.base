#ifndef _MemoryLeak_h_
#define _MemoryLeak_h_
//$ class MemoryLeak
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export MemoryLeak : public ::java::lang::Object {
	$class(MemoryLeak, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MemoryLeak();
	void init$();
	static void main($StringArray* args);
};

#endif // _MemoryLeak_h_