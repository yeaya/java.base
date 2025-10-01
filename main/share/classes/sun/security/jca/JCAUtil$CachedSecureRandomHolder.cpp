#include <sun/security/jca/JCAUtil$CachedSecureRandomHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/SecureRandom.h>
#include <sun/security/jca/JCAUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;
using $JCAUtil = ::sun::security::jca::JCAUtil;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _JCAUtil$CachedSecureRandomHolder_FieldInfo_[] = {
	{"instance", "Ljava/security/SecureRandom;", nullptr, $PUBLIC | $STATIC, $staticField(JCAUtil$CachedSecureRandomHolder, instance)},
	{}
};

$MethodInfo _JCAUtil$CachedSecureRandomHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JCAUtil$CachedSecureRandomHolder::*)()>(&JCAUtil$CachedSecureRandomHolder::init$))},
	{}
};

$InnerClassInfo _JCAUtil$CachedSecureRandomHolder_InnerClassesInfo_[] = {
	{"sun.security.jca.JCAUtil$CachedSecureRandomHolder", "sun.security.jca.JCAUtil", "CachedSecureRandomHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JCAUtil$CachedSecureRandomHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jca.JCAUtil$CachedSecureRandomHolder",
	"java.lang.Object",
	nullptr,
	_JCAUtil$CachedSecureRandomHolder_FieldInfo_,
	_JCAUtil$CachedSecureRandomHolder_MethodInfo_,
	nullptr,
	nullptr,
	_JCAUtil$CachedSecureRandomHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.JCAUtil"
};

$Object* allocate$JCAUtil$CachedSecureRandomHolder($Class* clazz) {
	return $of($alloc(JCAUtil$CachedSecureRandomHolder));
}

$SecureRandom* JCAUtil$CachedSecureRandomHolder::instance = nullptr;

void JCAUtil$CachedSecureRandomHolder::init$() {
}

void clinit$JCAUtil$CachedSecureRandomHolder($Class* class$) {
	$assignStatic(JCAUtil$CachedSecureRandomHolder::instance, $new($SecureRandom));
}

JCAUtil$CachedSecureRandomHolder::JCAUtil$CachedSecureRandomHolder() {
}

$Class* JCAUtil$CachedSecureRandomHolder::load$($String* name, bool initialize) {
	$loadClass(JCAUtil$CachedSecureRandomHolder, name, initialize, &_JCAUtil$CachedSecureRandomHolder_ClassInfo_, clinit$JCAUtil$CachedSecureRandomHolder, allocate$JCAUtil$CachedSecureRandomHolder);
	return class$;
}

$Class* JCAUtil$CachedSecureRandomHolder::class$ = nullptr;

		} // jca
	} // security
} // sun