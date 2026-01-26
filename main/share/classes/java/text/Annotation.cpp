#include <java/text/Annotation.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

$FieldInfo _Annotation_FieldInfo_[] = {
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Annotation, value)},
	{}
};

$MethodInfo _Annotation_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Annotation, init$, void, Object$*)},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Annotation, getValue, $Object*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Annotation, toString, $String*)},
	{}
};

$ClassInfo _Annotation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.text.Annotation",
	"java.lang.Object",
	nullptr,
	_Annotation_FieldInfo_,
	_Annotation_MethodInfo_
};

$Object* allocate$Annotation($Class* clazz) {
	return $of($alloc(Annotation));
}

void Annotation::init$(Object$* value) {
	$set(this, value, value);
}

$Object* Annotation::getValue() {
	return $of(this->value);
}

$String* Annotation::toString() {
	return $str({$($of(this)->getClass()->getName()), "[value="_s, this->value, "]"_s});
}

Annotation::Annotation() {
}

$Class* Annotation::load$($String* name, bool initialize) {
	$loadClass(Annotation, name, initialize, &_Annotation_ClassInfo_, allocate$Annotation);
	return class$;
}

$Class* Annotation::class$ = nullptr;

	} // text
} // java