#include <java/security/SecureClassLoader$DebugHolder.h>

#include <java/security/SecureClassLoader.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$FieldInfo _SecureClassLoader$DebugHolder_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SecureClassLoader$DebugHolder, debug)},
	{}
};

$MethodInfo _SecureClassLoader$DebugHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SecureClassLoader$DebugHolder::*)()>(&SecureClassLoader$DebugHolder::init$))},
	{}
};

$InnerClassInfo _SecureClassLoader$DebugHolder_InnerClassesInfo_[] = {
	{"java.security.SecureClassLoader$DebugHolder", "java.security.SecureClassLoader", "DebugHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SecureClassLoader$DebugHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.SecureClassLoader$DebugHolder",
	"java.lang.Object",
	nullptr,
	_SecureClassLoader$DebugHolder_FieldInfo_,
	_SecureClassLoader$DebugHolder_MethodInfo_,
	nullptr,
	nullptr,
	_SecureClassLoader$DebugHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.SecureClassLoader"
};

$Object* allocate$SecureClassLoader$DebugHolder($Class* clazz) {
	return $of($alloc(SecureClassLoader$DebugHolder));
}

$Debug* SecureClassLoader$DebugHolder::debug = nullptr;

void SecureClassLoader$DebugHolder::init$() {
}

void clinit$SecureClassLoader$DebugHolder($Class* class$) {
	$assignStatic(SecureClassLoader$DebugHolder::debug, $Debug::getInstance("scl"_s));
}

SecureClassLoader$DebugHolder::SecureClassLoader$DebugHolder() {
}

$Class* SecureClassLoader$DebugHolder::load$($String* name, bool initialize) {
	$loadClass(SecureClassLoader$DebugHolder, name, initialize, &_SecureClassLoader$DebugHolder_ClassInfo_, clinit$SecureClassLoader$DebugHolder, allocate$SecureClassLoader$DebugHolder);
	return class$;
}

$Class* SecureClassLoader$DebugHolder::class$ = nullptr;

	} // security
} // java