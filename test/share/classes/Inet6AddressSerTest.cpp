#include <Inet6AddressSerTest.h>

#include <Inet6AddressSerTest$PayloadTest.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/CharSequence.h>
#include <java/net/Inet6Address.h>
#include <jcpp.h>

using $Inet6AddressSerTest$PayloadTest = ::Inet6AddressSerTest$PayloadTest;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Inet6Address = ::java::net::Inet6Address;

$MethodInfo _Inet6AddressSerTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Inet6AddressSerTest::*)()>(&Inet6AddressSerTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Inet6AddressSerTest::main)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _Inet6AddressSerTest_InnerClassesInfo_[] = {
	{"Inet6AddressSerTest$PayloadTest", "Inet6AddressSerTest", "PayloadTest", $STATIC},
	{}
};

$ClassInfo _Inet6AddressSerTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Inet6AddressSerTest",
	"java.lang.Object",
	"java.io.ObjectStreamConstants",
	nullptr,
	_Inet6AddressSerTest_MethodInfo_,
	nullptr,
	nullptr,
	_Inet6AddressSerTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Inet6AddressSerTest$PayloadTest"
};

$Object* allocate$Inet6AddressSerTest($Class* clazz) {
	return $of($alloc(Inet6AddressSerTest));
}

void Inet6AddressSerTest::init$() {
}

void Inet6AddressSerTest::main($StringArray* args) {
	$init(Inet6AddressSerTest);
	$useLocalCurrentObjectStackCache();
	try {
		$load($Inet6Address);
		$$new($Inet6AddressSerTest$PayloadTest)->test($($Inet6Address::class$->getName()));
		$throwNew($RuntimeException, "Expected exception not raised"_s);
	} catch ($InvalidObjectException& ioe) {
		if ($nc($(ioe->getMessage()))->contains("invalid address length"_s)) {
			$nc($System::out)->println($($String::format("Got expected exception: %s"_s, $$new($ObjectArray, {$of(ioe)}))));
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
	$loadClass(Inet6AddressSerTest, name, initialize, &_Inet6AddressSerTest_ClassInfo_, allocate$Inet6AddressSerTest);
	return class$;
}

$Class* Inet6AddressSerTest::class$ = nullptr;