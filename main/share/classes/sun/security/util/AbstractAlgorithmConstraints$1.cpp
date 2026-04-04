#include <sun/security/util/AbstractAlgorithmConstraints$1.h>
#include <java/security/Security.h>
#include <sun/security/util/AbstractAlgorithmConstraints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace sun {
	namespace security {
		namespace util {

void AbstractAlgorithmConstraints$1::init$($String* val$propertyName) {
	$set(this, val$propertyName, val$propertyName);
}

$Object* AbstractAlgorithmConstraints$1::run() {
	return $of($Security::getProperty(this->val$propertyName));
}

AbstractAlgorithmConstraints$1::AbstractAlgorithmConstraints$1() {
}

$Class* AbstractAlgorithmConstraints$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$propertyName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractAlgorithmConstraints$1, val$propertyName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(AbstractAlgorithmConstraints$1, init$, void, $String*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractAlgorithmConstraints$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.util.AbstractAlgorithmConstraints",
		"getAlgorithms",
		"(Ljava/lang/String;)Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.AbstractAlgorithmConstraints$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.AbstractAlgorithmConstraints$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.AbstractAlgorithmConstraints"
	};
	$loadClass(AbstractAlgorithmConstraints$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractAlgorithmConstraints$1);
	});
	return class$;
}

$Class* AbstractAlgorithmConstraints$1::class$ = nullptr;

		} // util
	} // security
} // sun