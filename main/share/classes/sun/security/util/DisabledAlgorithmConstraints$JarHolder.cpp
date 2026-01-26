#include <sun/security/util/DisabledAlgorithmConstraints$JarHolder.h>

#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <jcpp.h>

#undef CONSTRAINTS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DisabledAlgorithmConstraints = ::sun::security::util::DisabledAlgorithmConstraints;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DisabledAlgorithmConstraints$JarHolder_FieldInfo_[] = {
	{"CONSTRAINTS", "Lsun/security/util/DisabledAlgorithmConstraints;", nullptr, $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints$JarHolder, CONSTRAINTS)},
	{}
};

$MethodInfo _DisabledAlgorithmConstraints$JarHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DisabledAlgorithmConstraints$JarHolder, init$, void)},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints$JarHolder_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$JarHolder", "sun.security.util.DisabledAlgorithmConstraints", "JarHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$JarHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DisabledAlgorithmConstraints$JarHolder",
	"java.lang.Object",
	nullptr,
	_DisabledAlgorithmConstraints$JarHolder_FieldInfo_,
	_DisabledAlgorithmConstraints$JarHolder_MethodInfo_,
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$JarHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$JarHolder($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$JarHolder));
}

$DisabledAlgorithmConstraints* DisabledAlgorithmConstraints$JarHolder::CONSTRAINTS = nullptr;

void DisabledAlgorithmConstraints$JarHolder::init$() {
}

void clinit$DisabledAlgorithmConstraints$JarHolder($Class* class$) {
	$assignStatic(DisabledAlgorithmConstraints$JarHolder::CONSTRAINTS, $new($DisabledAlgorithmConstraints, "jdk.jar.disabledAlgorithms"_s));
}

DisabledAlgorithmConstraints$JarHolder::DisabledAlgorithmConstraints$JarHolder() {
}

$Class* DisabledAlgorithmConstraints$JarHolder::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$JarHolder, name, initialize, &_DisabledAlgorithmConstraints$JarHolder_ClassInfo_, clinit$DisabledAlgorithmConstraints$JarHolder, allocate$DisabledAlgorithmConstraints$JarHolder);
	return class$;
}

$Class* DisabledAlgorithmConstraints$JarHolder::class$ = nullptr;

		} // util
	} // security
} // sun