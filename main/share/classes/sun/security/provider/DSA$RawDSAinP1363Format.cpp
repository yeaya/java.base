#include <sun/security/provider/DSA$RawDSAinP1363Format.h>

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

$MethodInfo _DSA$RawDSAinP1363Format_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSA$RawDSAinP1363Format::*)()>(&DSA$RawDSAinP1363Format::init$)), "java.security.NoSuchAlgorithmException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DSA$RawDSAinP1363Format_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$RawDSAinP1363Format", "sun.security.provider.DSA", "RawDSAinP1363Format", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.DSA$Raw", "sun.security.provider.DSA", "Raw", $STATIC},
	{}
};

$ClassInfo _DSA$RawDSAinP1363Format_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSA$RawDSAinP1363Format",
	"sun.security.provider.DSA$Raw",
	nullptr,
	nullptr,
	_DSA$RawDSAinP1363Format_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$RawDSAinP1363Format_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$RawDSAinP1363Format($Class* clazz) {
	return $of($alloc(DSA$RawDSAinP1363Format));
}

void DSA$RawDSAinP1363Format::init$() {
	$DSA$Raw::init$(true);
}

$String* DSA$RawDSAinP1363Format::toString() {
	return $DSA$Raw::toString();
}

DSA$RawDSAinP1363Format::DSA$RawDSAinP1363Format() {
}

$Class* DSA$RawDSAinP1363Format::load$($String* name, bool initialize) {
	$loadClass(DSA$RawDSAinP1363Format, name, initialize, &_DSA$RawDSAinP1363Format_ClassInfo_, allocate$DSA$RawDSAinP1363Format);
	return class$;
}

$Class* DSA$RawDSAinP1363Format::class$ = nullptr;

		} // provider
	} // security
} // sun