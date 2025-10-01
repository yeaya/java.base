#ifndef _SuppressedExceptions_h_
#define _SuppressedExceptions_h_
//$ class SuppressedExceptions
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export SuppressedExceptions : public ::java::lang::Object {
	$class(SuppressedExceptions, 0, ::java::lang::Object)
public:
	SuppressedExceptions();
	void init$();
	static void basicSupressionTest();
	static void initCausePlumbing();
	static void main($StringArray* args);
	static void noModification();
	static void noSelfSuppression();
	static void selfReference();
	static void serializationTest();
	static $String* message;
};

#endif // _SuppressedExceptions_h_