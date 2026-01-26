#include <URLPermissionTest$ActionsStringTest.h>

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

$FieldInfo _URLPermissionTest$ActionsStringTest_FieldInfo_[] = {
	{"expectedActions", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$ActionsStringTest, expectedActions)},
	{"arg", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$ActionsStringTest, arg)},
	{}
};

$MethodInfo _URLPermissionTest$ActionsStringTest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(URLPermissionTest$ActionsStringTest, init$, void, $String*, $String*)},
	{"execute", "()Z", nullptr, 0, $virtualMethod(URLPermissionTest$ActionsStringTest, execute, bool)},
	{}
};

$InnerClassInfo _URLPermissionTest$ActionsStringTest_InnerClassesInfo_[] = {
	{"URLPermissionTest$ActionsStringTest", "URLPermissionTest", "ActionsStringTest", $STATIC},
	{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _URLPermissionTest$ActionsStringTest_ClassInfo_ = {
	$ACC_SUPER,
	"URLPermissionTest$ActionsStringTest",
	"URLPermissionTest$Test",
	nullptr,
	_URLPermissionTest$ActionsStringTest_FieldInfo_,
	_URLPermissionTest$ActionsStringTest_MethodInfo_,
	nullptr,
	nullptr,
	_URLPermissionTest$ActionsStringTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"URLPermissionTest"
};

$Object* allocate$URLPermissionTest$ActionsStringTest($Class* clazz) {
	return $of($alloc(URLPermissionTest$ActionsStringTest));
}

void URLPermissionTest$ActionsStringTest::init$($String* arg, $String* expectedActions) {
	$URLPermissionTest$Test::init$();
	$set(this, arg, arg);
	$set(this, expectedActions, expectedActions);
}

bool URLPermissionTest$ActionsStringTest::execute() {
	$useLocalCurrentObjectStackCache();
	$var($String, url, "http://www.foo.com/"_s);
	$var($URLPermission, urlp, $new($URLPermission, url, this->arg));
	return ($nc(this->expectedActions)->equals($(urlp->getActions())));
}

URLPermissionTest$ActionsStringTest::URLPermissionTest$ActionsStringTest() {
}

$Class* URLPermissionTest$ActionsStringTest::load$($String* name, bool initialize) {
	$loadClass(URLPermissionTest$ActionsStringTest, name, initialize, &_URLPermissionTest$ActionsStringTest_ClassInfo_, allocate$URLPermissionTest$ActionsStringTest);
	return class$;
}

$Class* URLPermissionTest$ActionsStringTest::class$ = nullptr;