#include <Fields.h>
#include <jcpp.h>

#undef FINAL
#undef NON_FINAL
#undef STATIC_FINAL
#undef STATIC_NON_FINAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Object* Fields::STATIC_FINAL = nullptr;
$Object* Fields::STATIC_NON_FINAL = nullptr;

void Fields::init$() {
	$set(this, FINAL, $new($Object));
	$set(this, NON_FINAL, $new($Object));
}

$String* Fields::name() {
	return this->getClass()->getName();
}

void Fields::clinit$($Class* clazz) {
	$assignStatic(Fields::STATIC_FINAL, $new($Object));
	$assignStatic(Fields::STATIC_NON_FINAL, $new($Object));
}

Fields::Fields() {
}

$Class* Fields::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"STATIC_FINAL", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Fields, STATIC_FINAL)},
		{"STATIC_NON_FINAL", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(Fields, STATIC_NON_FINAL)},
		{"FINAL", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Fields, FINAL)},
		{"NON_FINAL", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Fields, NON_FINAL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Fields, init$, void)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Fields, name, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Fields",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Fields, name, initialize, &classInfo$$, Fields::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Fields);
	});
	return class$;
}

$Class* Fields::class$ = nullptr;