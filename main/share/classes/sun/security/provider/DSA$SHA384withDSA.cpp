#include <sun/security/provider/DSA$SHA384withDSA.h>

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

$MethodInfo _DSA$SHA384withDSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSA$SHA384withDSA::*)()>(&DSA$SHA384withDSA::init$)), "java.security.NoSuchAlgorithmException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DSA$SHA384withDSA_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$SHA384withDSA", "sun.security.provider.DSA", "SHA384withDSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSA$SHA384withDSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSA$SHA384withDSA",
	"sun.security.provider.DSA",
	nullptr,
	nullptr,
	_DSA$SHA384withDSA_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$SHA384withDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$SHA384withDSA($Class* clazz) {
	return $of($alloc(DSA$SHA384withDSA));
}

void DSA$SHA384withDSA::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA-384"_s)));
}

$String* DSA$SHA384withDSA::toString() {
	return $DSA::toString();
}

DSA$SHA384withDSA::DSA$SHA384withDSA() {
}

$Class* DSA$SHA384withDSA::load$($String* name, bool initialize) {
	$loadClass(DSA$SHA384withDSA, name, initialize, &_DSA$SHA384withDSA_ClassInfo_, allocate$DSA$SHA384withDSA);
	return class$;
}

$Class* DSA$SHA384withDSA::class$ = nullptr;

		} // provider
	} // security
} // sun