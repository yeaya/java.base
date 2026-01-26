#include <a/PublicSuper.h>

#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;

namespace a {

$FieldInfo _PublicSuper_FieldInfo_[] = {
	{"privateStatic", "I", nullptr, $PRIVATE | $STATIC, $staticField(PublicSuper, privateStatic$)},
	{"privateInstance", "I", nullptr, $PRIVATE, $field(PublicSuper, privateInstance$)},
	{"packageStatic", "I", nullptr, $STATIC, $staticField(PublicSuper, packageStatic$)},
	{"packageInstance", "I", nullptr, 0, $field(PublicSuper, packageInstance$)},
	{"protectedStatic", "I", nullptr, $PROTECTED | $STATIC, $staticField(PublicSuper, protectedStatic$)},
	{"protectedInstance", "I", nullptr, $PROTECTED, $field(PublicSuper, protectedInstance$)},
	{"publicStatic", "I", nullptr, $PUBLIC | $STATIC, $staticField(PublicSuper, publicStatic$)},
	{"publicInstance", "I", nullptr, $PUBLIC, $field(PublicSuper, publicInstance$)},
	{}
};

$MethodInfo _PublicSuper_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Void;Ljava/lang/Void;Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(PublicSuper, init$, void, $Void*, $Void*, $Void*)},
	{"<init>", "(Ljava/lang/Void;Ljava/lang/Void;)V", nullptr, 0, $method(PublicSuper, init$, void, $Void*, $Void*)},
	{"<init>", "(Ljava/lang/Void;)V", nullptr, $PROTECTED, $method(PublicSuper, init$, void, $Void*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(PublicSuper, init$, void)},
	{"checkAccess", "(Ljava/lang/reflect/AccessibleObject;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PublicSuper, checkAccess, void, $AccessibleObject*, Object$*), "java.lang.IllegalAccessException,java.lang.reflect.InvocationTargetException,java.lang.InstantiationException"},
	{"packageInstance", "()I", nullptr, 0, $virtualMethod(PublicSuper, packageInstance, int32_t)},
	{"packageStatic", "()I", nullptr, $STATIC, $staticMethod(PublicSuper, packageStatic, int32_t)},
	{"privateInstance", "()I", nullptr, $PRIVATE, $method(PublicSuper, privateInstance, int32_t)},
	{"privateStatic", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(PublicSuper, privateStatic, int32_t)},
	{"protectedInstance", "()I", nullptr, $PROTECTED, $virtualMethod(PublicSuper, protectedInstance, int32_t)},
	{"protectedStatic", "()I", nullptr, $PROTECTED | $STATIC, $staticMethod(PublicSuper, protectedStatic, int32_t)},
	{"publicInstance", "()I", nullptr, $PUBLIC, $virtualMethod(PublicSuper, publicInstance, int32_t)},
	{"publicStatic", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(PublicSuper, publicStatic, int32_t)},
	{}
};

$ClassInfo _PublicSuper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"a.PublicSuper",
	"java.lang.Object",
	nullptr,
	_PublicSuper_FieldInfo_,
	_PublicSuper_MethodInfo_
};

$Object* allocate$PublicSuper($Class* clazz) {
	return $of($alloc(PublicSuper));
}

int32_t PublicSuper::privateStatic$ = 0;
int32_t PublicSuper::packageStatic$ = 0;
int32_t PublicSuper::protectedStatic$ = 0;
int32_t PublicSuper::publicStatic$ = 0;

int32_t PublicSuper::privateStatic() {
	return 42;
}

int32_t PublicSuper::privateInstance() {
	return 42;
}

int32_t PublicSuper::packageStatic() {
	return 42;
}

int32_t PublicSuper::packageInstance() {
	return 42;
}

int32_t PublicSuper::protectedStatic() {
	return 42;
}

int32_t PublicSuper::protectedInstance() {
	return 42;
}

int32_t PublicSuper::publicStatic() {
	return 42;
}

int32_t PublicSuper::publicInstance() {
	return 42;
}

void PublicSuper::init$($Void* _1, $Void* _2, $Void* _3) {
}

void PublicSuper::init$($Void* _1, $Void* _2) {
}

void PublicSuper::init$($Void* _1) {
}

void PublicSuper::init$() {
}

void PublicSuper::checkAccess($AccessibleObject* accessibleObject, Object$* obj) {
	$load(PublicSuper);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($instanceOf($Field, accessibleObject)) {
		$var($Field, field, $cast($Field, accessibleObject));
		$nc(field)->set(obj, $($Integer::valueOf(42)));
		field->get(obj);
	} else if ($instanceOf($Method, accessibleObject)) {
		$var($Method, method, $cast($Method, accessibleObject));
		$nc(method)->invoke(obj, $$new($ObjectArray, 0));
	} else if ($instanceOf($Constructor, accessibleObject)) {
		$var($Constructor, constructor, $cast($Constructor, accessibleObject));
		$var($ObjectArray, params, $new($ObjectArray, $nc(constructor)->getParameterCount()));
		constructor->newInstance(params);
	}
}

PublicSuper::PublicSuper() {
}

$Class* PublicSuper::load$($String* name, bool initialize) {
	$loadClass(PublicSuper, name, initialize, &_PublicSuper_ClassInfo_, allocate$PublicSuper);
	return class$;
}

$Class* PublicSuper::class$ = nullptr;

} // a