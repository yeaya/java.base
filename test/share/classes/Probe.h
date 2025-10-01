#ifndef _Probe_h_
#define _Probe_h_
//$ class Probe
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Probe : public ::java::lang::Object {
	$class(Probe, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Probe();
	void init$();
	static void main($StringArray* args);
	static int32_t probe($Class* c);
};

#endif // _Probe_h_