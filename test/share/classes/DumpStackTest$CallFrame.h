#ifndef _DumpStackTest$CallFrame_h_
#define _DumpStackTest$CallFrame_h_
//$ class DumpStackTest$CallFrame
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export DumpStackTest$CallFrame : public ::java::lang::Object {
	$class(DumpStackTest$CallFrame, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DumpStackTest$CallFrame();
	void init$($Class* c, $String* methodname);
	void init$($String* classname, $String* methodname);
	virtual $String* getClassName();
	virtual $String* getFileName();
	virtual $String* getMethodName();
	virtual $String* toString() override;
	$String* classname = nullptr;
	$String* methodname = nullptr;
};

#endif // _DumpStackTest$CallFrame_h_