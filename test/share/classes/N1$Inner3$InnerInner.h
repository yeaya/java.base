#ifndef _N1$Inner3$InnerInner_h_
#define _N1$Inner3$InnerInner_h_
//$ class N1$Inner3$InnerInner
//$ extends java.lang.Object

#include <java/lang/Array.h>

class N1;
class N1$Inner2;
class N1$Inner3;

class N1$Inner3$InnerInner : public ::java::lang::Object {
	$class(N1$Inner3$InnerInner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	N1$Inner3$InnerInner();
	void init$(::N1$Inner3* this$1);
	virtual ::N1* bam(::N1* n1);
	virtual $ObjectArray* bar(Object$* x1, $ObjectArray* x3, Object$* t1);
	virtual ::N1* baz(::N1* n1);
	virtual ::N1* boom(::N1* n1);
	virtual void foo(Object$* x3);
	::N1$Inner3* this$1 = nullptr;
	bool b = false;
	::N1$Inner2* i2x = nullptr;
};

#endif // _N1$Inner3$InnerInner_h_