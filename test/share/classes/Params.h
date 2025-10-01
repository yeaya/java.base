#ifndef _Params_h_
#define _Params_h_
//$ class Params
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Params : public ::java::lang::Object {
	$class(Params, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Params();
	void init$();
	virtual void mixed($String* s1, $String* s2, $String* s3);
	virtual void noParams();
	virtual void onlyAnnotated($String* s1, $String* s2, $String* s3);
	virtual void unAnnotated($String* s1, $String* s2, $String* s3);
};

#endif // _Params_h_