#include <IsHostReachableBug.h>

#include <java/io/BufferedReader.h>
#include <java/io/FileWriter.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $FileWriter = ::java::io::FileWriter;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;

$MethodInfo _IsHostReachableBug_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsHostReachableBug::*)()>(&IsHostReachableBug::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IsHostReachableBug::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _IsHostReachableBug_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsHostReachableBug",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IsHostReachableBug_MethodInfo_
};

$Object* allocate$IsHostReachableBug($Class* clazz) {
	return $of($alloc(IsHostReachableBug));
}

void IsHostReachableBug::init$() {
}

void IsHostReachableBug::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, hostName, "fec0::1:a00:20ff:feed:b08d"_s);
	$var($BufferedReader, in, nullptr);
	$var($FileWriter, fw, nullptr);
	$var($String, inString, " "_s);
	if ($nc(args)->length > 0) {
		$assign(hostName, args->get(0));
	}
	$var($InetAddress, addr, $InetAddress::getByName(hostName));
	$nc($System::out)->println($$str({"InetAddress is : "_s, addr}));
	$nc($System::out)->println($$str({"Is InetAddress instance of Inet6Address ? "_s, $$str(($instanceOf($Inet6Address, addr)))}));
	if (!$nc(addr)->isReachable(10000)) {
		$nc($System::out)->println($$str({hostName, " is not reachable"_s}));
	} else {
		$throwNew($RuntimeException, "IPv6 address should not be reachable"_s);
	}
}

IsHostReachableBug::IsHostReachableBug() {
}

$Class* IsHostReachableBug::load$($String* name, bool initialize) {
	$loadClass(IsHostReachableBug, name, initialize, &_IsHostReachableBug_ClassInfo_, allocate$IsHostReachableBug);
	return class$;
}

$Class* IsHostReachableBug::class$ = nullptr;