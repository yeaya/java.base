#include <jdk/internal/icu/impl/Norm2AllModes$Norm2AllModesSingleton.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/Norm2AllModes.h>
#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jdk/internal/icu/util/VersionInfo.h>
#include <jcpp.h>

#undef DATA_FILE_NAME
#undef ICU_DATA_VERSION_PATH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Norm2AllModes = ::jdk::internal::icu::impl::Norm2AllModes;
using $NormalizerImpl = ::jdk::internal::icu::impl::NormalizerImpl;
using $VersionInfo = ::jdk::internal::icu::util::VersionInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _Norm2AllModes$Norm2AllModesSingleton_FieldInfo_[] = {
	{"allModes", "Ljdk/internal/icu/impl/Norm2AllModes;", nullptr, $PRIVATE, $field(Norm2AllModes$Norm2AllModesSingleton, allModes)},
	{"exception", "Ljava/lang/RuntimeException;", nullptr, $PRIVATE, $field(Norm2AllModes$Norm2AllModesSingleton, exception)},
	{}
};

$MethodInfo _Norm2AllModes$Norm2AllModesSingleton_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Norm2AllModes$Norm2AllModesSingleton::*)($String*)>(&Norm2AllModes$Norm2AllModesSingleton::init$))},
	{}
};

$InnerClassInfo _Norm2AllModes$Norm2AllModesSingleton_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Norm2AllModes$Norm2AllModesSingleton", "jdk.internal.icu.impl.Norm2AllModes", "Norm2AllModesSingleton", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Norm2AllModes$Norm2AllModesSingleton_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.Norm2AllModes$Norm2AllModesSingleton",
	"java.lang.Object",
	nullptr,
	_Norm2AllModes$Norm2AllModesSingleton_FieldInfo_,
	_Norm2AllModes$Norm2AllModesSingleton_MethodInfo_,
	nullptr,
	nullptr,
	_Norm2AllModes$Norm2AllModesSingleton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Norm2AllModes"
};

$Object* allocate$Norm2AllModes$Norm2AllModesSingleton($Class* clazz) {
	return $of($alloc(Norm2AllModes$Norm2AllModesSingleton));
}

void Norm2AllModes$Norm2AllModesSingleton::init$($String* name) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($VersionInfo);
		$var($String, DATA_FILE_NAME, $str({"/jdk/internal/icu/impl/data/icudt"_s, $VersionInfo::ICU_DATA_VERSION_PATH, "/"_s, name, ".nrm"_s}));
		$var($NormalizerImpl, impl, $$new($NormalizerImpl)->load(DATA_FILE_NAME));
		$set(this, allModes, $new($Norm2AllModes, impl));
	} catch ($RuntimeException&) {
		$var($RuntimeException, e, $catch());
		$set(this, exception, e);
	}
}

Norm2AllModes$Norm2AllModesSingleton::Norm2AllModes$Norm2AllModesSingleton() {
}

$Class* Norm2AllModes$Norm2AllModesSingleton::load$($String* name, bool initialize) {
	$loadClass(Norm2AllModes$Norm2AllModesSingleton, name, initialize, &_Norm2AllModes$Norm2AllModesSingleton_ClassInfo_, allocate$Norm2AllModes$Norm2AllModesSingleton);
	return class$;
}

$Class* Norm2AllModes$Norm2AllModesSingleton::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk