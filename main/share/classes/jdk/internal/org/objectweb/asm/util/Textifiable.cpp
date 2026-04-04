#include <jdk/internal/org/objectweb/asm/util/Textifiable.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Map = ::java::util::Map;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$Class* Textifiable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"textify", "(Ljava/lang/StringBuffer;Ljava/util/Map;)V", "(Ljava/lang/StringBuffer;Ljava/util/Map<Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Textifiable, textify, void, $StringBuffer*, $Map*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.org.objectweb.asm.util.Textifiable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Textifiable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Textifiable);
	});
	return class$;
}

$Class* Textifiable::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk