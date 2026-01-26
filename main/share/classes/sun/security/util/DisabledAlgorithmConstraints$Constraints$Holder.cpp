#include <sun/security/util/DisabledAlgorithmConstraints$Constraints$Holder.h>

#include <java/util/regex/Pattern.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraints.h>
#include <jcpp.h>

#undef DENY_AFTER_PATTERN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DisabledAlgorithmConstraints$Constraints$Holder_FieldInfo_[] = {
	{"DENY_AFTER_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints$Constraints$Holder, DENY_AFTER_PATTERN)},
	{}
};

$MethodInfo _DisabledAlgorithmConstraints$Constraints$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DisabledAlgorithmConstraints$Constraints$Holder, init$, void)},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints$Constraints$Holder_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$Constraints", "sun.security.util.DisabledAlgorithmConstraints", "Constraints", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$Constraints$Holder", "sun.security.util.DisabledAlgorithmConstraints$Constraints", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$Constraints$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DisabledAlgorithmConstraints$Constraints$Holder",
	"java.lang.Object",
	nullptr,
	_DisabledAlgorithmConstraints$Constraints$Holder_FieldInfo_,
	_DisabledAlgorithmConstraints$Constraints$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$Constraints$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$Constraints$Holder($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$Constraints$Holder));
}

$Pattern* DisabledAlgorithmConstraints$Constraints$Holder::DENY_AFTER_PATTERN = nullptr;

void DisabledAlgorithmConstraints$Constraints$Holder::init$() {
}

void clinit$DisabledAlgorithmConstraints$Constraints$Holder($Class* class$) {
	$assignStatic(DisabledAlgorithmConstraints$Constraints$Holder::DENY_AFTER_PATTERN, $Pattern::compile("denyAfter\\s+(\\d{4})-(\\d{2})-(\\d{2})"_s));
}

DisabledAlgorithmConstraints$Constraints$Holder::DisabledAlgorithmConstraints$Constraints$Holder() {
}

$Class* DisabledAlgorithmConstraints$Constraints$Holder::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$Constraints$Holder, name, initialize, &_DisabledAlgorithmConstraints$Constraints$Holder_ClassInfo_, clinit$DisabledAlgorithmConstraints$Constraints$Holder, allocate$DisabledAlgorithmConstraints$Constraints$Holder);
	return class$;
}

$Class* DisabledAlgorithmConstraints$Constraints$Holder::class$ = nullptr;

		} // util
	} // security
} // sun