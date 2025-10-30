#include <toStringTest.h>

#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

#undef ABSTRACT
#undef FINAL
#undef INTERFACE
#undef NATIVE
#undef PRIVATE
#undef PROTECTED
#undef PUBLIC
#undef STATIC
#undef STRICT
#undef SYNCHRONIZED
#undef TRANSIENT
#undef VOLATILE

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Modifier = ::java::lang::reflect::Modifier;

$MethodInfo _toStringTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(toStringTest::*)()>(&toStringTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&toStringTest::main))},
	{"testString", "(ILjava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$String*)>(&toStringTest::testString))},
	{}
};

$ClassInfo _toStringTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"toStringTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_toStringTest_MethodInfo_
};

$Object* allocate$toStringTest($Class* clazz) {
	return $of($alloc(toStringTest));
}

void toStringTest::init$() {
}

void toStringTest::testString(int32_t test, $String* expected) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($Modifier::toString(test)))->equals(expected)) {
		$throwNew($RuntimeException, $$str({$$str(test), " yields incorrect toString result"_s}));
	}
}

void toStringTest::main($StringArray* argv) {
	int32_t allMods = (((((((((($Modifier::PUBLIC | $Modifier::PROTECTED) | $Modifier::PRIVATE) | $Modifier::ABSTRACT) | $Modifier::STATIC) | $Modifier::FINAL) | $Modifier::TRANSIENT) | $Modifier::VOLATILE) | $Modifier::SYNCHRONIZED) | $Modifier::NATIVE) | $Modifier::STRICT) | $Modifier::INTERFACE;
	$var($String, allModsString, "public protected private abstract static final transient volatile synchronized native strictfp interface"_s);
	testString(0, ""_s);
	testString(allMods, allModsString);
	testString(~0, allModsString);
}

toStringTest::toStringTest() {
}

$Class* toStringTest::load$($String* name, bool initialize) {
	$loadClass(toStringTest, name, initialize, &_toStringTest_ClassInfo_, allocate$toStringTest);
	return class$;
}

$Class* toStringTest::class$ = nullptr;