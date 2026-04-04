#include <jdk/internal/org/objectweb/asm/util/ASMifierSupport.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$Class* ASMifierSupport::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"asmify", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/util/Map<Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(ASMifierSupport, asmify, void, $StringBuilder*, $String*, $Map*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.org.objectweb.asm.util.ASMifierSupport",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ASMifierSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ASMifierSupport);
	});
	return class$;
}

$Class* ASMifierSupport::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk