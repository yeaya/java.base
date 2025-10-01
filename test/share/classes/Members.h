#ifndef _Members_h_
#define _Members_h_
//$ class Members
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export Members : public ::java::lang::Object {
	$class(Members, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Members();
	void init$();
	void init$(bool b);
	void init$(int32_t i);
	void privateMethod();
	virtual void protectedMethod();
	virtual void publicMethod();
	$Object* publicField = nullptr;
	$Object* protectedField = nullptr;
	$Object* privateField = nullptr;
	static const int32_t publicFinalField = 10;
	static const int32_t privateFinalField = 10;
	static const int32_t publicStaticFinalField = 10;
	static const int32_t privateStaticFinalField = 10;
};

#endif // _Members_h_