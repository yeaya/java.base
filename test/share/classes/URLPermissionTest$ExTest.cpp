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
	$FieldInfo fieldInfos$$[] = {
		{"arg", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$ExTest, arg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(URLPermissionTest$ExTest, init$, void, $String*)},
		{"execute", "()Z", nullptr, 0, $virtualMethod(URLPermissionTest$ExTest, execute, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"URLPermissionTest$ExTest", "URLPermissionTest", "ExTest", $STATIC},
		{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"URLPermissionTest$ExTest",
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
	$loadClass(URLPermissionTest$ExTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLPermissionTest$ExTest);
	});
	return class$;
}

$Class* URLPermissionTest$ExTest::class$ = nullptr;