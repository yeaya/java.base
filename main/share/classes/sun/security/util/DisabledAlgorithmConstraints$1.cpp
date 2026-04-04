#include <sun/security/util/DisabledAlgorithmConstraints$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint$Operator.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <jcpp.h>

#undef EQ
#undef GE
#undef GT
#undef LE
#undef LT
#undef NE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DisabledAlgorithmConstraints$Constraint$Operator = ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator;

namespace sun {
	namespace security {
		namespace util {

$ints* DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator = nullptr;

void DisabledAlgorithmConstraints$1::clinit$($Class* clazz) {
	$assignStatic(DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator, $new($ints, $($DisabledAlgorithmConstraints$Constraint$Operator::values())->length));
	{
		try {
			DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator->set($DisabledAlgorithmConstraints$Constraint$Operator::EQ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator->set($DisabledAlgorithmConstraints$Constraint$Operator::NE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator->set($DisabledAlgorithmConstraints$Constraint$Operator::LT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator->set($DisabledAlgorithmConstraints$Constraint$Operator::LE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator->set($DisabledAlgorithmConstraints$Constraint$Operator::GT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator->set($DisabledAlgorithmConstraints$Constraint$Operator::GE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DisabledAlgorithmConstraints$1::DisabledAlgorithmConstraints$1() {
}

$Class* DisabledAlgorithmConstraints$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DisabledAlgorithmConstraints$1, $SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.util.DisabledAlgorithmConstraints",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DisabledAlgorithmConstraints$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.util.DisabledAlgorithmConstraints$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.DisabledAlgorithmConstraints"
	};
	$loadClass(DisabledAlgorithmConstraints$1, name, initialize, &classInfo$$, DisabledAlgorithmConstraints$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DisabledAlgorithmConstraints$1);
	});
	return class$;
}

$Class* DisabledAlgorithmConstraints$1::class$ = nullptr;

		} // util
	} // security
} // sun