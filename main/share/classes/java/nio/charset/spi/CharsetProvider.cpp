#include <java/nio/charset/spi/CharsetProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $Charset = ::java::nio::charset::Charset;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace nio {
		namespace charset {
			namespace spi {

$MethodInfo _CharsetProvider_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(static_cast<void(CharsetProvider::*)($Void*)>(&CharsetProvider::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(CharsetProvider::*)()>(&CharsetProvider::init$))},
	{"charsetForName", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PUBLIC | $ABSTRACT},
	{"charsets", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/charset/Charset;>;", $PUBLIC | $ABSTRACT},
	{"checkPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Void*(*)()>(&CharsetProvider::checkPermission))},
	{}
};

$ClassInfo _CharsetProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.charset.spi.CharsetProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CharsetProvider_MethodInfo_
};

$Object* allocate$CharsetProvider($Class* clazz) {
	return $of($alloc(CharsetProvider));
}

$Void* CharsetProvider::checkPermission() {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "charsetProvider"_s));
	}
	return nullptr;
}

void CharsetProvider::init$($Void* ignore) {
}

void CharsetProvider::init$() {
	CharsetProvider::init$($(checkPermission()));
}

CharsetProvider::CharsetProvider() {
}

$Class* CharsetProvider::load$($String* name, bool initialize) {
	$loadClass(CharsetProvider, name, initialize, &_CharsetProvider_ClassInfo_, allocate$CharsetProvider);
	return class$;
}

$Class* CharsetProvider::class$ = nullptr;

			} // spi
		} // charset
	} // nio
} // java