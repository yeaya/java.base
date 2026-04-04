#include <jdk/internal/org/xml/sax/Attributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$Class* Attributes::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getIndex, int32_t, $String*, $String*)},
		{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getIndex, int32_t, $String*)},
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getLength, int32_t)},
		{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getLocalName, $String*, int32_t)},
		{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getQName, $String*, int32_t)},
		{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getType, $String*, int32_t)},
		{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getType, $String*, $String*, $String*)},
		{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getType, $String*, $String*)},
		{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getURI, $String*, int32_t)},
		{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getValue, $String*, int32_t)},
		{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getValue, $String*, $String*, $String*)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Attributes, getValue, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.org.xml.sax.Attributes",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Attributes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attributes);
	});
	return class$;
}

$Class* Attributes::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk