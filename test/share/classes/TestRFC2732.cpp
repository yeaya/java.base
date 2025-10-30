#include <TestRFC2732.h>

#include <java/net/URL.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;

$MethodInfo _TestRFC2732_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestRFC2732::*)()>(&TestRFC2732::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestRFC2732::main))},
	{}
};

$ClassInfo _TestRFC2732_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestRFC2732",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestRFC2732_MethodInfo_
};

$Object* allocate$TestRFC2732($Class* clazz) {
	return $of($alloc(TestRFC2732));
}

void TestRFC2732::init$() {
}

void TestRFC2732::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($URL, u, nullptr);
	try {
		$assign(u, $new($URL, "http"_s, "10:100::1234"_s, 99, "/index"_s));
		bool var$0 = !$nc($(u->toString()))->equals("http://[10:100::1234]:99/index"_s);
		if (var$0 || !$nc($(u->toExternalForm()))->equals("http://[10:100::1234]:99/index"_s)) {
			$throwNew($Exception, "Failed test for RFC 2732"_s);
		}
		$nc($System::out)->println("Test passed!"_s);
	} catch ($Exception& exp) {
		$var($String, var$1, $$str({$(exp->getMessage()), "Expect: http://[10:100::1234]:99/index Got: "_s}));
		$throwNew($RuntimeException, $$concat(var$1, $($nc(u)->toExternalForm())));
	}
}

TestRFC2732::TestRFC2732() {
}

$Class* TestRFC2732::load$($String* name, bool initialize) {
	$loadClass(TestRFC2732, name, initialize, &_TestRFC2732_ClassInfo_, allocate$TestRFC2732);
	return class$;
}

$Class* TestRFC2732::class$ = nullptr;