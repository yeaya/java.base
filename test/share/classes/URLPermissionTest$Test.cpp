#include <URLPermissionTest$Test.h>

#include <URLPermissionTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _URLPermissionTest$Test_FieldInfo_[] = {
	{"expected", "Z", nullptr, 0, $field(URLPermissionTest$Test, expected)},
	{}
};

$MethodInfo _URLPermissionTest$Test_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(URLPermissionTest$Test, init$, void)},
	{"execute", "()Z", nullptr, $ABSTRACT, $virtualMethod(URLPermissionTest$Test, execute, bool)},
	{}
};

$InnerClassInfo _URLPermissionTest$Test_InnerClassesInfo_[] = {
	{"URLPermissionTest$Test", "URLPermissionTest", "Test", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _URLPermissionTest$Test_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"URLPermissionTest$Test",
	"java.lang.Object",
	nullptr,
	_URLPermissionTest$Test_FieldInfo_,
	_URLPermissionTest$Test_MethodInfo_,
	nullptr,
	nullptr,
	_URLPermissionTest$Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"URLPermissionTest"
};

$Object* allocate$URLPermissionTest$Test($Class* clazz) {
	return $of($alloc(URLPermissionTest$Test));
}

void URLPermissionTest$Test::init$() {
}

URLPermissionTest$Test::URLPermissionTest$Test() {
}

$Class* URLPermissionTest$Test::load$($String* name, bool initialize) {
	$loadClass(URLPermissionTest$Test, name, initialize, &_URLPermissionTest$Test_ClassInfo_, allocate$URLPermissionTest$Test);
	return class$;
}

$Class* URLPermissionTest$Test::class$ = nullptr;