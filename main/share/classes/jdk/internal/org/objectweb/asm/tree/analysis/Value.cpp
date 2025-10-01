#include <jdk/internal/org/objectweb/asm/tree/analysis/Value.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

$MethodInfo _Value_MethodInfo_[] = {
	{"getSize", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Value_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.tree.analysis.Value",
	nullptr,
	nullptr,
	nullptr,
	_Value_MethodInfo_
};

$Object* allocate$Value($Class* clazz) {
	return $of($alloc(Value));
}

$Class* Value::load$($String* name, bool initialize) {
	$loadClass(Value, name, initialize, &_Value_ClassInfo_, allocate$Value);
	return class$;
}

$Class* Value::class$ = nullptr;

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk