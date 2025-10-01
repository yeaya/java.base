#ifndef _URLPermissionTest$ExTest_h_
#define _URLPermissionTest$ExTest_h_
//$ class URLPermissionTest$ExTest
//$ extends URLPermissionTest$Test

#include <URLPermissionTest$Test.h>

class $export URLPermissionTest$ExTest : public ::URLPermissionTest$Test {
	$class(URLPermissionTest$ExTest, $NO_CLASS_INIT, ::URLPermissionTest$Test)
public:
	URLPermissionTest$ExTest();
	void init$($String* arg);
	virtual bool execute() override;
	$String* arg = nullptr;
};

#endif // _URLPermissionTest$ExTest_h_