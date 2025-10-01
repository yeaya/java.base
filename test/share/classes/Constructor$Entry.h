#ifndef _Constructor$Entry_h_
#define _Constructor$Entry_h_
//$ class Constructor$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export Constructor$Entry : public ::java::lang::Object {
	$class(Constructor$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Constructor$Entry();
	void init$($String* context, $String* spec, $String* expected);
	$String* context = nullptr;
	$String* spec = nullptr;
	$String* expected = nullptr;
};

#endif // _Constructor$Entry_h_