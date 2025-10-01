#ifndef _URLPermissionTest$ActionImpliesTest_h_
#define _URLPermissionTest$ActionImpliesTest_h_
//$ class URLPermissionTest$ActionImpliesTest
//$ extends URLPermissionTest$Test

#include <URLPermissionTest$Test.h>

class $export URLPermissionTest$ActionImpliesTest : public ::URLPermissionTest$Test {
	$class(URLPermissionTest$ActionImpliesTest, $NO_CLASS_INIT, ::URLPermissionTest$Test)
public:
	URLPermissionTest$ActionImpliesTest();
	void init$($String* arg1, $String* arg2, bool expected);
	void init$($String* ur11, $String* url2, $String* arg1, $String* arg2, bool expected);
	virtual bool execute() override;
	$String* arg1 = nullptr;
	$String* arg2 = nullptr;
	$String* url1 = nullptr;
	$String* url2 = nullptr;
};

#endif // _URLPermissionTest$ActionImpliesTest_h_