#include <sun/security/provider/DSA$SHA1withDSA.h>

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

$MethodInfo _DSA$SHA1withDSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DSA$SHA1withDSA, init$, void), "java.security.NoSuchAlgorithmException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DSA$SHA1withDSA, toString, $String*)},
	{}
};

$InnerClassInfo _DSA$SHA1withDSA_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$SHA1withDSA", "sun.security.provider.DSA", "SHA1withDSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSA$SHA1withDSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSA$SHA1withDSA",
	"sun.security.provider.DSA",
	nullptr,
	nullptr,
	_DSA$SHA1withDSA_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$SHA1withDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$SHA1withDSA($Class* clazz) {
	return $of($alloc(DSA$SHA1withDSA));
}

void DSA$SHA1withDSA::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA-1"_s)));
}

$String* DSA$SHA1withDSA::toString() {
	return $DSA::toString();
}

DSA$SHA1withDSA::DSA$SHA1withDSA() {
}

$Class* DSA$SHA1withDSA::load$($String* name, bool initialize) {
	$loadClass(DSA$SHA1withDSA, name, initialize, &_DSA$SHA1withDSA_ClassInfo_, allocate$DSA$SHA1withDSA);
	return class$;
}

$Class* DSA$SHA1withDSA::class$ = nullptr;

		} // provider
	} // security
} // sun