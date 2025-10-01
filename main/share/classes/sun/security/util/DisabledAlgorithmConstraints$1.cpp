#include <sun/security/util/DisabledAlgorithmConstraints$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint$Operator.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <jcpp.h>

#undef NE
#undef LT
#undef LE
#undef EQ
#undef GT
#undef GE

using $DisabledAlgorithmConstraints$Constraint$OperatorArray = $Array<::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DisabledAlgorithmConstraints = ::sun::security::util::DisabledAlgorithmConstraints;
using $DisabledAlgorithmConstraints$Constraint = ::sun::security::util::DisabledAlgorithmConstraints$Constraint;
using $DisabledAlgorithmConstraints$Constraint$Operator = ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DisabledAlgorithmConstraints$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DisabledAlgorithmConstraints$1, $SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator)},
	{}
};

$EnclosingMethodInfo _DisabledAlgorithmConstraints$1_EnclosingMethodInfo_ = {
	"sun.security.util.DisabledAlgorithmConstraints",
	nullptr,
	nullptr
};

$InnerClassInfo _DisabledAlgorithmConstraints$1_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.util.DisabledAlgorithmConstraints$1",
	"java.lang.Object",
	nullptr,
	_DisabledAlgorithmConstraints$1_FieldInfo_,
	nullptr,
	nullptr,
	&_DisabledAlgorithmConstraints$1_EnclosingMethodInfo_,
	_DisabledAlgorithmConstraints$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$1($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$1));
}

$ints* DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator = nullptr;

void clinit$DisabledAlgorithmConstraints$1($Class* class$) {
	$assignStatic(DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator, $new($ints, $($DisabledAlgorithmConstraints$Constraint$Operator::values())->length));
	{
		try {
			$nc(DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator)->set($DisabledAlgorithmConstraints$Constraint$Operator::EQ->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator)->set($DisabledAlgorithmConstraints$Constraint$Operator::NE->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator)->set($DisabledAlgorithmConstraints$Constraint$Operator::LT->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator)->set($DisabledAlgorithmConstraints$Constraint$Operator::LE->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator)->set($DisabledAlgorithmConstraints$Constraint$Operator::GT->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator)->set($DisabledAlgorithmConstraints$Constraint$Operator::GE->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

DisabledAlgorithmConstraints$1::DisabledAlgorithmConstraints$1() {
}

$Class* DisabledAlgorithmConstraints$1::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$1, name, initialize, &_DisabledAlgorithmConstraints$1_ClassInfo_, clinit$DisabledAlgorithmConstraints$1, allocate$DisabledAlgorithmConstraints$1);
	return class$;
}

$Class* DisabledAlgorithmConstraints$1::class$ = nullptr;

		} // util
	} // security
} // sun