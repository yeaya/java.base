#include <jdk/internal/org/objectweb/asm/commons/TableSwitchGenerator.h>

#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$MethodInfo _TableSwitchGenerator_MethodInfo_[] = {
	{"generateCase", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"generateDefault", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TableSwitchGenerator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.commons.TableSwitchGenerator",
	nullptr,
	nullptr,
	nullptr,
	_TableSwitchGenerator_MethodInfo_
};

$Object* allocate$TableSwitchGenerator($Class* clazz) {
	return $of($alloc(TableSwitchGenerator));
}

$Class* TableSwitchGenerator::load$($String* name, bool initialize) {
	$loadClass(TableSwitchGenerator, name, initialize, &_TableSwitchGenerator_ClassInfo_, allocate$TableSwitchGenerator);
	return class$;
}

$Class* TableSwitchGenerator::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk