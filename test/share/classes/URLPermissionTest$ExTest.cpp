#include <URLPermissionTest$ExTest.h>

#include <URLPermissionTest$Test.h>
#include <URLPermissionTest.h>
#include <java/net/URLPermission.h>
#include <jcpp.h>

using $URLPermissionTest$Test = ::URLPermissionTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLPermission = ::java::net::URLPermission;

$FieldInfo _URLPermissionTest$ExTest_FieldInfo_[] = {
	{"arg", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$ExTest, arg)},
	{}
};

$MethodInfo _URLPermissionTest$ExTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(URLPermissionTest$ExTest, init$, void, $String*)},
	{"execute", "()Z", nullptr, 0, $virtualMethod(URLPermissionTest$ExTest, execute, bool)},
	{}
};

$InnerClassInfo _URLPermissionTest$ExTest_InnerClassesInfo_[] = {
	{"URLPermissionTest$ExTest", "URLPermissionTest", "ExTest", $STATIC},
	{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _URLPermissionTest$ExTest_ClassInfo_ = {
	$ACC_SUPER,
	"URLPermissionTest$ExTest",
	"URLPermissionTest$Test",
	nullptr,
	_URLPermissionTest$ExTest_FieldInfo_,
	_URLPermissionTest$ExTest_MethodInfo_,
	nullptr,
	nullptr,
	_URLPermissionTest$ExTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"URLPermissionTest"
};

$Object* allocate$URLPermissionTest$ExTest($Class* clazz) {
	return $of($alloc(URLPermissionTest$ExTest));
}

void URLPermissionTest$ExTest::init$($String* arg) {
	$URLPermissionTest$Test::init$();
	$set(this, arg, arg);
}

bool URLPermissionTest$ExTest::execute() {
	try {
		$var($URLPermission, p, $new($URLPermission, this->arg));
		return false;
	} catch ($IllegalArgumentException& e) {
		return true;
	}
	$shouldNotReachHere();
}

URLPermissionTest$ExTest::URLPermissionTest$ExTest() {
}

$Class* URLPermissionTest$ExTest::load$($String* name, bool initialize) {
	$loadClass(URLPermissionTest$ExTest, name, initialize, &_URLPermissionTest$ExTest_ClassInfo_, allocate$URLPermissionTest$ExTest);
	return class$;
}

$Class* URLPermissionTest$ExTest::class$ = nullptr;