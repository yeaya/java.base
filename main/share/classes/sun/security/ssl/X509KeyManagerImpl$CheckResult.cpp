#include <sun/security/ssl/X509KeyManagerImpl$CheckResult.h>
#include <java/lang/Enum.h>
#include <sun/security/ssl/X509KeyManagerImpl.h>
#include <jcpp.h>

#undef EXPIRED
#undef EXTENSION_MISMATCH
#undef INSENSITIVE
#undef OK

using $X509KeyManagerImpl$CheckResultArray = $Array<::sun::security::ssl::X509KeyManagerImpl$CheckResult>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

X509KeyManagerImpl$CheckResult* X509KeyManagerImpl$CheckResult::OK = nullptr;
X509KeyManagerImpl$CheckResult* X509KeyManagerImpl$CheckResult::INSENSITIVE = nullptr;
X509KeyManagerImpl$CheckResult* X509KeyManagerImpl$CheckResult::EXPIRED = nullptr;
X509KeyManagerImpl$CheckResult* X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH = nullptr;
$X509KeyManagerImpl$CheckResultArray* X509KeyManagerImpl$CheckResult::$VALUES = nullptr;

$X509KeyManagerImpl$CheckResultArray* X509KeyManagerImpl$CheckResult::$values() {
	$init(X509KeyManagerImpl$CheckResult);
	return $new($X509KeyManagerImpl$CheckResultArray, {
		X509KeyManagerImpl$CheckResult::OK,
		X509KeyManagerImpl$CheckResult::INSENSITIVE,
		X509KeyManagerImpl$CheckResult::EXPIRED,
		X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH
	});
}

$X509KeyManagerImpl$CheckResultArray* X509KeyManagerImpl$CheckResult::values() {
	$init(X509KeyManagerImpl$CheckResult);
	return $cast($X509KeyManagerImpl$CheckResultArray, X509KeyManagerImpl$CheckResult::$VALUES->clone());
}

X509KeyManagerImpl$CheckResult* X509KeyManagerImpl$CheckResult::valueOf($String* name) {
	$init(X509KeyManagerImpl$CheckResult);
	return $cast(X509KeyManagerImpl$CheckResult, $Enum::valueOf(X509KeyManagerImpl$CheckResult::class$, name));
}

void X509KeyManagerImpl$CheckResult::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void X509KeyManagerImpl$CheckResult::clinit$($Class* clazz) {
	$assignStatic(X509KeyManagerImpl$CheckResult::OK, $new(X509KeyManagerImpl$CheckResult, "OK"_s, 0));
	$assignStatic(X509KeyManagerImpl$CheckResult::INSENSITIVE, $new(X509KeyManagerImpl$CheckResult, "INSENSITIVE"_s, 1));
	$assignStatic(X509KeyManagerImpl$CheckResult::EXPIRED, $new(X509KeyManagerImpl$CheckResult, "EXPIRED"_s, 2));
	$assignStatic(X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH, $new(X509KeyManagerImpl$CheckResult, "EXTENSION_MISMATCH"_s, 3));
	$assignStatic(X509KeyManagerImpl$CheckResult::$VALUES, X509KeyManagerImpl$CheckResult::$values());
}

X509KeyManagerImpl$CheckResult::X509KeyManagerImpl$CheckResult() {
}

$Class* X509KeyManagerImpl$CheckResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OK", "Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckResult, OK)},
		{"INSENSITIVE", "Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckResult, INSENSITIVE)},
		{"EXPIRED", "Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckResult, EXPIRED)},
		{"EXTENSION_MISMATCH", "Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckResult, EXTENSION_MISMATCH)},
		{"$VALUES", "[Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(X509KeyManagerImpl$CheckResult, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(X509KeyManagerImpl$CheckResult, $values, $X509KeyManagerImpl$CheckResultArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(X509KeyManagerImpl$CheckResult, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(X509KeyManagerImpl$CheckResult, valueOf, X509KeyManagerImpl$CheckResult*, $String*)},
		{"values", "()[Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC, $staticMethod(X509KeyManagerImpl$CheckResult, values, $X509KeyManagerImpl$CheckResultArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.X509KeyManagerImpl$CheckResult", "sun.security.ssl.X509KeyManagerImpl", "CheckResult", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.ssl.X509KeyManagerImpl$CheckResult",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/security/ssl/X509KeyManagerImpl$CheckResult;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.X509KeyManagerImpl"
	};
	$loadClass(X509KeyManagerImpl$CheckResult, name, initialize, &classInfo$$, X509KeyManagerImpl$CheckResult::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(X509KeyManagerImpl$CheckResult));
	});
	return class$;
}

$Class* X509KeyManagerImpl$CheckResult::class$ = nullptr;

		} // ssl
	} // security
} // sun