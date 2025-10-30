#include <URLPermissionTest$CreateTest.h>

#include <URLPermissionTest$Test.h>
#include <URLPermissionTest.h>
#include <java/net/URLPermission.h>
#include <jcpp.h>

using $URLPermissionTest = ::URLPermissionTest;
using $URLPermissionTest$Test = ::URLPermissionTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLPermission = ::java::net::URLPermission;

$FieldInfo _URLPermissionTest$CreateTest_FieldInfo_[] = {
	{"arg", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$CreateTest, arg)},
	{}
};

$MethodInfo _URLPermissionTest$CreateTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(URLPermissionTest$CreateTest::*)($String*)>(&URLPermissionTest$CreateTest::init$))},
	{"execute", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _URLPermissionTest$CreateTest_InnerClassesInfo_[] = {
	{"URLPermissionTest$CreateTest", "URLPermissionTest", "CreateTest", $STATIC},
	{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _URLPermissionTest$CreateTest_ClassInfo_ = {
	$ACC_SUPER,
	"URLPermissionTest$CreateTest",
	"URLPermissionTest$Test",
	nullptr,
	_URLPermissionTest$CreateTest_FieldInfo_,
	_URLPermissionTest$CreateTest_MethodInfo_,
	nullptr,
	nullptr,
	_URLPermissionTest$CreateTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"URLPermissionTest"
};

$Object* allocate$URLPermissionTest$CreateTest($Class* clazz) {
	return $of($alloc(URLPermissionTest$CreateTest));
}

void URLPermissionTest$CreateTest::init$($String* arg) {
	$URLPermissionTest$Test::init$();
	$set(this, arg, arg);
}

bool URLPermissionTest$CreateTest::execute() {
	try {
		$var($URLPermission, p, $new($URLPermission, this->arg));
		return true;
	} catch ($Exception& e) {
		return false;
	}
	$shouldNotReachHere();
}

URLPermissionTest$CreateTest::URLPermissionTest$CreateTest() {
}

$Class* URLPermissionTest$CreateTest::load$($String* name, bool initialize) {
	$loadClass(URLPermissionTest$CreateTest, name, initialize, &_URLPermissionTest$CreateTest_ClassInfo_, allocate$URLPermissionTest$CreateTest);
	return class$;
}

$Class* URLPermissionTest$CreateTest::class$ = nullptr;