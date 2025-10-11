#include <a/Package.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
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
	{"<init>", "(Ljava/lang/Void;Ljava/lang/Void;Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(static_cast<void(Package::*)($Void*,$Void*,$Void*)>(&Package::init$))},
	{"<init>", "(Ljava/lang/Void;Ljava/lang/Void;)V", nullptr, 0, $method(static_cast<void(Package::*)($Void*,$Void*)>(&Package::init$))},
	{"<init>", "(Ljava/lang/Void;)V", nullptr, $PROTECTED, $method(static_cast<void(Package::*)($Void*)>(&Package::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Package::*)()>(&Package::init$))},
	{"checkAccess", "(Ljava/lang/reflect/AccessibleObject;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AccessibleObject*,Object$*)>(&Package::checkAccess)), "java.lang.IllegalAccessException,java.lang.reflect.InvocationTargetException,java.lang.InstantiationException"},
	{"packageInstance", "()I", nullptr, 0},
	{"packageStatic", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Package::packageStatic))},
	{"privateInstance", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(Package::*)()>(&Package::privateInstance))},
	{"privateStatic", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&Package::privateStatic))},
	{"protectedInstance", "()I", nullptr, $PROTECTED},
	{"protectedStatic", "()I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)()>(&Package::protectedStatic))},
	{"publicInstance", "()I", nullptr, $PUBLIC},
	{"publicStatic", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&Package::publicStatic))},
	{}
};

$ClassInfo _Package_ClassInfo_ = {
	$ACC_SUPER,
	"a.Package",
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

} // a