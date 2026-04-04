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

void URLPermissionTest$URLEqualityTest::init$($String* arg1, $String* arg2, bool expected) {
	$URLPermissionTest$Test::init$();
	$set(this, arg1, arg1);
	$set(this, arg2, arg2);
	this->expected = expected;
}

bool URLPermissionTest$URLEqualityTest::execute() {
	$useLocalObjectStack();
	$var($URLPermission, p1, $new($URLPermission, this->arg1));
	$var($URLPermission, p2, $new($URLPermission, this->arg2));
	bool result = p1->equals(p2);
	return result == this->expected;
}

URLPermissionTest$URLEqualityTest::URLPermissionTest$URLEqualityTest() {
}

$Class* URLPermissionTest$URLEqualityTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"arg1", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$URLEqualityTest, arg1)},
		{"arg2", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$URLEqualityTest, arg2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(URLPermissionTest$URLEqualityTest, init$, void, $String*, $String*, bool)},
		{"execute", "()Z", nullptr, 0, $virtualMethod(URLPermissionTest$URLEqualityTest, execute, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"URLPermissionTest$URLEqualityTest", "URLPermissionTest", "URLEqualityTest", $STATIC},
		{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"URLPermissionTest$URLEqualityTest",
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
	$loadClass(URLPermissionTest$URLEqualityTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLPermissionTest$URLEqualityTest);
	});
	return class$;
}

$Class* URLPermissionTest$URLEqualityTest::class$ = nullptr;