#include <URLPermissionTest$HashCodeTest.h>
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

void URLPermissionTest$HashCodeTest::init$($String* arg1, $String* arg2, int32_t hash) {
	$URLPermissionTest$Test::init$();
	$set(this, arg1, arg1);
	$set(this, arg2, arg2);
	this->hash = hash;
}

bool URLPermissionTest$HashCodeTest::execute() {
	$var($URLPermission, p, $new($URLPermission, this->arg1, this->arg2));
	int32_t h = p->hashCode();
	return h == this->hash;
}

URLPermissionTest$HashCodeTest::URLPermissionTest$HashCodeTest() {
}

$Class* URLPermissionTest$HashCodeTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"arg1", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$HashCodeTest, arg1)},
		{"arg2", "Ljava/lang/String;", nullptr, 0, $field(URLPermissionTest$HashCodeTest, arg2)},
		{"hash", "I", nullptr, 0, $field(URLPermissionTest$HashCodeTest, hash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, 0, $method(URLPermissionTest$HashCodeTest, init$, void, $String*, $String*, int32_t)},
		{"execute", "()Z", nullptr, 0, $virtualMethod(URLPermissionTest$HashCodeTest, execute, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"URLPermissionTest$HashCodeTest", "URLPermissionTest", "HashCodeTest", $STATIC},
		{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"URLPermissionTest$HashCodeTest",
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
	$loadClass(URLPermissionTest$HashCodeTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLPermissionTest$HashCodeTest);
	});
	return class$;
}

$Class* URLPermissionTest$HashCodeTest::class$ = nullptr;