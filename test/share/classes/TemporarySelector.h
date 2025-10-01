#ifndef _TemporarySelector_h_
#define _TemporarySelector_h_
//$ class TemporarySelector
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export TemporarySelector : public ::java::lang::Object {
	$class(TemporarySelector, 0, ::java::lang::Object)
public:
	TemporarySelector();
	void init$();
	static void main($StringArray* args);
	static $volatile(bool) done;
};

#endif // _TemporarySelector_h_