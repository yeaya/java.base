#include <B6296240.h>

#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/util/BitSet.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $BitSet = ::java::util::BitSet;

$MethodInfo _B6296240_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(B6296240, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B6296240, main, void, $StringArray*)},
	{}
};

$ClassInfo _B6296240_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6296240",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6296240_MethodInfo_
};

$Object* allocate$B6296240($Class* clazz) {
	return $of($alloc(B6296240));
}

void B6296240::init$() {
}

void B6296240::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, malformedIPv4s, $new($StringArray, {"192.168.1.220..."_s}));
	$var($BitSet, expectedExceptions, $new($BitSet, malformedIPv4s->length));
	expectedExceptions->clear();
	for (int32_t i = 0; i < malformedIPv4s->length; ++i) {
		try {
			$InetAddress::getAllByName(malformedIPv4s->get(i));
		} catch ($UnknownHostException& e) {
			expectedExceptions->set(i);
		}
	}
	for (int32_t i = 0; i < malformedIPv4s->length; ++i) {
		if (!expectedExceptions->get(i)) {
			$nc($System::out)->println($$str({"getAllByName(\""_s, malformedIPv4s->get(i), "\") should throw exception."_s}));
		}
	}
	if (expectedExceptions->cardinality() != malformedIPv4s->length) {
		$throwNew($RuntimeException, "Failed: some expected UnknownHostExceptions are not thrown."_s);
	}
}

B6296240::B6296240() {
}

$Class* B6296240::load$($String* name, bool initialize) {
	$loadClass(B6296240, name, initialize, &_B6296240_ClassInfo_, allocate$B6296240);
	return class$;
}

$Class* B6296240::class$ = nullptr;