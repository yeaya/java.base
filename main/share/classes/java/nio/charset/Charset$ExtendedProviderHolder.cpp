#include <java/nio/charset/Charset$ExtendedProviderHolder.h>

#include <java/nio/charset/Charset$ExtendedProviderHolder$1.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $CharsetProviderArray = $Array<::java::nio::charset::spi::CharsetProvider>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset$ExtendedProviderHolder$1 = ::java::nio::charset::Charset$ExtendedProviderHolder$1;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _Charset$ExtendedProviderHolder_FieldInfo_[] = {
	{"extendedProviders", "[Ljava/nio/charset/spi/CharsetProvider;", nullptr, $STATIC | $FINAL, $staticField(Charset$ExtendedProviderHolder, extendedProviders$)},
	{}
};

$MethodInfo _Charset$ExtendedProviderHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Charset$ExtendedProviderHolder::*)()>(&Charset$ExtendedProviderHolder::init$))},
	{"extendedProviders", "()[Ljava/nio/charset/spi/CharsetProvider;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CharsetProviderArray*(*)()>(&Charset$ExtendedProviderHolder::extendedProviders))},
	{}
};

$InnerClassInfo _Charset$ExtendedProviderHolder_InnerClassesInfo_[] = {
	{"java.nio.charset.Charset$ExtendedProviderHolder", "java.nio.charset.Charset", "ExtendedProviderHolder", $PRIVATE | $STATIC},
	{"java.nio.charset.Charset$ExtendedProviderHolder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Charset$ExtendedProviderHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.charset.Charset$ExtendedProviderHolder",
	"java.lang.Object",
	nullptr,
	_Charset$ExtendedProviderHolder_FieldInfo_,
	_Charset$ExtendedProviderHolder_MethodInfo_,
	nullptr,
	nullptr,
	_Charset$ExtendedProviderHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.charset.Charset"
};

$Object* allocate$Charset$ExtendedProviderHolder($Class* clazz) {
	return $of($alloc(Charset$ExtendedProviderHolder));
}

$CharsetProviderArray* Charset$ExtendedProviderHolder::extendedProviders$ = nullptr;

void Charset$ExtendedProviderHolder::init$() {
}

$CharsetProviderArray* Charset$ExtendedProviderHolder::extendedProviders() {
	$init(Charset$ExtendedProviderHolder);
	$beforeCallerSensitive();
	return $cast($CharsetProviderArray, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Charset$ExtendedProviderHolder$1))));
}

void clinit$Charset$ExtendedProviderHolder($Class* class$) {
	$assignStatic(Charset$ExtendedProviderHolder::extendedProviders$, Charset$ExtendedProviderHolder::extendedProviders());
}

Charset$ExtendedProviderHolder::Charset$ExtendedProviderHolder() {
}

$Class* Charset$ExtendedProviderHolder::load$($String* name, bool initialize) {
	$loadClass(Charset$ExtendedProviderHolder, name, initialize, &_Charset$ExtendedProviderHolder_ClassInfo_, clinit$Charset$ExtendedProviderHolder, allocate$Charset$ExtendedProviderHolder);
	return class$;
}

$Class* Charset$ExtendedProviderHolder::class$ = nullptr;

		} // charset
	} // nio
} // java