#include <sun/reflect/annotation/AnnotationInvocationHandler$UnsafeAccessor.h>

#include <java/util/Map.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/reflect/annotation/AnnotationInvocationHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AnnotationInvocationHandler = ::sun::reflect::annotation::AnnotationInvocationHandler;

namespace sun {
	namespace reflect {
		namespace annotation {

$FieldInfo _AnnotationInvocationHandler$UnsafeAccessor_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnnotationInvocationHandler$UnsafeAccessor, unsafe)},
	{"typeOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnnotationInvocationHandler$UnsafeAccessor, typeOffset)},
	{"memberValuesOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnnotationInvocationHandler$UnsafeAccessor, memberValuesOffset)},
	{}
};

$MethodInfo _AnnotationInvocationHandler$UnsafeAccessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AnnotationInvocationHandler$UnsafeAccessor::*)()>(&AnnotationInvocationHandler$UnsafeAccessor::init$))},
	{"setMemberValues", "(Lsun/reflect/annotation/AnnotationInvocationHandler;Ljava/util/Map;)V", "(Lsun/reflect/annotation/AnnotationInvocationHandler;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $STATIC, $method(static_cast<void(*)($AnnotationInvocationHandler*,$Map*)>(&AnnotationInvocationHandler$UnsafeAccessor::setMemberValues))},
	{"setType", "(Lsun/reflect/annotation/AnnotationInvocationHandler;Ljava/lang/Class;)V", "(Lsun/reflect/annotation/AnnotationInvocationHandler;Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)V", $STATIC, $method(static_cast<void(*)($AnnotationInvocationHandler*,$Class*)>(&AnnotationInvocationHandler$UnsafeAccessor::setType))},
	{}
};

$InnerClassInfo _AnnotationInvocationHandler$UnsafeAccessor_InnerClassesInfo_[] = {
	{"sun.reflect.annotation.AnnotationInvocationHandler$UnsafeAccessor", "sun.reflect.annotation.AnnotationInvocationHandler", "UnsafeAccessor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AnnotationInvocationHandler$UnsafeAccessor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.reflect.annotation.AnnotationInvocationHandler$UnsafeAccessor",
	"java.lang.Object",
	nullptr,
	_AnnotationInvocationHandler$UnsafeAccessor_FieldInfo_,
	_AnnotationInvocationHandler$UnsafeAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationInvocationHandler$UnsafeAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.annotation.AnnotationInvocationHandler"
};

$Object* allocate$AnnotationInvocationHandler$UnsafeAccessor($Class* clazz) {
	return $of($alloc(AnnotationInvocationHandler$UnsafeAccessor));
}

$Unsafe* AnnotationInvocationHandler$UnsafeAccessor::unsafe = nullptr;
int64_t AnnotationInvocationHandler$UnsafeAccessor::typeOffset = 0;
int64_t AnnotationInvocationHandler$UnsafeAccessor::memberValuesOffset = 0;

void AnnotationInvocationHandler$UnsafeAccessor::init$() {
}

void AnnotationInvocationHandler$UnsafeAccessor::setType($AnnotationInvocationHandler* o, $Class* type) {
	$init(AnnotationInvocationHandler$UnsafeAccessor);
	$nc(AnnotationInvocationHandler$UnsafeAccessor::unsafe)->putReference(o, AnnotationInvocationHandler$UnsafeAccessor::typeOffset, type);
}

void AnnotationInvocationHandler$UnsafeAccessor::setMemberValues($AnnotationInvocationHandler* o, $Map* memberValues) {
	$init(AnnotationInvocationHandler$UnsafeAccessor);
	$nc(AnnotationInvocationHandler$UnsafeAccessor::unsafe)->putReference(o, AnnotationInvocationHandler$UnsafeAccessor::memberValuesOffset, memberValues);
}

void clinit$AnnotationInvocationHandler$UnsafeAccessor($Class* class$) {
	$assignStatic(AnnotationInvocationHandler$UnsafeAccessor::unsafe, $Unsafe::getUnsafe());
	$load($AnnotationInvocationHandler);
	AnnotationInvocationHandler$UnsafeAccessor::typeOffset = $nc(AnnotationInvocationHandler$UnsafeAccessor::unsafe)->objectFieldOffset($AnnotationInvocationHandler::class$, "type"_s);
	AnnotationInvocationHandler$UnsafeAccessor::memberValuesOffset = $nc(AnnotationInvocationHandler$UnsafeAccessor::unsafe)->objectFieldOffset($AnnotationInvocationHandler::class$, "memberValues"_s);
}

AnnotationInvocationHandler$UnsafeAccessor::AnnotationInvocationHandler$UnsafeAccessor() {
}

$Class* AnnotationInvocationHandler$UnsafeAccessor::load$($String* name, bool initialize) {
	$loadClass(AnnotationInvocationHandler$UnsafeAccessor, name, initialize, &_AnnotationInvocationHandler$UnsafeAccessor_ClassInfo_, clinit$AnnotationInvocationHandler$UnsafeAccessor, allocate$AnnotationInvocationHandler$UnsafeAccessor);
	return class$;
}

$Class* AnnotationInvocationHandler$UnsafeAccessor::class$ = nullptr;

		} // annotation
	} // reflect
} // sun