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

void Class$AnnotationData::init$($Map* annotations, $Map* declaredAnnotations, int32_t redefinedCount) {
	$set(this, annotations, annotations);
	$set(this, declaredAnnotations, declaredAnnotations);
	this->redefinedCount = redefinedCount;
}

Class$AnnotationData::Class$AnnotationData() {
}

$Class* Class$AnnotationData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"annotations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $FINAL, $field(Class$AnnotationData, annotations)},
		{"declaredAnnotations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;", $FINAL, $field(Class$AnnotationData, declaredAnnotations)},
		{"redefinedCount", "I", nullptr, $FINAL, $field(Class$AnnotationData, redefinedCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/util/Map;I)V", "(Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;Ljava/util/Map<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/annotation/Annotation;>;I)V", 0, $method(Class$AnnotationData, init$, void, $Map*, $Map*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Class$AnnotationData", "java.lang.Class", "AnnotationData", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Class$AnnotationData",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Class"
	};
	$loadClass(Class$AnnotationData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Class$AnnotationData);
	});
	return class$;
}

$Class* Class$AnnotationData::class$ = nullptr;

	} // lang
} // java