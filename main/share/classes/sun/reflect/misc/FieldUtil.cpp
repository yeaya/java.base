#include <sun/reflect/misc/FieldUtil.h>

#include <java/lang/reflect/Field.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $FieldArray = $Array<::java::lang::reflect::Field>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace sun {
	namespace reflect {
		namespace misc {

$MethodInfo _FieldUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(FieldUtil, init$, void)},
	{"getField", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Field;", $PUBLIC | $STATIC, $staticMethod(FieldUtil, getField, $Field*, $Class*, $String*), "java.lang.NoSuchFieldException"},
	{"getFields", "(Ljava/lang/Class;)[Ljava/lang/reflect/Field;", "(Ljava/lang/Class<*>;)[Ljava/lang/reflect/Field;", $PUBLIC | $STATIC, $staticMethod(FieldUtil, getFields, $FieldArray*, $Class*)},
	{}
};

$ClassInfo _FieldUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.reflect.misc.FieldUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FieldUtil_MethodInfo_
};

$Object* allocate$FieldUtil($Class* clazz) {
	return $of($alloc(FieldUtil));
}

void FieldUtil::init$() {
}

$Field* FieldUtil::getField($Class* cls, $String* name) {
	$load(FieldUtil);
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(cls);
	return $nc(cls)->getField(name);
}

$FieldArray* FieldUtil::getFields($Class* cls) {
	$load(FieldUtil);
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(cls);
	return $nc(cls)->getFields();
}

FieldUtil::FieldUtil() {
}

$Class* FieldUtil::load$($String* name, bool initialize) {
	$loadClass(FieldUtil, name, initialize, &_FieldUtil_ClassInfo_, allocate$FieldUtil);
	return class$;
}

$Class* FieldUtil::class$ = nullptr;

		} // misc
	} // reflect
} // sun