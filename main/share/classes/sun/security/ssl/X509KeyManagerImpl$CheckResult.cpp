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

$FieldInfo _X509KeyManagerImpl$CheckResult_FieldInfo_[] = {
	{"OK", "Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckResult, OK)},
	{"INSENSITIVE", "Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckResult, INSENSITIVE)},
	{"EXPIRED", "Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckResult, EXPIRED)},
	{"EXTENSION_MISMATCH", "Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(X509KeyManagerImpl$CheckResult, EXTENSION_MISMATCH)},
	{"$VALUES", "[Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(X509KeyManagerImpl$CheckResult, $VALUES)},
	{}
};

$MethodInfo _X509KeyManagerImpl$CheckResult_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$X509KeyManagerImpl$CheckResultArray*(*)()>(&X509KeyManagerImpl$CheckResult::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(X509KeyManagerImpl$CheckResult::*)($String*,int32_t)>(&X509KeyManagerImpl$CheckResult::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<X509KeyManagerImpl$CheckResult*(*)($String*)>(&X509KeyManagerImpl$CheckResult::valueOf))},
	{"values", "()[Lsun/security/ssl/X509KeyManagerImpl$CheckResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$X509KeyManagerImpl$CheckResultArray*(*)()>(&X509KeyManagerImpl$CheckResult::values))},
	{}
};

$InnerClassInfo _X509KeyManagerImpl$CheckResult_InnerClassesInfo_[] = {
	{"sun.security.ssl.X509KeyManagerImpl$CheckResult", "sun.security.ssl.X509KeyManagerImpl", "CheckResult", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _X509KeyManagerImpl$CheckResult_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.X509KeyManagerImpl$CheckResult",
	"java.lang.Enum",
	nullptr,
	_X509KeyManagerImpl$CheckResult_FieldInfo_,
	_X509KeyManagerImpl$CheckResult_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/X509KeyManagerImpl$CheckResult;>;",
	nullptr,
	_X509KeyManagerImpl$CheckResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.X509KeyManagerImpl"
};

$Object* allocate$X509KeyManagerImpl$CheckResult($Class* clazz) {
	return $of($alloc(X509KeyManagerImpl$CheckResult));
}

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

void clinit$X509KeyManagerImpl$CheckResult($Class* class$) {
	$assignStatic(X509KeyManagerImpl$CheckResult::OK, $new(X509KeyManagerImpl$CheckResult, "OK"_s, 0));
	$assignStatic(X509KeyManagerImpl$CheckResult::INSENSITIVE, $new(X509KeyManagerImpl$CheckResult, "INSENSITIVE"_s, 1));
	$assignStatic(X509KeyManagerImpl$CheckResult::EXPIRED, $new(X509KeyManagerImpl$CheckResult, "EXPIRED"_s, 2));
	$assignStatic(X509KeyManagerImpl$CheckResult::EXTENSION_MISMATCH, $new(X509KeyManagerImpl$CheckResult, "EXTENSION_MISMATCH"_s, 3));
	$assignStatic(X509KeyManagerImpl$CheckResult::$VALUES, X509KeyManagerImpl$CheckResult::$values());
}

X509KeyManagerImpl$CheckResult::X509KeyManagerImpl$CheckResult() {
}

$Class* X509KeyManagerImpl$CheckResult::load$($String* name, bool initialize) {
	$loadClass(X509KeyManagerImpl$CheckResult, name, initialize, &_X509KeyManagerImpl$CheckResult_ClassInfo_, clinit$X509KeyManagerImpl$CheckResult, allocate$X509KeyManagerImpl$CheckResult);
	return class$;
}

$Class* X509KeyManagerImpl$CheckResult::class$ = nullptr;

		} // ssl
	} // security
} // sun