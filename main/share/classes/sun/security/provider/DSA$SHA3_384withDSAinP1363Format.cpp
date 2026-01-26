#include <sun/security/provider/DSA$SHA3_384withDSAinP1363Format.h>

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

$MethodInfo _DSA$SHA3_384withDSAinP1363Format_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DSA$SHA3_384withDSAinP1363Format, init$, void), "java.security.NoSuchAlgorithmException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DSA$SHA3_384withDSAinP1363Format, toString, $String*)},
	{}
};

$InnerClassInfo _DSA$SHA3_384withDSAinP1363Format_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$SHA3_384withDSAinP1363Format", "sun.security.provider.DSA", "SHA3_384withDSAinP1363Format", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSA$SHA3_384withDSAinP1363Format_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSA$SHA3_384withDSAinP1363Format",
	"sun.security.provider.DSA",
	nullptr,
	nullptr,
	_DSA$SHA3_384withDSAinP1363Format_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$SHA3_384withDSAinP1363Format_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$SHA3_384withDSAinP1363Format($Class* clazz) {
	return $of($alloc(DSA$SHA3_384withDSAinP1363Format));
}

void DSA$SHA3_384withDSAinP1363Format::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA3-384"_s)), true);
}

$String* DSA$SHA3_384withDSAinP1363Format::toString() {
	return $DSA::toString();
}

DSA$SHA3_384withDSAinP1363Format::DSA$SHA3_384withDSAinP1363Format() {
}

$Class* DSA$SHA3_384withDSAinP1363Format::load$($String* name, bool initialize) {
	$loadClass(DSA$SHA3_384withDSAinP1363Format, name, initialize, &_DSA$SHA3_384withDSAinP1363Format_ClassInfo_, allocate$DSA$SHA3_384withDSAinP1363Format);
	return class$;
}

$Class* DSA$SHA3_384withDSAinP1363Format::class$ = nullptr;

		} // provider
	} // security
} // sun