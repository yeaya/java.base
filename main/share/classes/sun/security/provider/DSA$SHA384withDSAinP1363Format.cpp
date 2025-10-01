#include <sun/security/provider/DSA$SHA384withDSAinP1363Format.h>

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

$MethodInfo _DSA$SHA384withDSAinP1363Format_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSA$SHA384withDSAinP1363Format::*)()>(&DSA$SHA384withDSAinP1363Format::init$)), "java.security.NoSuchAlgorithmException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DSA$SHA384withDSAinP1363Format_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$SHA384withDSAinP1363Format", "sun.security.provider.DSA", "SHA384withDSAinP1363Format", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSA$SHA384withDSAinP1363Format_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSA$SHA384withDSAinP1363Format",
	"sun.security.provider.DSA",
	nullptr,
	nullptr,
	_DSA$SHA384withDSAinP1363Format_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$SHA384withDSAinP1363Format_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$SHA384withDSAinP1363Format($Class* clazz) {
	return $of($alloc(DSA$SHA384withDSAinP1363Format));
}

void DSA$SHA384withDSAinP1363Format::init$() {
	$DSA::init$($($MessageDigest::getInstance("SHA-384"_s)), true);
}

$String* DSA$SHA384withDSAinP1363Format::toString() {
	return $DSA::toString();
}

DSA$SHA384withDSAinP1363Format::DSA$SHA384withDSAinP1363Format() {
}

$Class* DSA$SHA384withDSAinP1363Format::load$($String* name, bool initialize) {
	$loadClass(DSA$SHA384withDSAinP1363Format, name, initialize, &_DSA$SHA384withDSAinP1363Format_ClassInfo_, allocate$DSA$SHA384withDSAinP1363Format);
	return class$;
}

$Class* DSA$SHA384withDSAinP1363Format::class$ = nullptr;

		} // provider
	} // security
} // sun