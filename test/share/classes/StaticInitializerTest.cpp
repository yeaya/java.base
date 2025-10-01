#include <StaticInitializerTest.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;

$MethodInfo _StaticInitializerTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StaticInitializerTest::*)()>(&StaticInitializerTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StaticInitializerTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _StaticInitializerTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StaticInitializerTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StaticInitializerTest_MethodInfo_
};

$Object* allocate$StaticInitializerTest($Class* clazz) {
	return $of($alloc(StaticInitializerTest));
}

void StaticInitializerTest::init$() {
}

void StaticInitializerTest::main($StringArray* args) {
	$load(StaticInitializerTest);
	$beforeCallerSensitive();
	$Class* cl = $Class::forName("Bar"_s, false, $(StaticInitializerTest::class$->getClassLoader()));
	if ($nc($($nc(cl)->getDeclaredField("obj"_s)))->get(nullptr) == nullptr) {
		$throwNew($Error);
	}
}

StaticInitializerTest::StaticInitializerTest() {
}

$Class* StaticInitializerTest::load$($String* name, bool initialize) {
	$loadClass(StaticInitializerTest, name, initialize, &_StaticInitializerTest_ClassInfo_, allocate$StaticInitializerTest);
	return class$;
}

$Class* StaticInitializerTest::class$ = nullptr;