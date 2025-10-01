#include <java/security/ProtectionDomain$Key.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace java {
	namespace security {

$MethodInfo _ProtectionDomain$Key_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ProtectionDomain$Key::*)()>(&ProtectionDomain$Key::init$))},
	{}
};

$InnerClassInfo _ProtectionDomain$Key_InnerClassesInfo_[] = {
	{"java.security.ProtectionDomain$Key", "java.security.ProtectionDomain", "Key", $STATIC | $FINAL},
	{}
};

$ClassInfo _ProtectionDomain$Key_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.security.ProtectionDomain$Key",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ProtectionDomain$Key_MethodInfo_,
	nullptr,
	nullptr,
	_ProtectionDomain$Key_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.ProtectionDomain"
};

$Object* allocate$ProtectionDomain$Key($Class* clazz) {
	return $of($alloc(ProtectionDomain$Key));
}

void ProtectionDomain$Key::init$() {
}

ProtectionDomain$Key::ProtectionDomain$Key() {
}

$Class* ProtectionDomain$Key::load$($String* name, bool initialize) {
	$loadClass(ProtectionDomain$Key, name, initialize, &_ProtectionDomain$Key_ClassInfo_, allocate$ProtectionDomain$Key);
	return class$;
}

$Class* ProtectionDomain$Key::class$ = nullptr;

	} // security
} // java