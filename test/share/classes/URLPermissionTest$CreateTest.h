#ifndef _URLPermissionTest$CreateTest_h_
#define _URLPermissionTest$CreateTest_h_
//$ class URLPermissionTest$CreateTest
//$ extends URLPermissionTest$Test

#include <URLPermissionTest$Test.h>

class $export URLPermissionTest$CreateTest : public ::URLPermissionTest$Test {
	$class(URLPermissionTest$CreateTest, $NO_CLASS_INIT, ::URLPermissionTest$Test)
public:
	URLPermissionTest$CreateTest();
	void init$($String* arg);
	virtual bool execute() override;
	$String* arg = nullptr;
};

#endif // _URLPermissionTest$CreateTest_h_