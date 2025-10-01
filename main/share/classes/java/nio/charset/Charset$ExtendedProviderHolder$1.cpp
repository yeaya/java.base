#include <java/nio/charset/Charset$ExtendedProviderHolder$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset$ExtendedProviderHolder.h>
#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $CharsetProviderArray = $Array<::java::nio::charset::spi::CharsetProvider>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset$ExtendedProviderHolder = ::java::nio::charset::Charset$ExtendedProviderHolder;
using $CharsetProvider = ::java::nio::charset::spi::CharsetProvider;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace java {
	namespace nio {
		namespace charset {

$MethodInfo _Charset$ExtendedProviderHolder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Charset$ExtendedProviderHolder$1::*)()>(&Charset$ExtendedProviderHolder$1::init$))},
	{"run", "()[Ljava/nio/charset/spi/CharsetProvider;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Charset$ExtendedProviderHolder$1_EnclosingMethodInfo_ = {
	"java.nio.charset.Charset$ExtendedProviderHolder",
	"extendedProviders",
	"()[Ljava/nio/charset/spi/CharsetProvider;"
};

$InnerClassInfo _Charset$ExtendedProviderHolder$1_InnerClassesInfo_[] = {
	{"java.nio.charset.Charset$ExtendedProviderHolder", "java.nio.charset.Charset", "ExtendedProviderHolder", $PRIVATE | $STATIC},
	{"java.nio.charset.Charset$ExtendedProviderHolder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Charset$ExtendedProviderHolder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.charset.Charset$ExtendedProviderHolder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Charset$ExtendedProviderHolder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/nio/charset/spi/CharsetProvider;>;",
	&_Charset$ExtendedProviderHolder$1_EnclosingMethodInfo_,
	_Charset$ExtendedProviderHolder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.charset.Charset"
};

$Object* allocate$Charset$ExtendedProviderHolder$1($Class* clazz) {
	return $of($alloc(Charset$ExtendedProviderHolder$1));
}

void Charset$ExtendedProviderHolder$1::init$() {
}

$Object* Charset$ExtendedProviderHolder$1::run() {
	$beforeCallerSensitive();
	$var($CharsetProviderArray, cps, $new($CharsetProviderArray, 1));
	int32_t n = 0;
	$load($CharsetProvider);
	$var($ServiceLoader, sl, $ServiceLoader::loadInstalled($CharsetProvider::class$));
	{
		$var($Iterator, i$, $nc(sl)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($CharsetProvider, cp, $cast($CharsetProvider, i$->next()));
			{
				if (n + 1 > cps->length) {
					$assign(cps, $fcast($CharsetProviderArray, $Arrays::copyOf(cps, cps->length << 1)));
				}
				cps->set(n++, cp);
			}
		}
	}
	return $of(n == cps->length ? cps : $fcast($CharsetProviderArray, $Arrays::copyOf(cps, n)));
}

Charset$ExtendedProviderHolder$1::Charset$ExtendedProviderHolder$1() {
}

$Class* Charset$ExtendedProviderHolder$1::load$($String* name, bool initialize) {
	$loadClass(Charset$ExtendedProviderHolder$1, name, initialize, &_Charset$ExtendedProviderHolder$1_ClassInfo_, allocate$Charset$ExtendedProviderHolder$1);
	return class$;
}

$Class* Charset$ExtendedProviderHolder$1::class$ = nullptr;

		} // charset
	} // nio
} // java