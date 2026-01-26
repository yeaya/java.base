#include <b/Package.h>

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

namespace b {

$FieldInfo _Package_FieldInfo_[] = {
	{"privateStatic", "I", nullptr, $PRIVATE | $STATIC, $staticField(Package, privateStatic$)},
	{"privateInstance", "I", nullptr, $PRIVATE, $field(Package, privateInstance$)},
	{"packageStatic", "I", nullptr, $STATIC, $staticField(Package, packageStatic$)},
	{"packageInstance", "I", nullptr, 0, $field(Package, packageInstance$)},
	{"protectedStatic", "I", nullptr, $PROTECTED | $STATIC, $staticField(Package, protectedStatic$)},
	{"protectedInstance", "I", nullptr, $PROTECTED, $field(Package, protectedInstance$)},
	{"publicStatic", "I", nullptr, $PUBLIC | $STATIC, $staticField(Package, publicStatic$)},
	{"publicInstance", "I", nullptr, $PUBLIC, $field(Package, publicInstance$)},
	{}
};

$MethodInfo _Package_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Void;Ljava/lang/Void;Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(Package, init$, void, $Void*, $Void*, $Void*)},
	{"<init>", "(Ljava/lang/Void;Ljava/lang/Void;)V", nullptr, 0, $method(Package, init$, void, $Void*, $Void*)},
	{"<init>", "(Ljava/lang/Void;)V", nullptr, $PROTECTED, $method(Package, init$, void, $Void*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(Package, init$, void)},
	{"checkAccess", "(Ljava/lang/reflect/AccessibleObject;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Package, checkAccess, void, $AccessibleObject*, Object$*), "java.lang.IllegalAccessException,java.lang.reflect.InvocationTargetException,java.lang.InstantiationException"},
	{"packageInstance", "()I", nullptr, 0, $virtualMethod(Package, packageInstance, int32_t)},
	{"packageStatic", "()I", nullptr, $STATIC, $staticMethod(Package, packageStatic, int32_t)},
	{"privateInstance", "()I", nullptr, $PRIVATE, $method(Package, privateInstance, int32_t)},
	{"privateStatic", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(Package, privateStatic, int32_t)},
	{"protectedInstance", "()I", nullptr, $PROTECTED, $virtualMethod(Package, protectedInstance, int32_t)},
	{"protectedStatic", "()I", nullptr, $PROTECTED | $STATIC, $staticMethod(Package, protectedStatic, int32_t)},
	{"publicInstance", "()I", nullptr, $PUBLIC, $virtualMethod(Package, publicInstance, int32_t)},
	{"publicStatic", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Package, publicStatic, int32_t)},
	{}
};

$ClassInfo _Package_ClassInfo_ = {
	$ACC_SUPER,
	"b.Package",
	"java.lang.Object",
	nullptr,
	_Package_FieldInfo_,
	_Package_MethodInfo_
};

$Object* allocate$Package($Class* clazz) {
	return $of($alloc(Package));
}

int32_t Package::privateStatic$ = 0;
int32_t Package::packageStatic$ = 0;
int32_t Package::protectedStatic$ = 0;
int32_t Package::publicStatic$ = 0;

int32_t Package::privateStatic() {
	return 42;
}

int32_t Package::privateInstance() {
	return 42;
}

int32_t Package::packageStatic() {
	return 42;
}

int32_t Package::packageInstance() {
	return 42;
}

int32_t Package::protectedStatic() {
	return 42;
}

int32_t Package::protectedInstance() {
	return 42;
}

int32_t Package::publicStatic() {
	return 42;
}

int32_t Package::publicInstance() {
	return 42;
}

void Package::init$($Void* _1, $Void* _2, $Void* _3) {
}

void Package::init$($Void* _1, $Void* _2) {
}

void Package::init$($Void* _1) {
}

void Package::init$() {
}

void Package::checkAccess($AccessibleObject* accessibleObject, Object$* obj) {
	$load(Package);
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

Package::Package() {
}

$Class* Package::load$($String* name, bool initialize) {
	$loadClass(Package, name, initialize, &_Package_ClassInfo_, allocate$Package);
	return class$;
}

$Class* Package::class$ = nullptr;

} // b