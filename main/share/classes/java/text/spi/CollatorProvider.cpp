#include <java/text/spi/CollatorProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <java/util/spi/LocaleServiceProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Locale = ::java::util::Locale;
using $LocaleServiceProvider = ::java::util::spi::LocaleServiceProvider;

namespace java {
	namespace text {
		namespace spi {

$MethodInfo _CollatorProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(CollatorProvider::*)()>(&CollatorProvider::init$))},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/Collator;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CollatorProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.text.spi.CollatorProvider",
	"java.util.spi.LocaleServiceProvider",
	nullptr,
	nullptr,
	_CollatorProvider_MethodInfo_
};

$Object* allocate$CollatorProvider($Class* clazz) {
	return $of($alloc(CollatorProvider));
}

void CollatorProvider::init$() {
	$LocaleServiceProvider::init$();
}

CollatorProvider::CollatorProvider() {
}

$Class* CollatorProvider::load$($String* name, bool initialize) {
	$loadClass(CollatorProvider, name, initialize, &_CollatorProvider_ClassInfo_, allocate$CollatorProvider);
	return class$;
}

$Class* CollatorProvider::class$ = nullptr;

		} // spi
	} // text
} // java