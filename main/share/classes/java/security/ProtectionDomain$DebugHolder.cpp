#include <java/security/ProtectionDomain$DebugHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/ProtectionDomain.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$FieldInfo _ProtectionDomain$DebugHolder_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProtectionDomain$DebugHolder, debug)},
	{}
};

$MethodInfo _ProtectionDomain$DebugHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ProtectionDomain$DebugHolder::*)()>(&ProtectionDomain$DebugHolder::init$))},
	{}
};

$InnerClassInfo _ProtectionDomain$DebugHolder_InnerClassesInfo_[] = {
	{"java.security.ProtectionDomain$DebugHolder", "java.security.ProtectionDomain", "DebugHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ProtectionDomain$DebugHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.ProtectionDomain$DebugHolder",
	"java.lang.Object",
	nullptr,
	_ProtectionDomain$DebugHolder_FieldInfo_,
	_ProtectionDomain$DebugHolder_MethodInfo_,
	nullptr,
	nullptr,
	_ProtectionDomain$DebugHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.ProtectionDomain"
};

$Object* allocate$ProtectionDomain$DebugHolder($Class* clazz) {
	return $of($alloc(ProtectionDomain$DebugHolder));
}

$Debug* ProtectionDomain$DebugHolder::debug = nullptr;

void ProtectionDomain$DebugHolder::init$() {
}

void clinit$ProtectionDomain$DebugHolder($Class* class$) {
	$assignStatic(ProtectionDomain$DebugHolder::debug, $Debug::getInstance("domain"_s));
}

ProtectionDomain$DebugHolder::ProtectionDomain$DebugHolder() {
}

$Class* ProtectionDomain$DebugHolder::load$($String* name, bool initialize) {
	$loadClass(ProtectionDomain$DebugHolder, name, initialize, &_ProtectionDomain$DebugHolder_ClassInfo_, clinit$ProtectionDomain$DebugHolder, allocate$ProtectionDomain$DebugHolder);
	return class$;
}

$Class* ProtectionDomain$DebugHolder::class$ = nullptr;

	} // security
} // java