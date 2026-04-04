#include <Inet6AddressSerTest.h>
#include <Inet6AddressSerTest$PayloadTest.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/CharSequence.h>
#include <java/net/Inet6Address.h>
#include <jcpp.h>

using $Inet6AddressSerTest$PayloadTest = ::Inet6AddressSerTest$PayloadTest;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Inet6Address = ::java::net::Inet6Address;

void Inet6AddressSerTest::init$() {
}

void Inet6AddressSerTest::main($StringArray* args) {
	$init(Inet6AddressSerTest);
	$useLocalObjectStack();
	try {
		$load($Inet6Address);
		$$new($Inet6AddressSerTest$PayloadTest)->test($($Inet6Address::class$->getName()));
		$throwNew($RuntimeException, "Expected exception not raised"_s);
	} catch ($InvalidObjectException& ioe) {
		if ($$nc(ioe->getMessage())->contains("invalid address length"_s)) {
			$nc($System::out)->println($($String::format("Got expected exception: %s"_s, $$new($ObjectArray, {ioe}))));
		} else {
			$throwNew($RuntimeException, "Expected exception not raised"_s);
		}
	} catch ($RuntimeException& re) {
		$throwNew($RuntimeException, "Expected exception not raised"_s);
	}
}

Inet6AddressSerTest::Inet6AddressSerTest() {
}

$Class* Inet6AddressSerTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Inet6AddressSerTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Inet6AddressSerTest, main, void, $StringArray*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Inet6AddressSerTest$PayloadTest", "Inet6AddressSerTest", "PayloadTest", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Inet6AddressSerTest",
		"java.lang.Object",
		"java.io.ObjectStreamConstants",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Inet6AddressSerTest$PayloadTest"
	};
	$loadClass(Inet6AddressSerTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Inet6AddressSerTest);
	});
	return class$;
}

$Class* Inet6AddressSerTest::class$ = nullptr;