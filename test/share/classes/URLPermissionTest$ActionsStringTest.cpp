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

void URLPermissionTest$ActionsStringTest::init$($String* arg, $String* expectedActions) {
	$URLPermissionTest$Test::init$();
	$set(this, arg, arg);
	$set(this, expectedActions, expectedActions);
}

bool URLPermissionTest$ActionsStringTest::execute() {
	$useLocalObjectStack();
	$var($String, url, "http://www.foo.com/"_s);
	$var($URLPermission, urlp, $new($URLPermission, url, this->arg));
	return ($nc(this->expectedActions)->equals($(urlp->getActions())));
}

URLPermissionTest$ActionsStringTest::URLPermissionTest$ActionsStringTest() {
}

$Class* URLPermissionTest$ActionsStringTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"expectedActions", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$ActionsStringTest, expectedActions)},
		{"arg", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$ActionsStringTest, arg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(URLPermissionTest$ActionsStringTest, init$, void, $String*, $String*)},
		{"execute", "()Z", nullptr, 0, $virtualMethod(URLPermissionTest$ActionsStringTest, execute, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"URLPermissionTest$ActionsStringTest", "URLPermissionTest", "ActionsStringTest", $STATIC},
		{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"URLPermissionTest$ActionsStringTest",
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
	$loadClass(URLPermissionTest$ActionsStringTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLPermissionTest$ActionsStringTest);
	});
	return class$;
}

$Class* URLPermissionTest$ActionsStringTest::class$ = nullptr;