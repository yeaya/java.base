#include <sun/reflect/misc/ConstructorUtil.h>

#include <java/lang/reflect/Constructor.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace sun {
	namespace reflect {
		namespace misc {

$MethodInfo _ConstructorUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ConstructorUtil, init$, void)},
	{"getConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/reflect/Constructor;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Constructor<*>;", $PUBLIC | $STATIC, $staticMethod(ConstructorUtil, getConstructor, $Constructor*, $Class*, $ClassArray*), "java.lang.NoSuchMethodException"},
	{"getConstructors", "(Ljava/lang/Class;)[Ljava/lang/reflect/Constructor;", "(Ljava/lang/Class<*>;)[Ljava/lang/reflect/Constructor<*>;", $PUBLIC | $STATIC, $staticMethod(ConstructorUtil, getConstructors, $ConstructorArray*, $Class*)},
	{}
};

$ClassInfo _ConstructorUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.reflect.misc.ConstructorUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ConstructorUtil_MethodInfo_
};

$Object* allocate$ConstructorUtil($Class* clazz) {
	return $of($alloc(ConstructorUtil));
}

void ConstructorUtil::init$() {
}

$Constructor* ConstructorUtil::getConstructor($Class* cls, $ClassArray* params) {
	$load(ConstructorUtil);
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(cls);
	return $nc(cls)->getConstructor(params);
}

$ConstructorArray* ConstructorUtil::getConstructors($Class* cls) {
	$load(ConstructorUtil);
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(cls);
	return $nc(cls)->getConstructors();
}

ConstructorUtil::ConstructorUtil() {
}

$Class* ConstructorUtil::load$($String* name, bool initialize) {
	$loadClass(ConstructorUtil, name, initialize, &_ConstructorUtil_ClassInfo_, allocate$ConstructorUtil);
	return class$;
}

$Class* ConstructorUtil::class$ = nullptr;

		} // misc
	} // reflect
} // sun