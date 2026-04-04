#include <java/text/Annotation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

void Annotation::init$(Object$* value) {
	$set(this, value, value);
}

$Object* Annotation::getValue() {
	return this->value;
}

$String* Annotation::toString() {
	return $str({$($of(this)->getClass()->getName()), "[value="_s, this->value, "]"_s});
}

Annotation::Annotation() {
}

$Class* Annotation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Annotation, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Annotation, init$, void, Object$*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Annotation, getValue, $Object*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Annotation, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.text.Annotation",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Annotation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Annotation);
	});
	return class$;
}

$Class* Annotation::class$ = nullptr;

	} // text
} // java