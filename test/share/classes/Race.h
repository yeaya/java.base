#ifndef _Race_h_
#define _Race_h_
//$ class Race
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("THREADS")
#undef THREADS

class $export Race : public ::java::lang::Object {
	$class(Race, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Race();
	void init$();
	static void main($StringArray* args);
	static const int32_t THREADS = 100;
};

#pragma pop_macro("THREADS")

#endif // _Race_h_