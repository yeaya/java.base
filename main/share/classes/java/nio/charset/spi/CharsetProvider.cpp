#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/nio/charset/Charset.h>
#include <java/security/Permission.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $Charset = ::java::nio::charset::Charset;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace nio {
		namespace charset {
			namespace spi {

$Void* CharsetProvider::checkPermission() {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(CharsetProvider, init$, void, $Void*)},
		{"<init>", "()V", nullptr, $PROTECTED, $method(CharsetProvider, init$, void)},
		{"charsetForName", "(Ljava/lang/String;)Ljava/nio/charset/Charset;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharsetProvider, charsetForName, $Charset*, $String*)},
		{"charsets", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/charset/Charset;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CharsetProvider, charsets, $Iterator*)},
		{"checkPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $staticMethod(CharsetProvider, checkPermission, $Void*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.nio.charset.spi.CharsetProvider",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CharsetProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharsetProvider);
	});
	return class$;
}

$Class* CharsetProvider::class$ = nullptr;

			} // spi
		} // charset
	} // nio
} // java