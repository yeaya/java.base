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

void RetentionPolicy::clinit$($Class* clazz) {
	$assignStatic(RetentionPolicy::SOURCE, $new(RetentionPolicy, "SOURCE"_s, 0));
	$assignStatic(RetentionPolicy::CLASS, $new(RetentionPolicy, "CLASS"_s, 1));
	$assignStatic(RetentionPolicy::RUNTIME, $new(RetentionPolicy, "RUNTIME"_s, 2));
	$assignStatic(RetentionPolicy::$VALUES, RetentionPolicy::$values());
}

RetentionPolicy::RetentionPolicy() {
}

$Class* RetentionPolicy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SOURCE", "Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RetentionPolicy, SOURCE)},
		{"CLASS", "Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RetentionPolicy, CLASS)},
		{"RUNTIME", "Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RetentionPolicy, RUNTIME)},
		{"$VALUES", "[Ljava/lang/annotation/RetentionPolicy;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RetentionPolicy, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/lang/annotation/RetentionPolicy;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RetentionPolicy, $values, $RetentionPolicyArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(RetentionPolicy, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $STATIC, $staticMethod(RetentionPolicy, valueOf, RetentionPolicy*, $String*)},
		{"values", "()[Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC | $STATIC, $staticMethod(RetentionPolicy, values, $RetentionPolicyArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.lang.annotation.RetentionPolicy",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/lang/annotation/RetentionPolicy;>;"
	};
	$loadClass(RetentionPolicy, name, initialize, &classInfo$$, RetentionPolicy::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(RetentionPolicy));
	});
	return class$;
}

$Class* RetentionPolicy::class$ = nullptr;

		} // annotation
	} // lang
} // java