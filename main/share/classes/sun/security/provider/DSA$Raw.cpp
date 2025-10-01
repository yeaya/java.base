#include <sun/security/provider/DSA$Raw.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/MessageDigest.h>
#include <sun/security/provider/DSA$Raw$NullDigest20.h>
#include <sun/security/provider/DSA.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $DSA = ::sun::security::provider::DSA;
using $DSA$Raw$NullDigest20 = ::sun::security::provider::DSA$Raw$NullDigest20;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _DSA$Raw_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(DSA$Raw::*)(bool)>(&DSA$Raw::init$)), "java.security.NoSuchAlgorithmException"},
	{}
};

$InnerClassInfo _DSA$Raw_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$Raw", "sun.security.provider.DSA", "Raw", $STATIC},
	{"sun.security.provider.DSA$Raw$NullDigest20", "sun.security.provider.DSA$Raw", "NullDigest20", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSA$Raw_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.DSA$Raw",
	"sun.security.provider.DSA",
	nullptr,
	nullptr,
	_DSA$Raw_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$Raw_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$Raw($Class* clazz) {
	return $of($alloc(DSA$Raw));
}

void DSA$Raw::init$(bool p1363Format) {
	$DSA::init$($$new($DSA$Raw$NullDigest20), p1363Format);
}

DSA$Raw::DSA$Raw() {
}

$Class* DSA$Raw::load$($String* name, bool initialize) {
	$loadClass(DSA$Raw, name, initialize, &_DSA$Raw_ClassInfo_, allocate$DSA$Raw);
	return class$;
}

$Class* DSA$Raw::class$ = nullptr;

		} // provider
	} // security
} // sun