#include <jdk/internal/org/xml/sax/Locator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$Class* Locator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Locator, getColumnNumber, int32_t)},
		{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Locator, getLineNumber, int32_t)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Locator, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Locator, getSystemId, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.org.xml.sax.Locator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Locator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Locator);
	});
	return class$;
}

$Class* Locator::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk