#ifndef _URLPermissionTest$URLImpliesTest_h_
#define _URLPermissionTest$URLImpliesTest_h_
//$ class URLPermissionTest$URLImpliesTest
//$ extends URLPermissionTest$Test

#include <URLPermissionTest$Test.h>

class $export URLPermissionTest$URLImpliesTest : public ::URLPermissionTest$Test {
	$class(URLPermissionTest$URLImpliesTest, $NO_CLASS_INIT, ::URLPermissionTest$Test)
public:
	URLPermissionTest$URLImpliesTest();
	void init$($String* arg1, $String* arg2, bool expected);
	virtual bool execute() override;
	$String* arg1 = nullptr;
	$String* arg2 = nullptr;
};

#endif // _URLPermissionTest$URLImpliesTest_h_