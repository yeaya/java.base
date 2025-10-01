#include <sun/net/InetAddressCachePolicy$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Security.h>
#include <sun/net/InetAddressCachePolicy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $InetAddressCachePolicy = ::sun::net::InetAddressCachePolicy;

namespace sun {
	namespace net {

$MethodInfo _InetAddressCachePolicy$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InetAddressCachePolicy$1::*)()>(&InetAddressCachePolicy$1::init$))},
	{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InetAddressCachePolicy$1_EnclosingMethodInfo_ = {
	"sun.net.InetAddressCachePolicy",
	nullptr,
	nullptr
};

$InnerClassInfo _InetAddressCachePolicy$1_InnerClassesInfo_[] = {
	{"sun.net.InetAddressCachePolicy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InetAddressCachePolicy$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.InetAddressCachePolicy$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_InetAddressCachePolicy$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;",
	&_InetAddressCachePolicy$1_EnclosingMethodInfo_,
	_InetAddressCachePolicy$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.InetAddressCachePolicy"
};

$Object* allocate$InetAddressCachePolicy$1($Class* clazz) {
	return $of($alloc(InetAddressCachePolicy$1));
}

void InetAddressCachePolicy$1::init$() {
}

$Object* InetAddressCachePolicy$1::run() {
	try {
		$var($String, tmpString, $Security::getProperty("networkaddress.cache.ttl"_s));
		if (tmpString != nullptr) {
			return $of($Integer::valueOf(tmpString));
		}
	} catch ($NumberFormatException&) {
		$catch();
	}
	try {
		$var($String, tmpString, $System::getProperty("sun.net.inetaddr.ttl"_s));
		if (tmpString != nullptr) {
			return $of($Integer::decode(tmpString));
		}
	} catch ($NumberFormatException&) {
		$catch();
	}
	return $of(nullptr);
}

InetAddressCachePolicy$1::InetAddressCachePolicy$1() {
}

$Class* InetAddressCachePolicy$1::load$($String* name, bool initialize) {
	$loadClass(InetAddressCachePolicy$1, name, initialize, &_InetAddressCachePolicy$1_ClassInfo_, allocate$InetAddressCachePolicy$1);
	return class$;
}

$Class* InetAddressCachePolicy$1::class$ = nullptr;

	} // net
} // sun