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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FieldUtil, init$, void)},
		{"getField", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Field;", $PUBLIC | $STATIC, $staticMethod(FieldUtil, getField, $Field*, $Class*, $String*), "java.lang.NoSuchFieldException"},
		{"getFields", "(Ljava/lang/Class;)[Ljava/lang/reflect/Field;", "(Ljava/lang/Class<*>;)[Ljava/lang/reflect/Field;", $PUBLIC | $STATIC, $staticMethod(FieldUtil, getFields, $FieldArray*, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.reflect.misc.FieldUtil",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FieldUtil, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FieldUtil);
	});
	return class$;
}

$Class* FieldUtil::class$ = nullptr;

		} // misc
	} // reflect
} // sun