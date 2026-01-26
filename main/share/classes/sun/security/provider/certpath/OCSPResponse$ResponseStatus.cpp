#include <sun/security/provider/certpath/OCSPResponse$ResponseStatus.h>

#include <java/lang/Enum.h>
#include <sun/security/provider/certpath/OCSPResponse.h>
#include <jcpp.h>

#undef INTERNAL_ERROR
#undef MALFORMED_REQUEST
#undef SIG_REQUIRED
#undef SUCCESSFUL
#undef TRY_LATER
#undef UNAUTHORIZED
#undef UNUSED

using $OCSPResponse$ResponseStatusArray = $Array<::sun::security::provider::certpath::OCSPResponse$ResponseStatus>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _OCSPResponse$ResponseStatus_FieldInfo_[] = {
	{"SUCCESSFUL", "Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSPResponse$ResponseStatus, SUCCESSFUL)},
	{"MALFORMED_REQUEST", "Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSPResponse$ResponseStatus, MALFORMED_REQUEST)},
	{"INTERNAL_ERROR", "Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSPResponse$ResponseStatus, INTERNAL_ERROR)},
	{"TRY_LATER", "Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSPResponse$ResponseStatus, TRY_LATER)},
	{"UNUSED", "Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSPResponse$ResponseStatus, UNUSED)},
	{"SIG_REQUIRED", "Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSPResponse$ResponseStatus, SIG_REQUIRED)},
	{"UNAUTHORIZED", "Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OCSPResponse$ResponseStatus, UNAUTHORIZED)},
	{"$VALUES", "[Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(OCSPResponse$ResponseStatus, $VALUES)},
	{}
};

$MethodInfo _OCSPResponse$ResponseStatus_MethodInfo_[] = {
	{"$values", "()[Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(OCSPResponse$ResponseStatus, $values, $OCSPResponse$ResponseStatusArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(OCSPResponse$ResponseStatus, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PUBLIC | $STATIC, $staticMethod(OCSPResponse$ResponseStatus, valueOf, OCSPResponse$ResponseStatus*, $String*)},
	{"values", "()[Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $PUBLIC | $STATIC, $staticMethod(OCSPResponse$ResponseStatus, values, $OCSPResponse$ResponseStatusArray*)},
	{}
};

$InnerClassInfo _OCSPResponse$ResponseStatus_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.OCSPResponse$ResponseStatus", "sun.security.provider.certpath.OCSPResponse", "ResponseStatus", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _OCSPResponse$ResponseStatus_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.security.provider.certpath.OCSPResponse$ResponseStatus",
	"java.lang.Enum",
	nullptr,
	_OCSPResponse$ResponseStatus_FieldInfo_,
	_OCSPResponse$ResponseStatus_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;>;",
	nullptr,
	_OCSPResponse$ResponseStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.OCSPResponse"
};

$Object* allocate$OCSPResponse$ResponseStatus($Class* clazz) {
	return $of($alloc(OCSPResponse$ResponseStatus));
}

OCSPResponse$ResponseStatus* OCSPResponse$ResponseStatus::SUCCESSFUL = nullptr;
OCSPResponse$ResponseStatus* OCSPResponse$ResponseStatus::MALFORMED_REQUEST = nullptr;
OCSPResponse$ResponseStatus* OCSPResponse$ResponseStatus::INTERNAL_ERROR = nullptr;
OCSPResponse$ResponseStatus* OCSPResponse$ResponseStatus::TRY_LATER = nullptr;
OCSPResponse$ResponseStatus* OCSPResponse$ResponseStatus::UNUSED = nullptr;
OCSPResponse$ResponseStatus* OCSPResponse$ResponseStatus::SIG_REQUIRED = nullptr;
OCSPResponse$ResponseStatus* OCSPResponse$ResponseStatus::UNAUTHORIZED = nullptr;
$OCSPResponse$ResponseStatusArray* OCSPResponse$ResponseStatus::$VALUES = nullptr;

$OCSPResponse$ResponseStatusArray* OCSPResponse$ResponseStatus::$values() {
	$init(OCSPResponse$ResponseStatus);
	return $new($OCSPResponse$ResponseStatusArray, {
		OCSPResponse$ResponseStatus::SUCCESSFUL,
		OCSPResponse$ResponseStatus::MALFORMED_REQUEST,
		OCSPResponse$ResponseStatus::INTERNAL_ERROR,
		OCSPResponse$ResponseStatus::TRY_LATER,
		OCSPResponse$ResponseStatus::UNUSED,
		OCSPResponse$ResponseStatus::SIG_REQUIRED,
		OCSPResponse$ResponseStatus::UNAUTHORIZED
	});
}

$OCSPResponse$ResponseStatusArray* OCSPResponse$ResponseStatus::values() {
	$init(OCSPResponse$ResponseStatus);
	return $cast($OCSPResponse$ResponseStatusArray, OCSPResponse$ResponseStatus::$VALUES->clone());
}

OCSPResponse$ResponseStatus* OCSPResponse$ResponseStatus::valueOf($String* name) {
	$init(OCSPResponse$ResponseStatus);
	return $cast(OCSPResponse$ResponseStatus, $Enum::valueOf(OCSPResponse$ResponseStatus::class$, name));
}

void OCSPResponse$ResponseStatus::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$OCSPResponse$ResponseStatus($Class* class$) {
	$assignStatic(OCSPResponse$ResponseStatus::SUCCESSFUL, $new(OCSPResponse$ResponseStatus, "SUCCESSFUL"_s, 0));
	$assignStatic(OCSPResponse$ResponseStatus::MALFORMED_REQUEST, $new(OCSPResponse$ResponseStatus, "MALFORMED_REQUEST"_s, 1));
	$assignStatic(OCSPResponse$ResponseStatus::INTERNAL_ERROR, $new(OCSPResponse$ResponseStatus, "INTERNAL_ERROR"_s, 2));
	$assignStatic(OCSPResponse$ResponseStatus::TRY_LATER, $new(OCSPResponse$ResponseStatus, "TRY_LATER"_s, 3));
	$assignStatic(OCSPResponse$ResponseStatus::UNUSED, $new(OCSPResponse$ResponseStatus, "UNUSED"_s, 4));
	$assignStatic(OCSPResponse$ResponseStatus::SIG_REQUIRED, $new(OCSPResponse$ResponseStatus, "SIG_REQUIRED"_s, 5));
	$assignStatic(OCSPResponse$ResponseStatus::UNAUTHORIZED, $new(OCSPResponse$ResponseStatus, "UNAUTHORIZED"_s, 6));
	$assignStatic(OCSPResponse$ResponseStatus::$VALUES, OCSPResponse$ResponseStatus::$values());
}

OCSPResponse$ResponseStatus::OCSPResponse$ResponseStatus() {
}

$Class* OCSPResponse$ResponseStatus::load$($String* name, bool initialize) {
	$loadClass(OCSPResponse$ResponseStatus, name, initialize, &_OCSPResponse$ResponseStatus_ClassInfo_, clinit$OCSPResponse$ResponseStatus, allocate$OCSPResponse$ResponseStatus);
	return class$;
}

$Class* OCSPResponse$ResponseStatus::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun