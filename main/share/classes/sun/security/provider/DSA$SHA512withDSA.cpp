#include <sun/security/provider/DSA$SHA512withDSA.h>

#include <java/security/MessageDigest.h>
#include <sun/security/provider/DSA.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $DSA = ::sun::security::provider::DSA;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _DSA$SHA512withDSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSA$SHA512withDSA::*)()>(&DSA$SHA512withDSA::init$)), "java.security.NoSuchAlgorithmException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DSA$SHA512withDSA_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$SHA512withDSA", "sun.security.provider.DSA", "SHA512withDSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSA$SHA512withDSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSA$SHA512withDSA",
	"sun.security.provider.DSA",
	nullptr,
	nullptr,
	_DSA$SHA512withDSA_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$SHA512withDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$SHA512withDSA($Class* clazz) {
	return $of($alloc(DSA$SHA512withDSA));
}

void DSA$SHA512withDSA::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA-512"_s)));
}

$String* DSA$SHA512withDSA::toString() {
	return $DSA::toString();
}

DSA$SHA512withDSA::DSA$SHA512withDSA() {
}

$Class* DSA$SHA512withDSA::load$($String* name, bool initialize) {
	$loadClass(DSA$SHA512withDSA, name, initialize, &_DSA$SHA512withDSA_ClassInfo_, allocate$DSA$SHA512withDSA);
	return class$;
}

$Class* DSA$SHA512withDSA::class$ = nullptr;

		} // provider
	} // security
} // sun