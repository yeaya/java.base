#include <java/lang/Class$AnnotationData.h>

#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace java {
	namespace lang {

$FieldInfo _Class$AnnotationData_FieldInfo_[] = {
	{"annotations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $FINAL, $field(Class$AnnotationData, annotations)},
	{"declaredAnnotations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $FINAL, $field(Class$AnnotationData, declaredAnnotations)},
	{"redefinedCount", "I", nullptr, $FINAL, $field(Class$AnnotationData, redefinedCount)},
	{}
};

$MethodInfo _Class$AnnotationData_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;Ljava/util/Map;I)V", "(Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;I)V", 0, $method(static_cast<void(Class$AnnotationData::*)($Map*,$Map*,int32_t)>(&Class$AnnotationData::init$))},
	{}
};

$InnerClassInfo _Class$AnnotationData_InnerClassesInfo_[] = {
	{"java.lang.Class$AnnotationData", "java.lang.Class", "AnnotationData", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Class$AnnotationData_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Class$AnnotationData",
	"java.lang.Object",
	nullptr,
	_Class$AnnotationData_FieldInfo_,
	_Class$AnnotationData_MethodInfo_,
	nullptr,
	nullptr,
	_Class$AnnotationData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Class"
};

$Object* allocate$Class$AnnotationData($Class* clazz) {
	return $of($alloc(Class$AnnotationData));
}

void Class$AnnotationData::init$($Map* annotations, $Map* declaredAnnotations, int32_t redefinedCount) {
	$set(this, annotations, annotations);
	$set(this, declaredAnnotations, declaredAnnotations);
	this->redefinedCount = redefinedCount;
}

Class$AnnotationData::Class$AnnotationData() {
}

$Class* Class$AnnotationData::load$($String* name, bool initialize) {
	$loadClass(Class$AnnotationData, name, initialize, &_Class$AnnotationData_ClassInfo_, allocate$Class$AnnotationData);
	return class$;
}

$Class* Class$AnnotationData::class$ = nullptr;

	} // lang
} // java