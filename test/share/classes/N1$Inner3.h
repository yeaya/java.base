#ifndef _N1$Inner3_h_
#define _N1$Inner3_h_
//$ class N1$Inner3
//$ extends java.lang.Object

#include <java/lang/Array.h>

class N1;
class N1$Inner1;
class N1$Inner3$InnerInner;

class N1$Inner3 : public ::java::lang::Object {
	$class(N1$Inner3, $NO_CLASS_INIT, ::java::lang::Object)
public:
	N1$Inner3();
	void init$(::N1* this$0, Object$* x1, Object$* x2, Object$* x3, Object$* t1, Object$* t2);
	void init$(::N1* this$0, Object$* t, Object$* r, Object$* s, Object$* x1);
	virtual int32_t shazam(bool b, int16_t s, $ints* ia, $ObjectArray* oa, ::N1$Inner1* i1, ::N1$Inner1* i1a, ::N1$Inner3$InnerInner* ii);
	::N1* this$0 = nullptr;
	$Object* x1 = nullptr;
};

#endif // _N1$Inner3_h_