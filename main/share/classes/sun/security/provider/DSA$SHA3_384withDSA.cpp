#include <sun/security/provider/DSA$SHA3_384withDSA.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _DSA$SHA3_384withDSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSA$SHA3_384withDSA::*)()>(&DSA$SHA3_384withDSA::init$)), "java.security.NoSuchAlgorithmException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DSA$SHA3_384withDSA_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$SHA3_384withDSA", "sun.security.provider.DSA", "SHA3_384withDSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSA$SHA3_384withDSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSA$SHA3_384withDSA",
	"sun.security.provider.DSA",
	nullptr,
	nullptr,
	_DSA$SHA3_384withDSA_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$SHA3_384withDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$SHA3_384withDSA($Class* clazz) {
	return $of($alloc(DSA$SHA3_384withDSA));
}

void DSA$SHA3_384withDSA::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA3-384"_s)));
}

$String* DSA$SHA3_384withDSA::toString() {
	return $DSA::toString();
}

DSA$SHA3_384withDSA::DSA$SHA3_384withDSA() {
}

$Class* DSA$SHA3_384withDSA::load$($String* name, bool initialize) {
	$loadClass(DSA$SHA3_384withDSA, name, initialize, &_DSA$SHA3_384withDSA_ClassInfo_, allocate$DSA$SHA3_384withDSA);
	return class$;
}

$Class* DSA$SHA3_384withDSA::class$ = nullptr;

		} // provider
	} // security
} // sun