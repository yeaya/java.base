#include <jdk/internal/org/objectweb/asm/commons/TableSwitchGenerator.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$Class* TableSwitchGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"generateCase", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableSwitchGenerator, generateCase, void, int32_t, $Label*)},
		{"generateDefault", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableSwitchGenerator, generateDefault, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.org.objectweb.asm.commons.TableSwitchGenerator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TableSwitchGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableSwitchGenerator);
	});
	return class$;
}

$Class* TableSwitchGenerator::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk