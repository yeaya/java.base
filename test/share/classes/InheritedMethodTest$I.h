#ifndef _InheritedMethodTest$I_h_
#define _InheritedMethodTest$I_h_
//$ interface InheritedMethodTest$I
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export InheritedMethodTest$I : public ::java::lang::Object {
	$interface(InheritedMethodTest$I, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* iString() {return nullptr;}
};

#endif // _InheritedMethodTest$I_h_