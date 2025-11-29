#include <jdk/internal/icu/text/BidiBase$NumericShapings.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <jdk/internal/access/JavaAWTFontAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaAWTFontAccess = ::jdk::internal::access::JavaAWTFontAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiBase$NumericShapings_FieldInfo_[] = {
	{"jafa", "Ljdk/internal/access/JavaAWTFontAccess;", nullptr, $STATIC | $FINAL, $staticField(BidiBase$NumericShapings, jafa)},
	{}
};

$MethodInfo _BidiBase$NumericShapings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BidiBase$NumericShapings::*)()>(&BidiBase$NumericShapings::init$))},
	{"shape", "(Ljava/lang/Object;[CII)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*,$chars*,int32_t,int32_t)>(&BidiBase$NumericShapings::shape))},
	{}
};

$InnerClassInfo _BidiBase$NumericShapings_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.BidiBase$NumericShapings", "jdk.internal.icu.text.BidiBase", "NumericShapings", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BidiBase$NumericShapings_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.text.BidiBase$NumericShapings",
	"java.lang.Object",
	nullptr,
	_BidiBase$NumericShapings_FieldInfo_,
	_BidiBase$NumericShapings_MethodInfo_,
	nullptr,
	nullptr,
	_BidiBase$NumericShapings_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.BidiBase"
};

$Object* allocate$BidiBase$NumericShapings($Class* clazz) {
	return $of($alloc(BidiBase$NumericShapings));
}

$JavaAWTFontAccess* BidiBase$NumericShapings::jafa = nullptr;

void BidiBase$NumericShapings::init$() {
}

void BidiBase$NumericShapings::shape(Object$* shaper, $chars* text, int32_t start, int32_t count) {
	$init(BidiBase$NumericShapings);
	if (BidiBase$NumericShapings::jafa != nullptr) {
		$nc(BidiBase$NumericShapings::jafa)->shape(shaper, text, start, count);
	}
}

void clinit$BidiBase$NumericShapings($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$Class::forName("java.awt.font.NumericShaper"_s, true, nullptr);
		} catch ($ClassNotFoundException& e) {
		}
	}
	$assignStatic(BidiBase$NumericShapings::jafa, $SharedSecrets::getJavaAWTFontAccess());
}

BidiBase$NumericShapings::BidiBase$NumericShapings() {
}

$Class* BidiBase$NumericShapings::load$($String* name, bool initialize) {
	$loadClass(BidiBase$NumericShapings, name, initialize, &_BidiBase$NumericShapings_ClassInfo_, clinit$BidiBase$NumericShapings, allocate$BidiBase$NumericShapings);
	return class$;
}

$Class* BidiBase$NumericShapings::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk