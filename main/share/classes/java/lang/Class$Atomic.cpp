#include <java/lang/Class$Atomic.h>

#include <java/lang/Class$AnnotationData.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/reflect/annotation/AnnotationType.h>
#include <jcpp.h>


using $Class$AnnotationData = ::java::lang::Class$AnnotationData;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AnnotationType = ::sun::reflect::annotation::AnnotationType;
namespace java {
	namespace lang {

$FieldInfo _Class$Atomic_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Class$Atomic, unsafe)},
	{"reflectionDataOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Class$Atomic, reflectionDataOffset)},
	{"annotationTypeOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Class$Atomic, annotationTypeOffset)},
	{"annotationDataOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Class$Atomic, annotationDataOffset)},
	{}
};

$MethodInfo _Class$Atomic_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Class$Atomic::*)()>(&Class$Atomic::init$))},
	{"casAnnotationData", "(Ljava/lang/Class;Ljava/lang/Class$AnnotationData;Ljava/lang/Class$AnnotationData;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class$AnnotationData;Ljava/lang/Class$AnnotationData;)Z", $STATIC, $method(static_cast<bool(*)($Class*,$Class$AnnotationData*,$Class$AnnotationData*)>(&Class$Atomic::casAnnotationData))},
	{"casAnnotationType", "(Ljava/lang/Class;Lsun/reflect/annotation/AnnotationType;Lsun/reflect/annotation/AnnotationType;)Z", "(Ljava/lang/Class<*>;Lsun/reflect/annotation/AnnotationType;Lsun/reflect/annotation/AnnotationType;)Z", $STATIC, $method(static_cast<bool(*)($Class*,$AnnotationType*,$AnnotationType*)>(&Class$Atomic::casAnnotationType))},
	{"casReflectionData", "(Ljava/lang/Class;Ljava/lang/ref/SoftReference;Ljava/lang/ref/SoftReference;)Z", "<T:Ljava/lang/Object;>(Ljava/lang/Class<*>;Ljava/lang/ref/SoftReference<Ljava/lang/Class$ReflectionData<TT;>;>;Ljava/lang/ref/SoftReference<Ljava/lang/Class$ReflectionData<TT;>;>;)Z", $STATIC, $method(static_cast<bool(*)($Class*,$SoftReference*,$SoftReference*)>(&Class$Atomic::casReflectionData))},
	{}
};

$InnerClassInfo _Class$Atomic_InnerClassesInfo_[] = {
	{"java.lang.Class$Atomic", "java.lang.Class", "Atomic", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Class$Atomic_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Class$Atomic",
	"java.lang.Object",
	nullptr,
	_Class$Atomic_FieldInfo_,
	_Class$Atomic_MethodInfo_,
	nullptr,
	nullptr,
	_Class$Atomic_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Class"
};

$Object* allocate$Class$Atomic($Class* clazz) {
	return $of($alloc(Class$Atomic));
}

$Unsafe* Class$Atomic::unsafe = nullptr;
int64_t Class$Atomic::reflectionDataOffset = 0;
int64_t Class$Atomic::annotationTypeOffset = 0;
int64_t Class$Atomic::annotationDataOffset = 0;

void Class$Atomic::init$() {
}

bool Class$Atomic::casReflectionData($Class* clazz, $SoftReference* oldData, $SoftReference* newData) {
	Object** mem = (Object**)(&clazz->reflectionData$);
	return ObjectManager::compareAndSetReference($of(clazz), mem, oldData, newData);
}

bool Class$Atomic::casAnnotationType($Class* clazz, $AnnotationType* oldType, $AnnotationType* newType) {
	Object** mem = (Object**)(&clazz->annotationType);
	return ObjectManager::compareAndSetReference($of(clazz), mem, oldType, newType);
}

bool Class$Atomic::casAnnotationData($Class* clazz, $Class$AnnotationData* oldData, $Class$AnnotationData* newData) {
	Object** mem = (Object**)(&clazz->annotationData$);
	return ObjectManager::compareAndSetReference($of(clazz), mem, oldData, newData);
}

void clinit$Class$Atomic($Class* class$) {
	$assignStatic(Class$Atomic::unsafe, $Unsafe::getUnsafe());
	$load($Class);
	Class$Atomic::reflectionDataOffset = $nc(Class$Atomic::unsafe)->objectFieldOffset($Class::class$, "reflectionData"_s);
	Class$Atomic::annotationTypeOffset = $nc(Class$Atomic::unsafe)->objectFieldOffset($Class::class$, "annotationType"_s);
	Class$Atomic::annotationDataOffset = $nc(Class$Atomic::unsafe)->objectFieldOffset($Class::class$, "annotationData"_s);
}

Class$Atomic::Class$Atomic() {
}

$Class* Class$Atomic::load$($String* name, bool initialize) {
	$loadClass(Class$Atomic, name, initialize, &_Class$Atomic_ClassInfo_, clinit$Class$Atomic, allocate$Class$Atomic);
	return class$;
}

$Class* Class$Atomic::class$ = nullptr;

	} // lang
} // java