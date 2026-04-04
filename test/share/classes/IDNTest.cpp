#include <IDNTest.h>
#include <java/net/Socket.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Socket = ::java::net::Socket;
using $UnknownHostException = ::java::net::UnknownHostException;

void IDNTest::init$() {
}

void IDNTest::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($Socket, s, $new($Socket, u"柴田芳樹"_s, 8000));
	} catch ($UnknownHostException& e) {
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	try {
		$var($Socket, s, $new($Socket, "ho st"_s, 8000));
	} catch ($UnknownHostException& e) {
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
}

IDNTest::IDNTest() {
}

$Class* IDNTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IDNTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IDNTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IDNTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IDNTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IDNTest);
	});
	return class$;
}

$Class* IDNTest::class$ = nullptr;