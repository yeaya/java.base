#include <jdk/internal/icu/lang/UCharacterEnums.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

void UCharacterEnums::init$() {
}

UCharacterEnums::UCharacterEnums() {
}

$Class* UCharacterEnums::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(UCharacterEnums, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.lang.UCharacterEnums$ECharacterDirection", "jdk.internal.icu.lang.UCharacterEnums", "ECharacterDirection", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.icu.lang.UCharacterEnums$ECharacterCategory", "jdk.internal.icu.lang.UCharacterEnums", "ECharacterCategory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.lang.UCharacterEnums",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"jdk.internal.icu.lang.UCharacterEnums$ECharacterDirection,jdk.internal.icu.lang.UCharacterEnums$ECharacterCategory"
	};
	$loadClass(UCharacterEnums, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UCharacterEnums);
	});
	return class$;
}

$Class* UCharacterEnums::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk