#ifndef _Bash$TestReference_h_
#define _Bash$TestReference_h_
//$ class Bash$TestReference
//$ extends java.lang.ref.SoftReference

#include <java/lang/ref/SoftReference.h>

class $export Bash$TestReference : public ::java::lang::ref::SoftReference {
	$class(Bash$TestReference, $NO_CLASS_INIT, ::java::lang::ref::SoftReference)
public:
	Bash$TestReference();
	void init$(Object$* referent);
	static ::Bash$TestReference* head;
	::Bash$TestReference* next = nullptr;
};

#endif // _Bash$TestReference_h_