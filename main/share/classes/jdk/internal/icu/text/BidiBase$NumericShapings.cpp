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

$JavaAWTFontAccess* BidiBase$NumericShapings::jafa = nullptr;

void BidiBase$NumericShapings::init$() {
}

void BidiBase$NumericShapings::shape(Object$* shaper, $chars* text, int32_t start, int32_t count) {
	$init(BidiBase$NumericShapings);
	if (BidiBase$NumericShapings::jafa != nullptr) {
		BidiBase$NumericShapings::jafa->shape(shaper, text, start, count);
	}
}

void BidiBase$NumericShapings::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"jafa", "Ljdk/internal/access/JavaAWTFontAccess;", nullptr, $STATIC | $FINAL, $staticField(BidiBase$NumericShapings, jafa)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BidiBase$NumericShapings, init$, void)},
		{"shape", "(Ljava/lang/Object;[CII)V", nullptr, $STATIC, $staticMethod(BidiBase$NumericShapings, shape, void, Object$*, $chars*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.BidiBase$NumericShapings", "jdk.internal.icu.text.BidiBase", "NumericShapings", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiBase$NumericShapings",
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
		"jdk.internal.icu.text.BidiBase"
	};
	$loadClass(BidiBase$NumericShapings, name, initialize, &classInfo$$, BidiBase$NumericShapings::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BidiBase$NumericShapings);
	});
	return class$;
}

$Class* BidiBase$NumericShapings::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk