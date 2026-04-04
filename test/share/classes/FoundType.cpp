#include <FoundType.h>
#include <java/lang/Error.h>
#include <java/lang/annotation/AnnotationTypeMismatchException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationTypeMismatchException = ::java::lang::annotation::AnnotationTypeMismatchException;
using $Method = ::java::lang::reflect::Method;

$String* FoundType::TYPE = nullptr;

void FoundType::init$() {
}

void FoundType::main($StringArray* args) {
	$init(FoundType);
	$useLocalObjectStack();
	$var($AnnotationTypeMismatchException, ex, $new($AnnotationTypeMismatchException, nullptr, FoundType::TYPE));
	if (!FoundType::TYPE->equals($(ex->foundType()))) {
		$throwNew($Error);
	}
}

FoundType::FoundType() {
}

void FoundType::clinit$($Class* clazz) {
	$assignStatic(FoundType::TYPE, "a.halting.Problem"_s);
}

$Class* FoundType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FoundType, TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FoundType, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FoundType, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FoundType",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FoundType, name, initialize, &classInfo$$, FoundType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FoundType);
	});
	return class$;
}

$Class* FoundType::class$ = nullptr;