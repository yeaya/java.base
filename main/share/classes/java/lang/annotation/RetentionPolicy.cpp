#include <java/lang/annotation/RetentionPolicy.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLASS
#undef RUNTIME
#undef SOURCE

using $RetentionPolicyArray = $Array<::java::lang::annotation::RetentionPolicy>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace annotation {

$FieldInfo _RetentionPolicy_FieldInfo_[] = {
	{"SOURCE", "Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RetentionPolicy, SOURCE)},
	{"CLASS", "Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RetentionPolicy, CLASS)},
	{"RUNTIME", "Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RetentionPolicy, RUNTIME)},
	{"$VALUES", "[Ljava/lang/annotation/RetentionPolicy;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RetentionPolicy, $VALUES)},
	{}
};

$MethodInfo _RetentionPolicy_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/annotation/RetentionPolicy;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$RetentionPolicyArray*(*)()>(&RetentionPolicy::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(RetentionPolicy::*)($String*,int32_t)>(&RetentionPolicy::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RetentionPolicy*(*)($String*)>(&RetentionPolicy::valueOf))},
	{"values", "()[Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RetentionPolicyArray*(*)()>(&RetentionPolicy::values))},
	{}
};

$ClassInfo _RetentionPolicy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.annotation.RetentionPolicy",
	"java.lang.Enum",
	nullptr,
	_RetentionPolicy_FieldInfo_,
	_RetentionPolicy_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/annotation/RetentionPolicy;>;"
};

$Object* allocate$RetentionPolicy($Class* clazz) {
	return $of($alloc(RetentionPolicy));
}

RetentionPolicy* RetentionPolicy::SOURCE = nullptr;
RetentionPolicy* RetentionPolicy::CLASS = nullptr;
RetentionPolicy* RetentionPolicy::RUNTIME = nullptr;
$RetentionPolicyArray* RetentionPolicy::$VALUES = nullptr;

$RetentionPolicyArray* RetentionPolicy::$values() {
	$init(RetentionPolicy);
	return $new($RetentionPolicyArray, {
		RetentionPolicy::SOURCE,
		RetentionPolicy::CLASS,
		RetentionPolicy::RUNTIME
	});
}

$RetentionPolicyArray* RetentionPolicy::values() {
	$init(RetentionPolicy);
	return $cast($RetentionPolicyArray, RetentionPolicy::$VALUES->clone());
}

RetentionPolicy* RetentionPolicy::valueOf($String* name) {
	$init(RetentionPolicy);
	return $cast(RetentionPolicy, $Enum::valueOf(RetentionPolicy::class$, name));
}

void RetentionPolicy::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$RetentionPolicy($Class* class$) {
	$assignStatic(RetentionPolicy::SOURCE, $new(RetentionPolicy, "SOURCE"_s, 0));
	$assignStatic(RetentionPolicy::CLASS, $new(RetentionPolicy, "CLASS"_s, 1));
	$assignStatic(RetentionPolicy::RUNTIME, $new(RetentionPolicy, "RUNTIME"_s, 2));
	$assignStatic(RetentionPolicy::$VALUES, RetentionPolicy::$values());
}

RetentionPolicy::RetentionPolicy() {
}

$Class* RetentionPolicy::load$($String* name, bool initialize) {
	$loadClass(RetentionPolicy, name, initialize, &_RetentionPolicy_ClassInfo_, clinit$RetentionPolicy, allocate$RetentionPolicy);
	return class$;
}

$Class* RetentionPolicy::class$ = nullptr;

		} // annotation
	} // lang
} // java