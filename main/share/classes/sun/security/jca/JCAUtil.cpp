#include <sun/security/jca/JCAUtil.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/SecureRandom.h>
#include <sun/security/jca/JCAUtil$CachedSecureRandomHolder.h>
#include <jcpp.h>

#undef ARRAY_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;
using $JCAUtil$CachedSecureRandomHolder = ::sun::security::jca::JCAUtil$CachedSecureRandomHolder;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _JCAUtil_FieldInfo_[] = {
	{"ARRAY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JCAUtil, ARRAY_SIZE)},
	{"def", "Ljava/security/SecureRandom;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JCAUtil, def)},
	{}
};

$MethodInfo _JCAUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JCAUtil::*)()>(&JCAUtil::init$))},
	{"clearDefSecureRandom", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&JCAUtil::clearDefSecureRandom))},
	{"getDefSecureRandom", "()Ljava/security/SecureRandom;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SecureRandom*(*)()>(&JCAUtil::getDefSecureRandom))},
	{"getSecureRandom", "()Ljava/security/SecureRandom;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SecureRandom*(*)()>(&JCAUtil::getSecureRandom))},
	{"getTempArraySize", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&JCAUtil::getTempArraySize))},
	{}
};

$InnerClassInfo _JCAUtil_InnerClassesInfo_[] = {
	{"sun.security.jca.JCAUtil$CachedSecureRandomHolder", "sun.security.jca.JCAUtil", "CachedSecureRandomHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JCAUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.jca.JCAUtil",
	"java.lang.Object",
	nullptr,
	_JCAUtil_FieldInfo_,
	_JCAUtil_MethodInfo_,
	nullptr,
	nullptr,
	_JCAUtil_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.jca.JCAUtil$CachedSecureRandomHolder"
};

$Object* allocate$JCAUtil($Class* clazz) {
	return $of($alloc(JCAUtil));
}

$volatile($SecureRandom*) JCAUtil::def = nullptr;

void JCAUtil::init$() {
}

int32_t JCAUtil::getTempArraySize(int32_t totalSize) {
	$init(JCAUtil);
	return $Math::min(JCAUtil::ARRAY_SIZE, totalSize);
}

$SecureRandom* JCAUtil::getSecureRandom() {
	$init(JCAUtil);
	$init($JCAUtil$CachedSecureRandomHolder);
	return $JCAUtil$CachedSecureRandomHolder::instance;
}

void JCAUtil::clearDefSecureRandom() {
	$init(JCAUtil);
	$assignStatic(JCAUtil::def, nullptr);
}

$SecureRandom* JCAUtil::getDefSecureRandom() {
	$init(JCAUtil);
	$var($SecureRandom, result, JCAUtil::def);
	if (result == nullptr) {
		$synchronized(JCAUtil::class$) {
			$assign(result, JCAUtil::def);
			if (result == nullptr) {
				$assignStatic(JCAUtil::def, ($assign(result, $new($SecureRandom))));
			}
		}
	}
	return result;
}

void clinit$JCAUtil($Class* class$) {
	$assignStatic(JCAUtil::def, nullptr);
}

JCAUtil::JCAUtil() {
}

$Class* JCAUtil::load$($String* name, bool initialize) {
	$loadClass(JCAUtil, name, initialize, &_JCAUtil_ClassInfo_, clinit$JCAUtil, allocate$JCAUtil);
	return class$;
}

$Class* JCAUtil::class$ = nullptr;

		} // jca
	} // security
} // sun