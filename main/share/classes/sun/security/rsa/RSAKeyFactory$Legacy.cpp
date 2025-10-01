#include <sun/security/rsa/RSAKeyFactory$Legacy.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/rsa/RSAKeyFactory.h>
#include <sun/security/rsa/RSAUtil$KeyType.h>
#include <jcpp.h>

#undef RSA

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSAKeyFactory = ::sun::security::rsa::RSAKeyFactory;
using $RSAUtil$KeyType = ::sun::security::rsa::RSAUtil$KeyType;

namespace sun {
	namespace security {
		namespace rsa {

$MethodInfo _RSAKeyFactory$Legacy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSAKeyFactory$Legacy::*)()>(&RSAKeyFactory$Legacy::init$))},
	{}
};

$InnerClassInfo _RSAKeyFactory$Legacy_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSAKeyFactory$Legacy", "sun.security.rsa.RSAKeyFactory", "Legacy", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAKeyFactory$Legacy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSAKeyFactory$Legacy",
	"sun.security.rsa.RSAKeyFactory",
	nullptr,
	nullptr,
	_RSAKeyFactory$Legacy_MethodInfo_,
	nullptr,
	nullptr,
	_RSAKeyFactory$Legacy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSAKeyFactory"
};

$Object* allocate$RSAKeyFactory$Legacy($Class* clazz) {
	return $of($alloc(RSAKeyFactory$Legacy));
}

void RSAKeyFactory$Legacy::init$() {
	$init($RSAUtil$KeyType);
	$RSAKeyFactory::init$($RSAUtil$KeyType::RSA);
}

RSAKeyFactory$Legacy::RSAKeyFactory$Legacy() {
}

$Class* RSAKeyFactory$Legacy::load$($String* name, bool initialize) {
	$loadClass(RSAKeyFactory$Legacy, name, initialize, &_RSAKeyFactory$Legacy_ClassInfo_, allocate$RSAKeyFactory$Legacy);
	return class$;
}

$Class* RSAKeyFactory$Legacy::class$ = nullptr;

		} // rsa
	} // security
} // sun