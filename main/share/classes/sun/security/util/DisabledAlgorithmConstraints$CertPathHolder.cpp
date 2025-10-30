#include <sun/security/util/DisabledAlgorithmConstraints$CertPathHolder.h>

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

$FieldInfo _DisabledAlgorithmConstraints$CertPathHolder_FieldInfo_[] = {
	{"CONSTRAINTS", "Lsun/security/util/DisabledAlgorithmConstraints;", nullptr, $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints$CertPathHolder, CONSTRAINTS)},
	{}
};

$MethodInfo _DisabledAlgorithmConstraints$CertPathHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DisabledAlgorithmConstraints$CertPathHolder::*)()>(&DisabledAlgorithmConstraints$CertPathHolder::init$))},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints$CertPathHolder_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$CertPathHolder", "sun.security.util.DisabledAlgorithmConstraints", "CertPathHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$CertPathHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DisabledAlgorithmConstraints$CertPathHolder",
	"java.lang.Object",
	nullptr,
	_DisabledAlgorithmConstraints$CertPathHolder_FieldInfo_,
	_DisabledAlgorithmConstraints$CertPathHolder_MethodInfo_,
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$CertPathHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$CertPathHolder($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$CertPathHolder));
}

$DisabledAlgorithmConstraints* DisabledAlgorithmConstraints$CertPathHolder::CONSTRAINTS = nullptr;

void DisabledAlgorithmConstraints$CertPathHolder::init$() {
}

void clinit$DisabledAlgorithmConstraints$CertPathHolder($Class* class$) {
	$assignStatic(DisabledAlgorithmConstraints$CertPathHolder::CONSTRAINTS, $new($DisabledAlgorithmConstraints, "jdk.certpath.disabledAlgorithms"_s));
}

DisabledAlgorithmConstraints$CertPathHolder::DisabledAlgorithmConstraints$CertPathHolder() {
}

$Class* DisabledAlgorithmConstraints$CertPathHolder::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$CertPathHolder, name, initialize, &_DisabledAlgorithmConstraints$CertPathHolder_ClassInfo_, clinit$DisabledAlgorithmConstraints$CertPathHolder, allocate$DisabledAlgorithmConstraints$CertPathHolder);
	return class$;
}

$Class* DisabledAlgorithmConstraints$CertPathHolder::class$ = nullptr;

		} // util
	} // security
} // sun