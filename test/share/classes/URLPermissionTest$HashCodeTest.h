#ifndef _URLPermissionTest$HashCodeTest_h_
#define _URLPermissionTest$HashCodeTest_h_
//$ class URLPermissionTest$HashCodeTest
//$ extends URLPermissionTest$Test

#include <URLPermissionTest$Test.h>

class $export URLPermissionTest$HashCodeTest : public ::URLPermissionTest$Test {
	$class(URLPermissionTest$HashCodeTest, $NO_CLASS_INIT, ::URLPermissionTest$Test)
public:
	URLPermissionTest$HashCodeTest();
	void init$($String* arg1, $String* arg2, int32_t hash);
	virtual bool execute() override;
	$String* arg1 = nullptr;
	$String* arg2 = nullptr;
	int32_t hash = 0;
};

#endif // _URLPermissionTest$HashCodeTest_h_