#include <sun/security/util/DisabledAlgorithmConstraints$Constraint$Operator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <jcpp.h>

#undef EQ
#undef GE
#undef GT
#undef LE
#undef LT
#undef NE

using $DisabledAlgorithmConstraints$Constraint$OperatorArray = $Array<::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DisabledAlgorithmConstraints = ::sun::security::util::DisabledAlgorithmConstraints;
using $DisabledAlgorithmConstraints$Constraint = ::sun::security::util::DisabledAlgorithmConstraints$Constraint;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DisabledAlgorithmConstraints$Constraint$Operator_FieldInfo_[] = {
	{"EQ", "Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DisabledAlgorithmConstraints$Constraint$Operator, EQ)},
	{"NE", "Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DisabledAlgorithmConstraints$Constraint$Operator, NE)},
	{"LT", "Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DisabledAlgorithmConstraints$Constraint$Operator, LT)},
	{"LE", "Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DisabledAlgorithmConstraints$Constraint$Operator, LE)},
	{"GT", "Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DisabledAlgorithmConstraints$Constraint$Operator, GT)},
	{"GE", "Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DisabledAlgorithmConstraints$Constraint$Operator, GE)},
	{"$VALUES", "[Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DisabledAlgorithmConstraints$Constraint$Operator, $VALUES)},
	{}
};

$MethodInfo _DisabledAlgorithmConstraints$Constraint$Operator_MethodInfo_[] = {
	{"$values", "()[Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DisabledAlgorithmConstraints$Constraint$OperatorArray*(*)()>(&DisabledAlgorithmConstraints$Constraint$Operator::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DisabledAlgorithmConstraints$Constraint$Operator::*)($String*,int32_t)>(&DisabledAlgorithmConstraints$Constraint$Operator::init$))},
	{"of", "(Ljava/lang/String;)Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $STATIC, $method(static_cast<DisabledAlgorithmConstraints$Constraint$Operator*(*)($String*)>(&DisabledAlgorithmConstraints$Constraint$Operator::of))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DisabledAlgorithmConstraints$Constraint$Operator*(*)($String*)>(&DisabledAlgorithmConstraints$Constraint$Operator::valueOf))},
	{"values", "()[Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DisabledAlgorithmConstraints$Constraint$OperatorArray*(*)()>(&DisabledAlgorithmConstraints$Constraint$Operator::values))},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints$Constraint$Operator_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$Constraint", "sun.security.util.DisabledAlgorithmConstraints", "Constraint", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.security.util.DisabledAlgorithmConstraints$Constraint$Operator", "sun.security.util.DisabledAlgorithmConstraints$Constraint", "Operator", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$Constraint$Operator_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.DisabledAlgorithmConstraints$Constraint$Operator",
	"java.lang.Enum",
	nullptr,
	_DisabledAlgorithmConstraints$Constraint$Operator_FieldInfo_,
	_DisabledAlgorithmConstraints$Constraint$Operator_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;>;",
	nullptr,
	_DisabledAlgorithmConstraints$Constraint$Operator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$Constraint$Operator($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$Constraint$Operator));
}

DisabledAlgorithmConstraints$Constraint$Operator* DisabledAlgorithmConstraints$Constraint$Operator::EQ = nullptr;
DisabledAlgorithmConstraints$Constraint$Operator* DisabledAlgorithmConstraints$Constraint$Operator::NE = nullptr;
DisabledAlgorithmConstraints$Constraint$Operator* DisabledAlgorithmConstraints$Constraint$Operator::LT = nullptr;
DisabledAlgorithmConstraints$Constraint$Operator* DisabledAlgorithmConstraints$Constraint$Operator::LE = nullptr;
DisabledAlgorithmConstraints$Constraint$Operator* DisabledAlgorithmConstraints$Constraint$Operator::GT = nullptr;
DisabledAlgorithmConstraints$Constraint$Operator* DisabledAlgorithmConstraints$Constraint$Operator::GE = nullptr;
$DisabledAlgorithmConstraints$Constraint$OperatorArray* DisabledAlgorithmConstraints$Constraint$Operator::$VALUES = nullptr;

$DisabledAlgorithmConstraints$Constraint$OperatorArray* DisabledAlgorithmConstraints$Constraint$Operator::$values() {
	$init(DisabledAlgorithmConstraints$Constraint$Operator);
	return $new($DisabledAlgorithmConstraints$Constraint$OperatorArray, {
		DisabledAlgorithmConstraints$Constraint$Operator::EQ,
		DisabledAlgorithmConstraints$Constraint$Operator::NE,
		DisabledAlgorithmConstraints$Constraint$Operator::LT,
		DisabledAlgorithmConstraints$Constraint$Operator::LE,
		DisabledAlgorithmConstraints$Constraint$Operator::GT,
		DisabledAlgorithmConstraints$Constraint$Operator::GE
	});
}

$DisabledAlgorithmConstraints$Constraint$OperatorArray* DisabledAlgorithmConstraints$Constraint$Operator::values() {
	$init(DisabledAlgorithmConstraints$Constraint$Operator);
	return $cast($DisabledAlgorithmConstraints$Constraint$OperatorArray, DisabledAlgorithmConstraints$Constraint$Operator::$VALUES->clone());
}

DisabledAlgorithmConstraints$Constraint$Operator* DisabledAlgorithmConstraints$Constraint$Operator::valueOf($String* name) {
	$init(DisabledAlgorithmConstraints$Constraint$Operator);
	return $cast(DisabledAlgorithmConstraints$Constraint$Operator, $Enum::valueOf(DisabledAlgorithmConstraints$Constraint$Operator::class$, name));
}

void DisabledAlgorithmConstraints$Constraint$Operator::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

DisabledAlgorithmConstraints$Constraint$Operator* DisabledAlgorithmConstraints$Constraint$Operator::of($String* s) {
	$init(DisabledAlgorithmConstraints$Constraint$Operator);
	{
		$var($String, s21359$, s);
		int32_t tmp21359$ = -1;
		switch ($nc(s21359$)->hashCode()) {
		case 1952:
			{
				if (s21359$->equals("=="_s)) {
					tmp21359$ = 0;
				}
				break;
			}
		case 1084:
			{
				if (s21359$->equals("!="_s)) {
					tmp21359$ = 1;
				}
				break;
			}
		case 60:
			{
				if (s21359$->equals("<"_s)) {
					tmp21359$ = 2;
				}
				break;
			}
		case 1921:
			{
				if (s21359$->equals("<="_s)) {
					tmp21359$ = 3;
				}
				break;
			}
		case 62:
			{
				if (s21359$->equals(">"_s)) {
					tmp21359$ = 4;
				}
				break;
			}
		case 1983:
			{
				if (s21359$->equals(">="_s)) {
					tmp21359$ = 5;
				}
				break;
			}
		}
		switch (tmp21359$) {
		case 0:
			{
				return DisabledAlgorithmConstraints$Constraint$Operator::EQ;
			}
		case 1:
			{
				return DisabledAlgorithmConstraints$Constraint$Operator::NE;
			}
		case 2:
			{
				return DisabledAlgorithmConstraints$Constraint$Operator::LT;
			}
		case 3:
			{
				return DisabledAlgorithmConstraints$Constraint$Operator::LE;
			}
		case 4:
			{
				return DisabledAlgorithmConstraints$Constraint$Operator::GT;
			}
		case 5:
			{
				return DisabledAlgorithmConstraints$Constraint$Operator::GE;
			}
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Error in security property. "_s, s, " is not a legal Operator"_s}));
}

void clinit$DisabledAlgorithmConstraints$Constraint$Operator($Class* class$) {
	$assignStatic(DisabledAlgorithmConstraints$Constraint$Operator::EQ, $new(DisabledAlgorithmConstraints$Constraint$Operator, "EQ"_s, 0));
	$assignStatic(DisabledAlgorithmConstraints$Constraint$Operator::NE, $new(DisabledAlgorithmConstraints$Constraint$Operator, "NE"_s, 1));
	$assignStatic(DisabledAlgorithmConstraints$Constraint$Operator::LT, $new(DisabledAlgorithmConstraints$Constraint$Operator, "LT"_s, 2));
	$assignStatic(DisabledAlgorithmConstraints$Constraint$Operator::LE, $new(DisabledAlgorithmConstraints$Constraint$Operator, "LE"_s, 3));
	$assignStatic(DisabledAlgorithmConstraints$Constraint$Operator::GT, $new(DisabledAlgorithmConstraints$Constraint$Operator, "GT"_s, 4));
	$assignStatic(DisabledAlgorithmConstraints$Constraint$Operator::GE, $new(DisabledAlgorithmConstraints$Constraint$Operator, "GE"_s, 5));
	$assignStatic(DisabledAlgorithmConstraints$Constraint$Operator::$VALUES, DisabledAlgorithmConstraints$Constraint$Operator::$values());
}

DisabledAlgorithmConstraints$Constraint$Operator::DisabledAlgorithmConstraints$Constraint$Operator() {
}

$Class* DisabledAlgorithmConstraints$Constraint$Operator::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$Constraint$Operator, name, initialize, &_DisabledAlgorithmConstraints$Constraint$Operator_ClassInfo_, clinit$DisabledAlgorithmConstraints$Constraint$Operator, allocate$DisabledAlgorithmConstraints$Constraint$Operator);
	return class$;
}

$Class* DisabledAlgorithmConstraints$Constraint$Operator::class$ = nullptr;

		} // util
	} // security
} // sun