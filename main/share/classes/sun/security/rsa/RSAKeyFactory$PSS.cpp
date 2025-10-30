#include <sun/security/rsa/RSAKeyFactory$PSS.h>

#include <sun/security/rsa/RSAKeyFactory.h>
#include <sun/security/rsa/RSAUtil$KeyType.h>
#include <jcpp.h>

#undef PSS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSAKeyFactory = ::sun::security::rsa::RSAKeyFactory;
using $RSAUtil$KeyType = ::sun::security::rsa::RSAUtil$KeyType;

namespace sun {
	namespace security {
		namespace rsa {

$MethodInfo _RSAKeyFactory$PSS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSAKeyFactory$PSS::*)()>(&RSAKeyFactory$PSS::init$))},
	{}
};

$InnerClassInfo _RSAKeyFactory$PSS_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSAKeyFactory$PSS", "sun.security.rsa.RSAKeyFactory", "PSS", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAKeyFactory$PSS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSAKeyFactory$PSS",
	"sun.security.rsa.RSAKeyFactory",
	nullptr,
	nullptr,
	_RSAKeyFactory$PSS_MethodInfo_,
	nullptr,
	nullptr,
	_RSAKeyFactory$PSS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSAKeyFactory"
};

$Object* allocate$RSAKeyFactory$PSS($Class* clazz) {
	return $of($alloc(RSAKeyFactory$PSS));
}

void RSAKeyFactory$PSS::init$() {
	$init($RSAUtil$KeyType);
	$RSAKeyFactory::init$($RSAUtil$KeyType::PSS);
}

RSAKeyFactory$PSS::RSAKeyFactory$PSS() {
}

$Class* RSAKeyFactory$PSS::load$($String* name, bool initialize) {
	$loadClass(RSAKeyFactory$PSS, name, initialize, &_RSAKeyFactory$PSS_ClassInfo_, allocate$RSAKeyFactory$PSS);
	return class$;
}

$Class* RSAKeyFactory$PSS::class$ = nullptr;

		} // rsa
	} // security
} // sun