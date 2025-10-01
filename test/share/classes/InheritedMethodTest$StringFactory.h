#ifndef _InheritedMethodTest$StringFactory_h_
#define _InheritedMethodTest$StringFactory_h_
//$ interface InheritedMethodTest$StringFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export InheritedMethodTest$StringFactory : public ::java::lang::Object {
	$interface(InheritedMethodTest$StringFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* get() {return nullptr;}
};

#endif // _InheritedMethodTest$StringFactory_h_