#ifndef _URLPermissionTest_h_
#define _URLPermissionTest_h_
//$ class URLPermissionTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BAR_URL")
#undef BAR_URL
#pragma push_macro("FOO_URL")
#undef FOO_URL

class URLPermissionTest$ActionImpliesTest;
class URLPermissionTest$ActionsStringTest;
class URLPermissionTest$CreateTest;
class URLPermissionTest$ExTest;
class URLPermissionTest$HashCodeTest;
class URLPermissionTest$Test;
class URLPermissionTest$URLEqualityTest;
class URLPermissionTest$URLImpliesTest;

class $export URLPermissionTest : public ::java::lang::Object {
	$class(URLPermissionTest, 0, ::java::lang::Object)
public:
	URLPermissionTest();
	void init$();
	static ::URLPermissionTest$ActionImpliesTest* actest($String* arg1, $String* arg2, bool expected);
	static ::URLPermissionTest$ActionImpliesTest* actest($String* url1, $String* url2, $String* arg1, $String* arg2, bool expected);
	static ::URLPermissionTest$ActionsStringTest* actionstest($String* arg, $String* expectedActions);
	static ::URLPermissionTest$CreateTest* createtest($String* arg);
	static ::URLPermissionTest$URLEqualityTest* eqtest($String* arg1, $String* arg2, bool expected);
	static ::URLPermissionTest$ExTest* extest($String* arg);
	static ::URLPermissionTest$HashCodeTest* hashtest($String* arg1, $String* arg2, int32_t expected);
	static ::URLPermissionTest$URLImpliesTest* imtest($String* arg1, $String* arg2, bool expected);
	static void main($StringArray* args);
	static void serializationTest($String* name, $String* actions);
	static $Array<URLPermissionTest$Test>* pathImplies;
	static $Array<URLPermissionTest$Test>* exceptionTests;
	static $Array<URLPermissionTest$Test>* hashTests;
	static $Array<URLPermissionTest$Test>* pathImplies2;
	static $String* FOO_URL;
	static $String* BAR_URL;
	static $Array<URLPermissionTest$Test>* actionImplies;
	static $Array<URLPermissionTest$Test>* actionsStringTest;
	static $Array<URLPermissionTest$Test>* equalityTests;
	static $Array<URLPermissionTest$Test>* createTests;
	static bool failed;
};

#pragma pop_macro("BAR_URL")
#pragma pop_macro("FOO_URL")

#endif // _URLPermissionTest_h_