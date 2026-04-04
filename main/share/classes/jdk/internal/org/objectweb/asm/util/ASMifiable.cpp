#include <jdk/internal/org/objectweb/asm/util/ASMifiable.h>
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

$Class* ASMifiable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"asmify", "(Ljava/lang/StringBuffer;Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/StringBuffer;Ljava/lang/String;Ljava/util/Map<Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(ASMifiable, asmify, void, $StringBuffer*, $String*, $Map*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.org.objectweb.asm.util.ASMifiable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ASMifiable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ASMifiable);
	});
	return class$;
}

$Class* ASMifiable::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk