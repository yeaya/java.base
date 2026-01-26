#include <jdk/internal/access/JavaLangReflectAccess.h>

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

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaLangReflectAccess_MethodInfo_[] = {
	{"copyConstructor", "(Ljava/lang/reflect/Constructor;)Ljava/lang/reflect/Constructor;", "<T:Ljava/lang/Object;>(Ljava/lang/reflect/Constructor<TT;>;)Ljava/lang/reflect/Constructor<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, copyConstructor, $Constructor*, $Constructor*)},
	{"copyField", "(Ljava/lang/reflect/Field;)Ljava/lang/reflect/Field;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, copyField, $Field*, $Field*)},
	{"copyMethod", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, copyMethod, $Method*, $Method*)},
	{"getConstructorAccessor", "(Ljava/lang/reflect/Constructor;)Ljdk/internal/reflect/ConstructorAccessor;", "(Ljava/lang/reflect/Constructor<*>;)Ljdk/internal/reflect/ConstructorAccessor;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, getConstructorAccessor, $ConstructorAccessor*, $Constructor*)},
	{"getConstructorAnnotations", "(Ljava/lang/reflect/Constructor;)[B", "(Ljava/lang/reflect/Constructor<*>;)[B", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, getConstructorAnnotations, $bytes*, $Constructor*)},
	{"getConstructorParameterAnnotations", "(Ljava/lang/reflect/Constructor;)[B", "(Ljava/lang/reflect/Constructor<*>;)[B", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, getConstructorParameterAnnotations, $bytes*, $Constructor*)},
	{"getConstructorSignature", "(Ljava/lang/reflect/Constructor;)Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)Ljava/lang/String;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, getConstructorSignature, $String*, $Constructor*)},
	{"getConstructorSlot", "(Ljava/lang/reflect/Constructor;)I", "(Ljava/lang/reflect/Constructor<*>;)I", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, getConstructorSlot, int32_t, $Constructor*)},
	{"getExecutableSharedParameterTypes", "(Ljava/lang/reflect/Executable;)[Ljava/lang/Class;", "(Ljava/lang/reflect/Executable;)[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, getExecutableSharedParameterTypes, $ClassArray*, $Executable*)},
	{"getExecutableTypeAnnotationBytes", "(Ljava/lang/reflect/Executable;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, getExecutableTypeAnnotationBytes, $bytes*, $Executable*)},
	{"getMethodAccessor", "(Ljava/lang/reflect/Method;)Ljdk/internal/reflect/MethodAccessor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, getMethodAccessor, $MethodAccessor*, $Method*)},
	{"getRoot", "(Ljava/lang/reflect/AccessibleObject;)Ljava/lang/reflect/AccessibleObject;", "<T:Ljava/lang/reflect/AccessibleObject;>(TT;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, getRoot, $AccessibleObject*, $AccessibleObject*)},
	{"isTrustedFinalField", "(Ljava/lang/reflect/Field;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, isTrustedFinalField, bool, $Field*)},
	{"leafCopyMethod", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, leafCopyMethod, $Method*, $Method*)},
	{"newConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;[Ljava/lang/Class;IILjava/lang/String;[B[B)Ljava/lang/reflect/Constructor;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;[Ljava/lang/Class<*>;[Ljava/lang/Class<*>;IILjava/lang/String;[B[B)Ljava/lang/reflect/Constructor<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, newConstructor, $Constructor*, $Class*, $ClassArray*, $ClassArray*, int32_t, int32_t, $String*, $bytes*, $bytes*)},
	{"newInstance", "(Ljava/lang/reflect/Constructor;[Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/reflect/Constructor<TT;>;[Ljava/lang/Object;Ljava/lang/Class<*>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, newInstance, $Object*, $Constructor*, $ObjectArray*, $Class*), "java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
	{"setConstructorAccessor", "(Ljava/lang/reflect/Constructor;Ljdk/internal/reflect/ConstructorAccessor;)V", "(Ljava/lang/reflect/Constructor<*>;Ljdk/internal/reflect/ConstructorAccessor;)V", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, setConstructorAccessor, void, $Constructor*, $ConstructorAccessor*)},
	{"setMethodAccessor", "(Ljava/lang/reflect/Method;Ljdk/internal/reflect/MethodAccessor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangReflectAccess, setMethodAccessor, void, $Method*, $MethodAccessor*)},
	{}
};

$ClassInfo _JavaLangReflectAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaLangReflectAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaLangReflectAccess_MethodInfo_
};

$Object* allocate$JavaLangReflectAccess($Class* clazz) {
	return $of($alloc(JavaLangReflectAccess));
}

$Class* JavaLangReflectAccess::load$($String* name, bool initialize) {
	$loadClass(JavaLangReflectAccess, name, initialize, &_JavaLangReflectAccess_ClassInfo_, allocate$JavaLangReflectAccess);
	return class$;
}

$Class* JavaLangReflectAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk