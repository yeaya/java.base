#include <jdk/internal/access/JavaLangReflectAccess.h>

#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/reflect/ConstructorAccessor.h>
#include <jdk/internal/reflect/MethodAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaLangReflectAccess_MethodInfo_[] = {
	{"copyConstructor", "(Ljava/lang/reflect/Constructor;)Ljava/lang/reflect/Constructor;", "<T:Ljava/lang/Object;>(Ljava/lang/reflect/Constructor<TT;>;)Ljava/lang/reflect/Constructor<TT;>;", $PUBLIC | $ABSTRACT},
	{"copyField", "(Ljava/lang/reflect/Field;)Ljava/lang/reflect/Field;", nullptr, $PUBLIC | $ABSTRACT},
	{"copyMethod", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $ABSTRACT},
	{"getConstructorAccessor", "(Ljava/lang/reflect/Constructor;)Ljdk/internal/reflect/ConstructorAccessor;", "(Ljava/lang/reflect/Constructor<*>;)Ljdk/internal/reflect/ConstructorAccessor;", $PUBLIC | $ABSTRACT},
	{"getConstructorAnnotations", "(Ljava/lang/reflect/Constructor;)[B", "(Ljava/lang/reflect/Constructor<*>;)[B", $PUBLIC | $ABSTRACT},
	{"getConstructorParameterAnnotations", "(Ljava/lang/reflect/Constructor;)[B", "(Ljava/lang/reflect/Constructor<*>;)[B", $PUBLIC | $ABSTRACT},
	{"getConstructorSignature", "(Ljava/lang/reflect/Constructor;)Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)Ljava/lang/String;", $PUBLIC | $ABSTRACT},
	{"getConstructorSlot", "(Ljava/lang/reflect/Constructor;)I", "(Ljava/lang/reflect/Constructor<*>;)I", $PUBLIC | $ABSTRACT},
	{"getExecutableSharedParameterTypes", "(Ljava/lang/reflect/Executable;)[Ljava/lang/Class;", "(Ljava/lang/reflect/Executable;)[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"getExecutableTypeAnnotationBytes", "(Ljava/lang/reflect/Executable;)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getMethodAccessor", "(Ljava/lang/reflect/Method;)Ljdk/internal/reflect/MethodAccessor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRoot", "(Ljava/lang/reflect/AccessibleObject;)Ljava/lang/reflect/AccessibleObject;", "<T:Ljava/lang/reflect/AccessibleObject;>(TT;)TT;", $PUBLIC | $ABSTRACT},
	{"isTrustedFinalField", "(Ljava/lang/reflect/Field;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"leafCopyMethod", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $ABSTRACT},
	{"newConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;[Ljava/lang/Class;IILjava/lang/String;[B[B)Ljava/lang/reflect/Constructor;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;[Ljava/lang/Class<*>;[Ljava/lang/Class<*>;IILjava/lang/String;[B[B)Ljava/lang/reflect/Constructor<TT;>;", $PUBLIC | $ABSTRACT},
	{"newInstance", "(Ljava/lang/reflect/Constructor;[Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/reflect/Constructor<TT;>;[Ljava/lang/Object;Ljava/lang/Class<*>;)TT;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
	{"setConstructorAccessor", "(Ljava/lang/reflect/Constructor;Ljdk/internal/reflect/ConstructorAccessor;)V", "(Ljava/lang/reflect/Constructor<*>;Ljdk/internal/reflect/ConstructorAccessor;)V", $PUBLIC | $ABSTRACT},
	{"setMethodAccessor", "(Ljava/lang/reflect/Method;Ljdk/internal/reflect/MethodAccessor;)V", nullptr, $PUBLIC | $ABSTRACT},
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