#include <CachedUnknownHostName.h>

#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;

$MethodInfo _CachedUnknownHostName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CachedUnknownHostName, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CachedUnknownHostName, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _CachedUnknownHostName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CachedUnknownHostName",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CachedUnknownHostName_MethodInfo_
};

$Object* allocate$CachedUnknownHostName($Class* clazz) {
	return $of($alloc(CachedUnknownHostName));
}

void CachedUnknownHostName::init$() {
}

void CachedUnknownHostName::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($String, hostname, $new($String, "bogusHostName"_s));
	try {
		$InetAddress::getByName(hostname);
		$nc($System::err)->println($$str({"Missing java.net.UnknownHostException for host "_s, hostname}));
		$throwNew($Exception, "Missing java.net.UnknownHostException"_s);
	} catch ($UnknownHostException& e) {
		$nc($System::out)->println($$str({"Caught expected exception:"_s, e}));
	}
	try {
		$InetAddress::getByName(hostname);
		$nc($System::err)->println($$str({"Missing java.net.UnknownHostException for host "_s, hostname}));
		$throwNew($Exception, "Missing java.net.UnknownHostException"_s);
	} catch ($UnknownHostException& e) {
		$nc($System::out)->println($$str({"Caught expected exception:"_s, e}));
	}
	$nc($System::out)->println("Passed. OKAY"_s);
}

CachedUnknownHostName::CachedUnknownHostName() {
}

$Class* CachedUnknownHostName::load$($String* name, bool initialize) {
	$loadClass(CachedUnknownHostName, name, initialize, &_CachedUnknownHostName_ClassInfo_, allocate$CachedUnknownHostName);
	return class$;
}

$Class* CachedUnknownHostName::class$ = nullptr;