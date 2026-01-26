#include <URLPermissionTest$URLImpliesTest.h>

#include <URLPermissionTest$Test.h>
#include <URLPermissionTest.h>
#include <java/net/URLPermission.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $URLPermissionTest$Test = ::URLPermissionTest$Test;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLPermission = ::java::net::URLPermission;
using $Permission = ::java::security::Permission;

$FieldInfo _URLPermissionTest$URLImpliesTest_FieldInfo_[] = {
	{"arg1", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$URLImpliesTest, arg1)},
	{"arg2", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$URLImpliesTest, arg2)},
	{}
};

$MethodInfo _URLPermissionTest$URLImpliesTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(URLPermissionTest$URLImpliesTest, init$, void, $String*, $String*, bool)},
	{"execute", "()Z", nullptr, 0, $virtualMethod(URLPermissionTest$URLImpliesTest, execute, bool)},
	{}
};

$InnerClassInfo _URLPermissionTest$URLImpliesTest_InnerClassesInfo_[] = {
	{"URLPermissionTest$URLImpliesTest", "URLPermissionTest", "URLImpliesTest", $STATIC},
	{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _URLPermissionTest$URLImpliesTest_ClassInfo_ = {
	$ACC_SUPER,
	"URLPermissionTest$URLImpliesTest",
	"URLPermissionTest$Test",
	nullptr,
	_URLPermissionTest$URLImpliesTest_FieldInfo_,
	_URLPermissionTest$URLImpliesTest_MethodInfo_,
	nullptr,
	nullptr,
	_URLPermissionTest$URLImpliesTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"URLPermissionTest"
};

$Object* allocate$URLPermissionTest$URLImpliesTest($Class* clazz) {
	return $of($alloc(URLPermissionTest$URLImpliesTest));
}

void URLPermissionTest$URLImpliesTest::init$($String* arg1, $String* arg2, bool expected) {
	$URLPermissionTest$Test::init$();
	$set(this, arg1, arg1);
	$set(this, arg2, arg2);
	this->expected = expected;
}

bool URLPermissionTest$URLImpliesTest::execute() {
	$useLocalCurrentObjectStackCache();
	$var($URLPermission, p1, $new($URLPermission, this->arg1, "GET:*"_s));
	$var($URLPermission, p2, $new($URLPermission, this->arg2, "GET:*"_s));
	bool result = p1->implies(p2);
	if (result != this->expected) {
		$nc($System::out)->println($$str({"p1 = "_s, p1}));
		$nc($System::out)->println($$str({"p2 = "_s, p2}));
	}
	return result == this->expected;
}

URLPermissionTest$URLImpliesTest::URLPermissionTest$URLImpliesTest() {
}

$Class* URLPermissionTest$URLImpliesTest::load$($String* name, bool initialize) {
	$loadClass(URLPermissionTest$URLImpliesTest, name, initialize, &_URLPermissionTest$URLImpliesTest_ClassInfo_, allocate$URLPermissionTest$URLImpliesTest);
	return class$;
}

$Class* URLPermissionTest$URLImpliesTest::class$ = nullptr;