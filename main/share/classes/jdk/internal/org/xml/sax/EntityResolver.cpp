#include <jdk/internal/org/xml/sax/EntityResolver.h>
#include <jdk/internal/org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputSource = ::jdk::internal::org::xml::sax::InputSource;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$Class* EntityResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/xml/sax/InputSource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityResolver, resolveEntity, $InputSource*, $String*, $String*), "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.org.xml.sax.EntityResolver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EntityResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EntityResolver);
	});
	return class$;
}

$Class* EntityResolver::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk