#include <java/lang/Class$ReflectionData.h>

#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef NULL_SENTINEL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _Class$ReflectionData_FieldInfo_[] = {
	{"declaredFields", "[Ljava/lang/reflect/Field;", nullptr, $VOLATILE, $field(Class$ReflectionData, declaredFields)},
	{"publicFields", "[Ljava/lang/reflect/Field;", nullptr, $VOLATILE, $field(Class$ReflectionData, publicFields)},
	{"declaredMethods", "[Ljava/lang/reflect/Method;", nullptr, $VOLATILE, $field(Class$ReflectionData, declaredMethods)},
	{"publicMethods", "[Ljava/lang/reflect/Method;", nullptr, $VOLATILE, $field(Class$ReflectionData, publicMethods)},
	{"declaredConstructors", "[Ljava/lang/reflect/Constructor;", "[Ljava/lang/reflect/Constructor<TT;>;", $VOLATILE, $field(Class$ReflectionData, declaredConstructors)},
	{"publicConstructors", "[Ljava/lang/reflect/Constructor;", "[Ljava/lang/reflect/Constructor<TT;>;", $VOLATILE, $field(Class$ReflectionData, publicConstructors)},
	{"declaredPublicFields", "[Ljava/lang/reflect/Field;", nullptr, $VOLATILE, $field(Class$ReflectionData, declaredPublicFields)},
	{"declaredPublicMethods", "[Ljava/lang/reflect/Method;", nullptr, $VOLATILE, $field(Class$ReflectionData, declaredPublicMethods)},
	{"interfaces", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $VOLATILE, $field(Class$ReflectionData, interfaces)},
	{"simpleName", "Ljava/lang/String;", nullptr, 0, $field(Class$ReflectionData, simpleName)},
	{"canonicalName", "Ljava/lang/String;", nullptr, 0, $field(Class$ReflectionData, canonicalName)},
	{"NULL_SENTINEL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Class$ReflectionData, NULL_SENTINEL)},
	{"redefinedCount", "I", nullptr, $FINAL, $field(Class$ReflectionData, redefinedCount)},
	{"constantPool", "[Ljdk/internal/reflect/ConstantPool;", nullptr, 2, $field(Class$ReflectionData, constantPool)},
	{"genericSignature", "Ljava/lang/String;", nullptr, 2, $field(Class$ReflectionData, genericSignature)},
	{"declaredClasses", "[Ljava/lang/Class;", nullptr, 2, $field(Class$ReflectionData, declaredClasses)},
	{"enclosingMethod", "[Ljava/lang/Object;", nullptr, 2, $field(Class$ReflectionData, enclosingMethod)},
	{"nestMembers", "[Ljava/lang/Object;", nullptr, 2, $field(Class$ReflectionData, nestMembers)},
	{}
};

$MethodInfo _Class$ReflectionData_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(Class$ReflectionData::*)(int32_t)>(&Class$ReflectionData::init$))},
	{}
};

$InnerClassInfo _Class$ReflectionData_InnerClassesInfo_[] = {
	{"java.lang.Class$ReflectionData", "java.lang.Class", "ReflectionData", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Class$ReflectionData_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Class$ReflectionData",
	"java.lang.Object",
	nullptr,
	_Class$ReflectionData_FieldInfo_,
	_Class$ReflectionData_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Class$ReflectionData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Class"
};

$Object* allocate$Class$ReflectionData($Class* clazz) {
	return $of($alloc(Class$ReflectionData));
}

$String* Class$ReflectionData::NULL_SENTINEL = nullptr;

void Class$ReflectionData::init$(int32_t redefinedCount) {
	this->redefinedCount = redefinedCount;
}

void clinit$Class$ReflectionData($Class* class$) {
	$assignStatic(Class$ReflectionData::NULL_SENTINEL, $new($String));
}

Class$ReflectionData::Class$ReflectionData() {
}

$Class* Class$ReflectionData::load$($String* name, bool initialize) {
	$loadClass(Class$ReflectionData, name, initialize, &_Class$ReflectionData_ClassInfo_, clinit$Class$ReflectionData, allocate$Class$ReflectionData);
	return class$;
}

$Class* Class$ReflectionData::class$ = nullptr;

	} // lang
} // java