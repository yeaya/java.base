#ifndef _InitialValue$MyLocal_h_
#define _InitialValue$MyLocal_h_
//$ class InitialValue$MyLocal
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

class InitialValue;

class $export InitialValue$MyLocal : public ::java::lang::ThreadLocal {
	$class(InitialValue$MyLocal, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	InitialValue$MyLocal();
	void init$(::InitialValue* this$0);
	virtual $Object* initialValue() override;
	::InitialValue* this$0 = nullptr;
	$String* val = nullptr;
};

#endif // _InitialValue$MyLocal_h_