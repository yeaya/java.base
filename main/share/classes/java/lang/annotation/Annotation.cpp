#include <java/lang/annotation/Annotation.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace annotation {

$MethodInfo _Annotation_MethodInfo_[] = {
	{"annotationType", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Annotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	_Annotation_MethodInfo_
};

$Object* allocate$Annotation($Class* clazz) {
	return $of($alloc(Annotation));
}

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
	$loadClass(Annotation, name, initialize, &_Annotation_ClassInfo_, allocate$Annotation);
	return class$;
}

$Class* Annotation::class$ = nullptr;

		} // annotation
	} // lang
} // java