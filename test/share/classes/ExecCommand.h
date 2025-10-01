#ifndef _ExecCommand_h_
#define _ExecCommand_h_
//$ class ExecCommand
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_RTE_ARG")
#undef TEST_RTE_ARG
#pragma push_macro("TEST_RTE_GI")
#undef TEST_RTE_GI

class $export ExecCommand : public ::java::lang::Object {
	$class(ExecCommand, 0, ::java::lang::Object)
public:
	ExecCommand();
	void init$();
	static void checkOut($String* path);
	static void deleteOut($String* path);
	static void main($StringArray* _args);
	static $StringArray* TEST_RTE_ARG;
	static $StringArray* doCmdCopy;
	static $Array<::java::lang::String, 2>* TEST_RTE_GI;
};

#pragma pop_macro("TEST_RTE_ARG")
#pragma pop_macro("TEST_RTE_GI")

#endif // _ExecCommand_h_