#include <java/lang/annotation/Annotation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace annotation {

bool Annotation::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t Annotation::hashCode() {
	 return this->$Object::hashCode();
}

$String* Annotation::toString() {
	 return this->$Object::toString();
}

$Class* Annotation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"annotationType", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Annotation, annotationType, $Class*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Annotation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Annotation);
	});
	return class$;
}

$Class* Annotation::class$ = nullptr;

		} // annotation
	} // lang
} // java