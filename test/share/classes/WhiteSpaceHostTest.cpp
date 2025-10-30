#include <WhiteSpaceHostTest.h>

#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $StringTokenizer = ::java::util::StringTokenizer;

$MethodInfo _WhiteSpaceHostTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WhiteSpaceHostTest::*)()>(&WhiteSpaceHostTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WhiteSpaceHostTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _WhiteSpaceHostTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WhiteSpaceHostTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WhiteSpaceHostTest_MethodInfo_
};

$Object* allocate$WhiteSpaceHostTest($Class* clazz) {
	return $of($alloc(WhiteSpaceHostTest));
}

void WhiteSpaceHostTest::init$() {
}

void WhiteSpaceHostTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, hosts, "        localhost;localhost; localhost;localhost1; localhost1; bogus.mil;\u0010localhost"_s);
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, hosts, ";"_s));
	while (tokenizer->hasMoreTokens()) {
		$var($String, hostname, tokenizer->nextToken());
		$var($InetAddress, ia, nullptr);
		try {
			$assign(ia, $InetAddress::getByName(hostname));
		} catch ($UnknownHostException& e) {
			continue;
		}
		if ($nc(ia)->isAnyLocalAddress()) {
			$throwNew($Exception, "Bogus hostname lookup returned any local address"_s);
		}
	}
}

WhiteSpaceHostTest::WhiteSpaceHostTest() {
}

$Class* WhiteSpaceHostTest::load$($String* name, bool initialize) {
	$loadClass(WhiteSpaceHostTest, name, initialize, &_WhiteSpaceHostTest_ClassInfo_, allocate$WhiteSpaceHostTest);
	return class$;
}

$Class* WhiteSpaceHostTest::class$ = nullptr;