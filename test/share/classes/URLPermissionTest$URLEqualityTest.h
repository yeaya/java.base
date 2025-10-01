#ifndef _URLPermissionTest$URLEqualityTest_h_
#define _URLPermissionTest$URLEqualityTest_h_
//$ class URLPermissionTest$URLEqualityTest
//$ extends URLPermissionTest$Test

#include <URLPermissionTest$Test.h>

class $export URLPermissionTest$URLEqualityTest : public ::URLPermissionTest$Test {
	$class(URLPermissionTest$URLEqualityTest, $NO_CLASS_INIT, ::URLPermissionTest$Test)
public:
	URLPermissionTest$URLEqualityTest();
	void init$($String* arg1, $String* arg2, bool expected);
	virtual bool execute() override;
	$String* arg1 = nullptr;
	$String* arg2 = nullptr;
};

#endif // _URLPermissionTest$URLEqualityTest_h_