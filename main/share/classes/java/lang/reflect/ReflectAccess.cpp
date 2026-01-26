#include <java/lang/reflect/ReflectAccess.h>

#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/reflect/ConstructorAccessor.h>
#include <jdk/internal/reflect/MethodAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Constructor = ::java::lang::reflect::Constructor;
using $Executable = ::java::lang::reflect::Executable;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $ConstructorAccessor = ::jdk::internal::reflect::ConstructorAccessor;
using $MethodAccessor = ::jdk::internal::reflect::MethodAccessor;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _ReflectAccess_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ReflectAccess, init$, void)},
	{"copyConstructor", "(Ljava/lang/reflect/Constructor;)Ljava/lang/reflect/Constructor;", "<T:Ljava/lang/Object;>(Ljava/lang/reflect/Constructor<TT;>;)Ljava/lang/reflect/Constructor<TT;>;", $PUBLIC, $virtualMethod(ReflectAccess, copyConstructor, $Constructor*, $Constructor*)},
	{"copyField", "(Ljava/lang/reflect/Field;)Ljava/lang/reflect/Field;", nullptr, $PUBLIC, $virtualMethod(ReflectAccess, copyField, $Field*, $Field*)},
	{"copyMethod", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(ReflectAccess, copyMethod, $Method*, $Method*)},
	{"getConstructorAccessor", "(Ljava/lang/reflect/Constructor;)Ljdk/internal/reflect/ConstructorAccessor;", "(Ljava/lang/reflect/Constructor<*>;)Ljdk/internal/reflect/ConstructorAccessor;", $PUBLIC, $virtualMethod(ReflectAccess, getConstructorAccessor, $ConstructorAccessor*, $Constructor*)},
	{"getConstructorAnnotations", "(Ljava/lang/reflect/Constructor;)[B", "(Ljava/lang/reflect/Constructor<*>;)[B", $PUBLIC, $virtualMethod(ReflectAccess, getConstructorAnnotations, $bytes*, $Constructor*)},
	{"getConstructorParameterAnnotations", "(Ljava/lang/reflect/Constructor;)[B", "(Ljava/lang/reflect/Constructor<*>;)[B", $PUBLIC, $virtualMethod(ReflectAccess, getConstructorParameterAnnotations, $bytes*, $Constructor*)},
	{"getConstructorSignature", "(Ljava/lang/reflect/Constructor;)Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)Ljava/lang/String;", $PUBLIC, $virtualMethod(ReflectAccess, getConstructorSignature, $String*, $Constructor*)},
	{"getConstructorSlot", "(Ljava/lang/reflect/Constructor;)I", "(Ljava/lang/reflect/Constructor<*>;)I", $PUBLIC, $virtualMethod(ReflectAccess, getConstructorSlot, int32_t, $Constructor*)},
	{"getExecutableSharedParameterTypes", "(Ljava/lang/reflect/Executable;)[Ljava/lang/Class;", "(Ljava/lang/reflect/Executable;)[Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ReflectAccess, getExecutableSharedParameterTypes, $ClassArray*, $Executable*)},
	{"getExecutableTypeAnnotationBytes", "(Ljava/lang/reflect/Executable;)[B", nullptr, $PUBLIC, $virtualMethod(ReflectAccess, getExecutableTypeAnnotationBytes, $bytes*, $Executable*)},
	{"getMethodAccessor", "(Ljava/lang/reflect/Method;)Ljdk/internal/reflect/MethodAccessor;", nullptr, $PUBLIC, $virtualMethod(ReflectAccess, getMethodAccessor, $MethodAccessor*, $Method*)},
	{"getRoot", "(Ljava/lang/reflect/AccessibleObject;)Ljava/lang/reflect/AccessibleObject;", "<T:Ljava/lang/reflect/AccessibleObject;>(TT;)TT;", $PUBLIC, $virtualMethod(ReflectAccess, getRoot, $AccessibleObject*, $AccessibleObject*)},
	{"isTrustedFinalField", "(Ljava/lang/reflect/Field;)Z", nullptr, $PUBLIC, $virtualMethod(ReflectAccess, isTrustedFinalField, bool, $Field*)},
	{"leafCopyMethod", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(ReflectAccess, leafCopyMethod, $Method*, $Method*)},
	{"newConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;[Ljava/lang/Class;IILjava/lang/String;[B[B)Ljava/lang/reflect/Constructor;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;[Ljava/lang/Class<*>;[Ljava/lang/Class<*>;IILjava/lang/String;[B[B)Ljava/lang/reflect/Constructor<TT;>;", $PUBLIC, $virtualMethod(ReflectAccess, newConstructor, $Constructor*, $Class*, $ClassArray*, $ClassArray*, int32_t, int32_t, $String*, $bytes*, $bytes*)},
	{"newInstance", "(Ljava/lang/reflect/Constructor;[Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/reflect/Constructor<TT;>;[Ljava/lang/Object;Ljava/lang/Class<*>;)TT;", $PUBLIC, $virtualMethod(ReflectAccess, newInstance, $Object*, $Constructor*, $ObjectArray*, $Class*), "java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
	{"setConstructorAccessor", "(Ljava/lang/reflect/Constructor;Ljdk/internal/reflect/ConstructorAccessor;)V", "(Ljava/lang/reflect/Constructor<*>;Ljdk/internal/reflect/ConstructorAccessor;)V", $PUBLIC, $virtualMethod(ReflectAccess, setConstructorAccessor, void, $Constructor*, $ConstructorAccessor*)},
	{"setMethodAccessor", "(Ljava/lang/reflect/Method;Ljdk/internal/reflect/MethodAccessor;)V", nullptr, $PUBLIC, $virtualMethod(ReflectAccess, setMethodAccessor, void, $Method*, $MethodAccessor*)},
	{}
};

$ClassInfo _ReflectAccess_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.reflect.ReflectAccess",
	"java.lang.Object",
	"jdk.internal.access.JavaLangReflectAccess",
	nullptr,
	_ReflectAccess_MethodInfo_
};

$Object* allocate$ReflectAccess($Class* clazz) {
	return $of($alloc(ReflectAccess));
}

void ReflectAccess::init$() {
}

$Constructor* ReflectAccess::newConstructor($Class* declaringClass, $ClassArray* parameterTypes, $ClassArray* checkedExceptions, int32_t modifiers, int32_t slot, $String* signature, $bytes* annotations, $bytes* parameterAnnotations) {
	return $new($Constructor, declaringClass, parameterTypes, checkedExceptions, modifiers, slot, signature, annotations, parameterAnnotations);
}

$MethodAccessor* ReflectAccess::getMethodAccessor($Method* m) {
	return $nc(m)->getMethodAccessor();
}

void ReflectAccess::setMethodAccessor($Method* m, $MethodAccessor* accessor) {
	$nc(m)->setMethodAccessor(accessor);
}

$ConstructorAccessor* ReflectAccess::getConstructorAccessor($Constructor* c) {
	return $nc(c)->getConstructorAccessor();
}

void ReflectAccess::setConstructorAccessor($Constructor* c, $ConstructorAccessor* accessor) {
	$nc(c)->setConstructorAccessor(accessor);
}

int32_t ReflectAccess::getConstructorSlot($Constructor* c) {
	return $nc(c)->getSlot();
}

$String* ReflectAccess::getConstructorSignature($Constructor* c) {
	return $nc(c)->getSignature();
}

$bytes* ReflectAccess::getConstructorAnnotations($Constructor* c) {
	return $nc(c)->getRawAnnotations();
}

$bytes* ReflectAccess::getConstructorParameterAnnotations($Constructor* c) {
	return $nc(c)->getRawParameterAnnotations();
}

$bytes* ReflectAccess::getExecutableTypeAnnotationBytes($Executable* ex) {
	return $nc(ex)->getTypeAnnotationBytes();
}

$ClassArray* ReflectAccess::getExecutableSharedParameterTypes($Executable* ex) {
	return $nc(ex)->getSharedParameterTypes();
}

$Method* ReflectAccess::copyMethod($Method* arg) {
	return $nc(arg)->copy();
}

$Method* ReflectAccess::leafCopyMethod($Method* arg) {
	return $nc(arg)->leafCopy();
}

$Field* ReflectAccess::copyField($Field* arg) {
	return $nc(arg)->copy();
}

$Constructor* ReflectAccess::copyConstructor($Constructor* arg) {
	return $nc(arg)->copy();
}

$AccessibleObject* ReflectAccess::getRoot($AccessibleObject* obj) {
	return $nc(obj)->getRoot();
}

bool ReflectAccess::isTrustedFinalField($Field* f) {
	return $nc(f)->isTrustedFinal();
}

$Object* ReflectAccess::newInstance($Constructor* ctor, $ObjectArray* args, $Class* caller) {
	return $of($nc(ctor)->newInstanceWithCaller(args, true, caller));
}

ReflectAccess::ReflectAccess() {
}

$Class* ReflectAccess::load$($String* name, bool initialize) {
	$loadClass(ReflectAccess, name, initialize, &_ReflectAccess_ClassInfo_, allocate$ReflectAccess);
	return class$;
}

$Class* ReflectAccess::class$ = nullptr;

		} // reflect
	} // lang
} // java