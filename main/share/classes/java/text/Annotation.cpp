#include <java/text/Annotation.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Annotation::*)(Object$*)>(&Annotation::init$))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
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