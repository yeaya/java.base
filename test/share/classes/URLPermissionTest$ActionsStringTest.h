#ifndef _URLPermissionTest$ActionsStringTest_h_
#define _URLPermissionTest$ActionsStringTest_h_
//$ class URLPermissionTest$ActionsStringTest
//$ extends URLPermissionTest$Test

#include <URLPermissionTest$Test.h>

class $export URLPermissionTest$ActionsStringTest : public ::URLPermissionTest$Test {
	$class(URLPermissionTest$ActionsStringTest, $NO_CLASS_INIT, ::URLPermissionTest$Test)
public:
	URLPermissionTest$ActionsStringTest();
	void init$($String* arg, $String* expectedActions);
	virtual bool execute() override;
	$String* expectedActions = nullptr;
	$String* arg = nullptr;
};

#endif // _URLPermissionTest$ActionsStringTest_h_