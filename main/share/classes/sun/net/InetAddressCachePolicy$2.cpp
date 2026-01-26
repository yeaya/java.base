#include <sun/net/InetAddressCachePolicy$2.h>

#include <java/lang/NumberFormatException.h>
#include <java/security/Security.h>
#include <sun/net/InetAddressCachePolicy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Security = ::java::security::Security;

namespace sun {
	namespace net {

$MethodInfo _InetAddressCachePolicy$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(InetAddressCachePolicy$2, init$, void)},
	{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(InetAddressCachePolicy$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _InetAddressCachePolicy$2_EnclosingMethodInfo_ = {
	"sun.net.InetAddressCachePolicy",
	nullptr,
	nullptr
};

$InnerClassInfo _InetAddressCachePolicy$2_InnerClassesInfo_[] = {
	{"sun.net.InetAddressCachePolicy$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InetAddressCachePolicy$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.InetAddressCachePolicy$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_InetAddressCachePolicy$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;",
	&_InetAddressCachePolicy$2_EnclosingMethodInfo_,
	_InetAddressCachePolicy$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.InetAddressCachePolicy"
};

$Object* allocate$InetAddressCachePolicy$2($Class* clazz) {
	return $of($alloc(InetAddressCachePolicy$2));
}

void InetAddressCachePolicy$2::init$() {
}

$Object* InetAddressCachePolicy$2::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, tmpString, $Security::getProperty("networkaddress.cache.negative.ttl"_s));
		if (tmpString != nullptr) {
			return $of($Integer::valueOf(tmpString));
		}
	} catch ($NumberFormatException& ignored) {
	}
	try {
		$var($String, tmpString, $System::getProperty("sun.net.inetaddr.negative.ttl"_s));
		if (tmpString != nullptr) {
			return $of($Integer::decode(tmpString));
		}
	} catch ($NumberFormatException& ignored) {
	}
	return $of(nullptr);
}

InetAddressCachePolicy$2::InetAddressCachePolicy$2() {
}

$Class* InetAddressCachePolicy$2::load$($String* name, bool initialize) {
	$loadClass(InetAddressCachePolicy$2, name, initialize, &_InetAddressCachePolicy$2_ClassInfo_, allocate$InetAddressCachePolicy$2);
	return class$;
}

$Class* InetAddressCachePolicy$2::class$ = nullptr;

	} // net
} // sun