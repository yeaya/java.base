#include <sun/security/provider/DSA$SHA3_224withDSA.h>

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

$MethodInfo _DSA$SHA3_224withDSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSA$SHA3_224withDSA::*)()>(&DSA$SHA3_224withDSA::init$)), "java.security.NoSuchAlgorithmException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DSA$SHA3_224withDSA_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$SHA3_224withDSA", "sun.security.provider.DSA", "SHA3_224withDSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSA$SHA3_224withDSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSA$SHA3_224withDSA",
	"sun.security.provider.DSA",
	nullptr,
	nullptr,
	_DSA$SHA3_224withDSA_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$SHA3_224withDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$SHA3_224withDSA($Class* clazz) {
	return $of($alloc(DSA$SHA3_224withDSA));
}

void DSA$SHA3_224withDSA::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA3-224"_s)));
}

$String* DSA$SHA3_224withDSA::toString() {
	return $DSA::toString();
}

DSA$SHA3_224withDSA::DSA$SHA3_224withDSA() {
}

$Class* DSA$SHA3_224withDSA::load$($String* name, bool initialize) {
	$loadClass(DSA$SHA3_224withDSA, name, initialize, &_DSA$SHA3_224withDSA_ClassInfo_, allocate$DSA$SHA3_224withDSA);
	return class$;
}

$Class* DSA$SHA3_224withDSA::class$ = nullptr;

		} // provider
	} // security
} // sun