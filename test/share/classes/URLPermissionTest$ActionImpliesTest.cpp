#include <URLPermissionTest$ActionImpliesTest.h>

#include <URLPermissionTest$Test.h>
#include <URLPermissionTest.h>
#include <java/net/URLPermission.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $URLPermissionTest = ::URLPermissionTest;
using $URLPermissionTest$Test = ::URLPermissionTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLPermission = ::java::net::URLPermission;
using $Permission = ::java::security::Permission;

$FieldInfo _URLPermissionTest$ActionImpliesTest_FieldInfo_[] = {
	{"arg1", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$ActionImpliesTest, arg1)},
	{"arg2", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$ActionImpliesTest, arg2)},
	{"url1", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$ActionImpliesTest, url1)},
	{"url2", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$ActionImpliesTest, url2)},
	{}
};

$MethodInfo _URLPermissionTest$ActionImpliesTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(URLPermissionTest$ActionImpliesTest::*)($String*,$String*,bool)>(&URLPermissionTest$ActionImpliesTest::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(URLPermissionTest$ActionImpliesTest::*)($String*,$String*,$String*,$String*,bool)>(&URLPermissionTest$ActionImpliesTest::init$))},
	{"execute", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _URLPermissionTest$ActionImpliesTest_InnerClassesInfo_[] = {
	{"URLPermissionTest$ActionImpliesTest", "URLPermissionTest", "ActionImpliesTest", $STATIC},
	{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _URLPermissionTest$ActionImpliesTest_ClassInfo_ = {
	$ACC_SUPER,
	"URLPermissionTest$ActionImpliesTest",
	"URLPermissionTest$Test",
	nullptr,
	_URLPermissionTest$ActionImpliesTest_FieldInfo_,
	_URLPermissionTest$ActionImpliesTest_MethodInfo_,
	nullptr,
	nullptr,
	_URLPermissionTest$ActionImpliesTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"URLPermissionTest"
};

$Object* allocate$URLPermissionTest$ActionImpliesTest($Class* clazz) {
	return $of($alloc(URLPermissionTest$ActionImpliesTest));
}

void URLPermissionTest$ActionImpliesTest::init$($String* arg1, $String* arg2, bool expected) {
	$URLPermissionTest$Test::init$();
	$set(this, url1, "http://www.foo.com/-"_s);
	$set(this, url2, "http://www.foo.com/a/b"_s);
	$set(this, arg1, arg1);
	$set(this, arg2, arg2);
	this->expected = expected;
}

void URLPermissionTest$ActionImpliesTest::init$($String* ur11, $String* url2, $String* arg1, $String* arg2, bool expected) {
	$URLPermissionTest$Test::init$();
	$set(this, url1, "http://www.foo.com/-"_s);
	$set(this, url2, "http://www.foo.com/a/b"_s);
	$set(this, url1, ur11);
	$set(this, url2, url2);
	$set(this, arg1, arg1);
	$set(this, arg2, arg2);
	this->expected = expected;
}

bool URLPermissionTest$ActionImpliesTest::execute() {
	$useLocalCurrentObjectStackCache();
	$var($URLPermission, p1, $new($URLPermission, this->url1, this->arg1));
	$var($URLPermission, p2, $new($URLPermission, this->url2, this->arg2));
	bool result = p1->implies(p2);
	return result == this->expected;
}

URLPermissionTest$ActionImpliesTest::URLPermissionTest$ActionImpliesTest() {
}

$Class* URLPermissionTest$ActionImpliesTest::load$($String* name, bool initialize) {
	$loadClass(URLPermissionTest$ActionImpliesTest, name, initialize, &_URLPermissionTest$ActionImpliesTest_ClassInfo_, allocate$URLPermissionTest$ActionImpliesTest);
	return class$;
}

$Class* URLPermissionTest$ActionImpliesTest::class$ = nullptr;