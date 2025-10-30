#include <sun/security/util/ManifestEntryVerifier$SunProviderHolder.h>

#include <java/security/Provider.h>
#include <sun/security/jca/Providers.h>
#include <sun/security/util/ManifestEntryVerifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $Providers = ::sun::security::jca::Providers;
using $ManifestEntryVerifier = ::sun::security::util::ManifestEntryVerifier;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _ManifestEntryVerifier$SunProviderHolder_FieldInfo_[] = {
	{"instance", "Ljava/security/Provider;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManifestEntryVerifier$SunProviderHolder, instance)},
	{}
};

$MethodInfo _ManifestEntryVerifier$SunProviderHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ManifestEntryVerifier$SunProviderHolder::*)()>(&ManifestEntryVerifier$SunProviderHolder::init$))},
	{}
};

$InnerClassInfo _ManifestEntryVerifier$SunProviderHolder_InnerClassesInfo_[] = {
	{"sun.security.util.ManifestEntryVerifier$SunProviderHolder", "sun.security.util.ManifestEntryVerifier", "SunProviderHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ManifestEntryVerifier$SunProviderHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.ManifestEntryVerifier$SunProviderHolder",
	"java.lang.Object",
	nullptr,
	_ManifestEntryVerifier$SunProviderHolder_FieldInfo_,
	_ManifestEntryVerifier$SunProviderHolder_MethodInfo_,
	nullptr,
	nullptr,
	_ManifestEntryVerifier$SunProviderHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.ManifestEntryVerifier"
};

$Object* allocate$ManifestEntryVerifier$SunProviderHolder($Class* clazz) {
	return $of($alloc(ManifestEntryVerifier$SunProviderHolder));
}

$Provider* ManifestEntryVerifier$SunProviderHolder::instance = nullptr;

void ManifestEntryVerifier$SunProviderHolder::init$() {
}

void clinit$ManifestEntryVerifier$SunProviderHolder($Class* class$) {
	$assignStatic(ManifestEntryVerifier$SunProviderHolder::instance, $Providers::getSunProvider());
}

ManifestEntryVerifier$SunProviderHolder::ManifestEntryVerifier$SunProviderHolder() {
}

$Class* ManifestEntryVerifier$SunProviderHolder::load$($String* name, bool initialize) {
	$loadClass(ManifestEntryVerifier$SunProviderHolder, name, initialize, &_ManifestEntryVerifier$SunProviderHolder_ClassInfo_, clinit$ManifestEntryVerifier$SunProviderHolder, allocate$ManifestEntryVerifier$SunProviderHolder);
	return class$;
}

$Class* ManifestEntryVerifier$SunProviderHolder::class$ = nullptr;

		} // util
	} // security
} // sun