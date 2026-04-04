#include <java/nio/charset/Charset$ExtendedProviderHolder.h>
#include <java/nio/charset/Charset$ExtendedProviderHolder$1.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

using $CharsetProviderArray = $Array<::java::nio::charset::spi::CharsetProvider>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset$ExtendedProviderHolder$1 = ::java::nio::charset::Charset$ExtendedProviderHolder$1;
using $AccessController = ::java::security::AccessController;

namespace java {
	namespace nio {
		namespace charset {

$CharsetProviderArray* Charset$ExtendedProviderHolder::extendedProviders$ = nullptr;

void Charset$ExtendedProviderHolder::init$() {
}

$CharsetProviderArray* Charset$ExtendedProviderHolder::extendedProviders() {
	$init(Charset$ExtendedProviderHolder);
	$beforeCallerSensitive();
	return $cast($CharsetProviderArray, $AccessController::doPrivileged($$new($Charset$ExtendedProviderHolder$1)));
}

void Charset$ExtendedProviderHolder::clinit$($Class* clazz) {
	$assignStatic(Charset$ExtendedProviderHolder::extendedProviders$, Charset$ExtendedProviderHolder::extendedProviders());
}

Charset$ExtendedProviderHolder::Charset$ExtendedProviderHolder() {
}

$Class* Charset$ExtendedProviderHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"extendedProviders", "[Ljava/nio/charset/spi/CharsetProvider;", nullptr, $STATIC | $FINAL, $staticField(Charset$ExtendedProviderHolder, extendedProviders$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Charset$ExtendedProviderHolder, init$, void)},
		{"extendedProviders", "()[Ljava/nio/charset/spi/CharsetProvider;", nullptr, $PRIVATE | $STATIC, $staticMethod(Charset$ExtendedProviderHolder, extendedProviders, $CharsetProviderArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.charset.Charset$ExtendedProviderHolder", "java.nio.charset.Charset", "ExtendedProviderHolder", $PRIVATE | $STATIC},
		{"java.nio.charset.Charset$ExtendedProviderHolder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.charset.Charset$ExtendedProviderHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.charset.Charset"
	};
	$loadClass(Charset$ExtendedProviderHolder, name, initialize, &classInfo$$, Charset$ExtendedProviderHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Charset$ExtendedProviderHolder);
	});
	return class$;
}

$Class* Charset$ExtendedProviderHolder::class$ = nullptr;

		} // charset
	} // nio
} // java