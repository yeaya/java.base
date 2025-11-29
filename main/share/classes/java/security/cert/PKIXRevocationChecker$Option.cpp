#include <java/security/cert/PKIXRevocationChecker$Option.h>

#include <java/lang/Enum.h>
#include <java/security/cert/PKIXRevocationChecker.h>
#include <jcpp.h>

#undef NO_FALLBACK
#undef ONLY_END_ENTITY
#undef PREFER_CRLS
#undef SOFT_FAIL

using $PKIXRevocationChecker$OptionArray = $Array<::java::security::cert::PKIXRevocationChecker$Option>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _PKIXRevocationChecker$Option_FieldInfo_[] = {
	{"ONLY_END_ENTITY", "Ljava/security/cert/PKIXRevocationChecker$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXRevocationChecker$Option, ONLY_END_ENTITY)},
	{"PREFER_CRLS", "Ljava/security/cert/PKIXRevocationChecker$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXRevocationChecker$Option, PREFER_CRLS)},
	{"NO_FALLBACK", "Ljava/security/cert/PKIXRevocationChecker$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXRevocationChecker$Option, NO_FALLBACK)},
	{"SOFT_FAIL", "Ljava/security/cert/PKIXRevocationChecker$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PKIXRevocationChecker$Option, SOFT_FAIL)},
	{"$VALUES", "[Ljava/security/cert/PKIXRevocationChecker$Option;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(PKIXRevocationChecker$Option, $VALUES)},
	{}
};

$MethodInfo _PKIXRevocationChecker$Option_MethodInfo_[] = {
	{"$values", "()[Ljava/security/cert/PKIXRevocationChecker$Option;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$PKIXRevocationChecker$OptionArray*(*)()>(&PKIXRevocationChecker$Option::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(PKIXRevocationChecker$Option::*)($String*,int32_t)>(&PKIXRevocationChecker$Option::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/security/cert/PKIXRevocationChecker$Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PKIXRevocationChecker$Option*(*)($String*)>(&PKIXRevocationChecker$Option::valueOf))},
	{"values", "()[Ljava/security/cert/PKIXRevocationChecker$Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PKIXRevocationChecker$OptionArray*(*)()>(&PKIXRevocationChecker$Option::values))},
	{}
};

$InnerClassInfo _PKIXRevocationChecker$Option_InnerClassesInfo_[] = {
	{"java.security.cert.PKIXRevocationChecker$Option", "java.security.cert.PKIXRevocationChecker", "Option", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _PKIXRevocationChecker$Option_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.security.cert.PKIXRevocationChecker$Option",
	"java.lang.Enum",
	nullptr,
	_PKIXRevocationChecker$Option_FieldInfo_,
	_PKIXRevocationChecker$Option_MethodInfo_,
	"Ljava/lang/Enum<Ljava/security/cert/PKIXRevocationChecker$Option;>;",
	nullptr,
	_PKIXRevocationChecker$Option_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.cert.PKIXRevocationChecker"
};

$Object* allocate$PKIXRevocationChecker$Option($Class* clazz) {
	return $of($alloc(PKIXRevocationChecker$Option));
}

PKIXRevocationChecker$Option* PKIXRevocationChecker$Option::ONLY_END_ENTITY = nullptr;
PKIXRevocationChecker$Option* PKIXRevocationChecker$Option::PREFER_CRLS = nullptr;
PKIXRevocationChecker$Option* PKIXRevocationChecker$Option::NO_FALLBACK = nullptr;
PKIXRevocationChecker$Option* PKIXRevocationChecker$Option::SOFT_FAIL = nullptr;
$PKIXRevocationChecker$OptionArray* PKIXRevocationChecker$Option::$VALUES = nullptr;

$PKIXRevocationChecker$OptionArray* PKIXRevocationChecker$Option::$values() {
	$init(PKIXRevocationChecker$Option);
	return $new($PKIXRevocationChecker$OptionArray, {
		PKIXRevocationChecker$Option::ONLY_END_ENTITY,
		PKIXRevocationChecker$Option::PREFER_CRLS,
		PKIXRevocationChecker$Option::NO_FALLBACK,
		PKIXRevocationChecker$Option::SOFT_FAIL
	});
}

$PKIXRevocationChecker$OptionArray* PKIXRevocationChecker$Option::values() {
	$init(PKIXRevocationChecker$Option);
	return $cast($PKIXRevocationChecker$OptionArray, PKIXRevocationChecker$Option::$VALUES->clone());
}

PKIXRevocationChecker$Option* PKIXRevocationChecker$Option::valueOf($String* name) {
	$init(PKIXRevocationChecker$Option);
	return $cast(PKIXRevocationChecker$Option, $Enum::valueOf(PKIXRevocationChecker$Option::class$, name));
}

void PKIXRevocationChecker$Option::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$PKIXRevocationChecker$Option($Class* class$) {
	$assignStatic(PKIXRevocationChecker$Option::ONLY_END_ENTITY, $new(PKIXRevocationChecker$Option, "ONLY_END_ENTITY"_s, 0));
	$assignStatic(PKIXRevocationChecker$Option::PREFER_CRLS, $new(PKIXRevocationChecker$Option, "PREFER_CRLS"_s, 1));
	$assignStatic(PKIXRevocationChecker$Option::NO_FALLBACK, $new(PKIXRevocationChecker$Option, "NO_FALLBACK"_s, 2));
	$assignStatic(PKIXRevocationChecker$Option::SOFT_FAIL, $new(PKIXRevocationChecker$Option, "SOFT_FAIL"_s, 3));
	$assignStatic(PKIXRevocationChecker$Option::$VALUES, PKIXRevocationChecker$Option::$values());
}

PKIXRevocationChecker$Option::PKIXRevocationChecker$Option() {
}

$Class* PKIXRevocationChecker$Option::load$($String* name, bool initialize) {
	$loadClass(PKIXRevocationChecker$Option, name, initialize, &_PKIXRevocationChecker$Option_ClassInfo_, clinit$PKIXRevocationChecker$Option, allocate$PKIXRevocationChecker$Option);
	return class$;
}

$Class* PKIXRevocationChecker$Option::class$ = nullptr;

		} // cert
	} // security
} // java