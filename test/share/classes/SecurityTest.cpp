#include <SecurityTest.h>
#include <java/io/File.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessControlException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $AccessControlException = ::java::security::AccessControlException;

void SecurityTest::init$() {
}

void SecurityTest::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($File, f, $File::createTempFile("foo"_s, nullptr));
	} catch ($AccessControlException& x) {
		$throw(x);
	} catch ($SecurityException& x) {
		if ($$nc(x->getMessage())->equals("Unable to create temporary file"_s)) {
			return;
		}
		$throw(x);
	}
	$throwNew($Exception, "SecurityException not thrown"_s);
}

SecurityTest::SecurityTest() {
}

$Class* SecurityTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SecurityTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SecurityTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SecurityTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityTest);
	});
	return class$;
}

$Class* SecurityTest::class$ = nullptr;