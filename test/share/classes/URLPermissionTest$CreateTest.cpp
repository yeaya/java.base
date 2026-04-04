#include <URLPermissionTest$CreateTest.h>
#include <URLPermissionTest$Test.h>
#include <URLPermissionTest.h>
#include <java/net/URLPermission.h>
#include <jcpp.h>

using $URLPermissionTest$Test = ::URLPermissionTest$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URLPermission = ::java::net::URLPermission;

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
	$FieldInfo fieldInfos$$[] = {
		{"arg", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$CreateTest, arg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(URLPermissionTest$CreateTest, init$, void, $String*)},
		{"execute", "()Z", nullptr, 0, $virtualMethod(URLPermissionTest$CreateTest, execute, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"URLPermissionTest$CreateTest", "URLPermissionTest", "CreateTest", $STATIC},
		{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"URLPermissionTest$CreateTest",
		"URLPermissionTest$Test",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"URLPermissionTest"
	};
	$loadClass(URLPermissionTest$CreateTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLPermissionTest$CreateTest);
	});
	return class$;
}

$Class* URLPermissionTest$CreateTest::class$ = nullptr;