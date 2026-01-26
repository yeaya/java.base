#include <sun/security/provider/DSA$RawDSA.h>

#include <sun/security/provider/DSA$Raw.h>
#include <sun/security/provider/DSA.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DSA$Raw = ::sun::security::provider::DSA$Raw;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _DSA$RawDSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DSA$RawDSA, init$, void), "java.security.NoSuchAlgorithmException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DSA$RawDSA, toString, $String*)},
	{}
};

$InnerClassInfo _DSA$RawDSA_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$RawDSA", "sun.security.provider.DSA", "RawDSA", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.DSA$Raw", "sun.security.provider.DSA", "Raw", $STATIC},
	{}
};

$ClassInfo _DSA$RawDSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSA$RawDSA",
	"sun.security.provider.DSA$Raw",
	nullptr,
	nullptr,
	_DSA$RawDSA_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$RawDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$RawDSA($Class* clazz) {
	return $of($alloc(DSA$RawDSA));
}

void DSA$RawDSA::init$() {
	$DSA$Raw::init$(false);
}

$String* DSA$RawDSA::toString() {
	return $DSA$Raw::toString();
}

DSA$RawDSA::DSA$RawDSA() {
}

$Class* DSA$RawDSA::load$($String* name, bool initialize) {
	$loadClass(DSA$RawDSA, name, initialize, &_DSA$RawDSA_ClassInfo_, allocate$DSA$RawDSA);
	return class$;
}

$Class* DSA$RawDSA::class$ = nullptr;

		} // provider
	} // security
} // sun