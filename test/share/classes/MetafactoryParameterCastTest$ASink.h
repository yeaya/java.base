#ifndef _MetafactoryParameterCastTest$ASink_h_
#define _MetafactoryParameterCastTest$ASink_h_
//$ interface MetafactoryParameterCastTest$ASink
//$ extends java.lang.Object

#include <java/lang/Object.h>

class MetafactoryParameterCastTest$A;

class $export MetafactoryParameterCastTest$ASink : public ::java::lang::Object {
	$interface(MetafactoryParameterCastTest$ASink, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void take(::MetafactoryParameterCastTest$A* arg) {}
};

#endif // _MetafactoryParameterCastTest$ASink_h_