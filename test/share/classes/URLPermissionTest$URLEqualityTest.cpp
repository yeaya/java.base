#include <URLPermissionTest$URLEqualityTest.h>

#include <URLPermissionTest$Test.h>
#include <URLPermissionTest.h>
#include <java/net/URLPermission.h>
#include <jcpp.h>

using $URLPermissionTest$Test = ::URLPermissionTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLPermission = ::java::net::URLPermission;

$FieldInfo _URLPermissionTest$URLEqualityTest_FieldInfo_[] = {
	{"arg1", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$URLEqualityTest, arg1)},
	{"arg2", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$URLEqualityTest, arg2)},
	{}
};

$MethodInfo _URLPermissionTest$URLEqualityTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(URLPermissionTest$URLEqualityTest, init$, void, $String*, $String*, bool)},
	{"execute", "()Z", nullptr, 0, $virtualMethod(URLPermissionTest$URLEqualityTest, execute, bool)},
	{}
};

$InnerClassInfo _URLPermissionTest$URLEqualityTest_InnerClassesInfo_[] = {
	{"URLPermissionTest$URLEqualityTest", "URLPermissionTest", "URLEqualityTest", $STATIC},
	{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _URLPermissionTest$URLEqualityTest_ClassInfo_ = {
	$ACC_SUPER,
	"URLPermissionTest$URLEqualityTest",
	"URLPermissionTest$Test",
	nullptr,
	_URLPermissionTest$URLEqualityTest_FieldInfo_,
	_URLPermissionTest$URLEqualityTest_MethodInfo_,
	nullptr,
	nullptr,
	_URLPermissionTest$URLEqualityTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"URLPermissionTest"
};

$Object* allocate$URLPermissionTest$URLEqualityTest($Class* clazz) {
	return $of($alloc(URLPermissionTest$URLEqualityTest));
}

void URLPermissionTest$URLEqualityTest::init$($String* arg1, $String* arg2, bool expected) {
	$URLPermissionTest$Test::init$();
	$set(this, arg1, arg1);
	$set(this, arg2, arg2);
	this->expected = expected;
}

bool URLPermissionTest$URLEqualityTest::execute() {
	$useLocalCurrentObjectStackCache();
	$var($URLPermission, p1, $new($URLPermission, this->arg1));
	$var($URLPermission, p2, $new($URLPermission, this->arg2));
	bool result = p1->equals(p2);
	return result == this->expected;
}

URLPermissionTest$URLEqualityTest::URLPermissionTest$URLEqualityTest() {
}

$Class* URLPermissionTest$URLEqualityTest::load$($String* name, bool initialize) {
	$loadClass(URLPermissionTest$URLEqualityTest, name, initialize, &_URLPermissionTest$URLEqualityTest_ClassInfo_, allocate$URLPermissionTest$URLEqualityTest);
	return class$;
}

$Class* URLPermissionTest$URLEqualityTest::class$ = nullptr;