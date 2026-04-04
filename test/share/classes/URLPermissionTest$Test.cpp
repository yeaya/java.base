#include <URLPermissionTest$Test.h>
#include <URLPermissionTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void URLPermissionTest$Test::init$() {
}

URLPermissionTest$Test::URLPermissionTest$Test() {
}

$Class* URLPermissionTest$Test::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"expected", "Z", nullptr, 0, $field(URLPermissionTest$Test, expected)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(URLPermissionTest$Test, init$, void)},
		{"execute", "()Z", nullptr, $ABSTRACT, $virtualMethod(URLPermissionTest$Test, execute, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"URLPermissionTest$Test",
		"java.lang.Object",
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
	$loadClass(URLPermissionTest$Test, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLPermissionTest$Test);
	});
	return class$;
}

$Class* URLPermissionTest$Test::class$ = nullptr;