#ifndef _TLRemoveTest$1_h_
#define _TLRemoveTest$1_h_
//$ class TLRemoveTest$1
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

class TLRemoveTest$1 : public ::java::lang::ThreadLocal {
	$class(TLRemoveTest$1, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	TLRemoveTest$1();
	void init$();
	virtual $Object* initialValue() override;
};

#endif // _TLRemoveTest$1_h_