#include <sun/security/provider/certpath/RevocationChecker$Mode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/provider/certpath/RevocationChecker.h>
#include <jcpp.h>

#undef ONLY_CRLS
#undef ONLY_OCSP
#undef PREFER_OCSP
#undef PREFER_CRLS

using $RevocationChecker$ModeArray = $Array<::sun::security::provider::certpath::RevocationChecker$Mode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RevocationChecker = ::sun::security::provider::certpath::RevocationChecker;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _RevocationChecker$Mode_FieldInfo_[] = {
	{"PREFER_OCSP", "Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RevocationChecker$Mode, PREFER_OCSP)},
	{"PREFER_CRLS", "Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RevocationChecker$Mode, PREFER_CRLS)},
	{"ONLY_CRLS", "Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RevocationChecker$Mode, ONLY_CRLS)},
	{"ONLY_OCSP", "Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RevocationChecker$Mode, ONLY_OCSP)},
	{"$VALUES", "[Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RevocationChecker$Mode, $VALUES)},
	{}
};

$MethodInfo _RevocationChecker$Mode_MethodInfo_[] = {
	{"$values", "()[Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$RevocationChecker$ModeArray*(*)()>(&RevocationChecker$Mode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(RevocationChecker$Mode::*)($String*,int32_t)>(&RevocationChecker$Mode::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RevocationChecker$Mode*(*)($String*)>(&RevocationChecker$Mode::valueOf))},
	{"values", "()[Lsun/security/provider/certpath/RevocationChecker$Mode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RevocationChecker$ModeArray*(*)()>(&RevocationChecker$Mode::values))},
	{}
};

$InnerClassInfo _RevocationChecker$Mode_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.RevocationChecker$Mode", "sun.security.provider.certpath.RevocationChecker", "Mode", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _RevocationChecker$Mode_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.provider.certpath.RevocationChecker$Mode",
	"java.lang.Enum",
	nullptr,
	_RevocationChecker$Mode_FieldInfo_,
	_RevocationChecker$Mode_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/provider/certpath/RevocationChecker$Mode;>;",
	nullptr,
	_RevocationChecker$Mode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.RevocationChecker"
};

$Object* allocate$RevocationChecker$Mode($Class* clazz) {
	return $of($alloc(RevocationChecker$Mode));
}

RevocationChecker$Mode* RevocationChecker$Mode::PREFER_OCSP = nullptr;
RevocationChecker$Mode* RevocationChecker$Mode::PREFER_CRLS = nullptr;
RevocationChecker$Mode* RevocationChecker$Mode::ONLY_CRLS = nullptr;
RevocationChecker$Mode* RevocationChecker$Mode::ONLY_OCSP = nullptr;
$RevocationChecker$ModeArray* RevocationChecker$Mode::$VALUES = nullptr;

$RevocationChecker$ModeArray* RevocationChecker$Mode::$values() {
	$init(RevocationChecker$Mode);
	return $new($RevocationChecker$ModeArray, {
		RevocationChecker$Mode::PREFER_OCSP,
		RevocationChecker$Mode::PREFER_CRLS,
		RevocationChecker$Mode::ONLY_CRLS,
		RevocationChecker$Mode::ONLY_OCSP
	});
}

$RevocationChecker$ModeArray* RevocationChecker$Mode::values() {
	$init(RevocationChecker$Mode);
	return $cast($RevocationChecker$ModeArray, RevocationChecker$Mode::$VALUES->clone());
}

RevocationChecker$Mode* RevocationChecker$Mode::valueOf($String* name) {
	$init(RevocationChecker$Mode);
	return $cast(RevocationChecker$Mode, $Enum::valueOf(RevocationChecker$Mode::class$, name));
}

void RevocationChecker$Mode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$RevocationChecker$Mode($Class* class$) {
	$assignStatic(RevocationChecker$Mode::PREFER_OCSP, $new(RevocationChecker$Mode, "PREFER_OCSP"_s, 0));
	$assignStatic(RevocationChecker$Mode::PREFER_CRLS, $new(RevocationChecker$Mode, "PREFER_CRLS"_s, 1));
	$assignStatic(RevocationChecker$Mode::ONLY_CRLS, $new(RevocationChecker$Mode, "ONLY_CRLS"_s, 2));
	$assignStatic(RevocationChecker$Mode::ONLY_OCSP, $new(RevocationChecker$Mode, "ONLY_OCSP"_s, 3));
	$assignStatic(RevocationChecker$Mode::$VALUES, RevocationChecker$Mode::$values());
}

RevocationChecker$Mode::RevocationChecker$Mode() {
}

$Class* RevocationChecker$Mode::load$($String* name, bool initialize) {
	$loadClass(RevocationChecker$Mode, name, initialize, &_RevocationChecker$Mode_ClassInfo_, clinit$RevocationChecker$Mode, allocate$RevocationChecker$Mode);
	return class$;
}

$Class* RevocationChecker$Mode::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun