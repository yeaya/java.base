#include <java/io/ObjectStreamClass$DeserializationConstructorsCache$Key$Impl.h>

#include <java/io/ObjectStreamClass$DeserializationConstructorsCache$Key.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectStreamClass$DeserializationConstructorsCache$Key = ::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_FieldInfo_[] = {
	{"next", "Ljava/io/ObjectStreamClass$DeserializationConstructorsCache$Key$Impl;", nullptr, 0, $field(ObjectStreamClass$DeserializationConstructorsCache$Key$Impl, next)},
	{"fieldNames", "[Ljava/lang/String;", nullptr, $FINAL, $field(ObjectStreamClass$DeserializationConstructorsCache$Key$Impl, fieldNames)},
	{"fieldTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $FINAL, $field(ObjectStreamClass$DeserializationConstructorsCache$Key$Impl, fieldTypes)},
	{}
};

$MethodInfo _ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_MethodInfo_[] = {
	{"<init>", "([Ljava/io/ObjectStreamField;)V", nullptr, 0, $method(static_cast<void(ObjectStreamClass$DeserializationConstructorsCache$Key$Impl::*)($ObjectStreamFieldArray*)>(&ObjectStreamClass$DeserializationConstructorsCache$Key$Impl::init$))},
	{"fieldName", "(I)Ljava/lang/String;", nullptr, 0},
	{"fieldType", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", 0},
	{"length", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$DeserializationConstructorsCache", "java.io.ObjectStreamClass", "DeserializationConstructorsCache", $PRIVATE | $STATIC | $FINAL},
	{"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key", "java.io.ObjectStreamClass$DeserializationConstructorsCache", "Key", $STATIC | $ABSTRACT},
	{"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key$Impl", "java.io.ObjectStreamClass$DeserializationConstructorsCache$Key", "Impl", $STATIC | $FINAL},
	{}
};

$ClassInfo _ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key$Impl",
	"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key",
	nullptr,
	_ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_FieldInfo_,
	_ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$DeserializationConstructorsCache$Key$Impl($Class* clazz) {
	return $of($alloc(ObjectStreamClass$DeserializationConstructorsCache$Key$Impl));
}

void ObjectStreamClass$DeserializationConstructorsCache$Key$Impl::init$($ObjectStreamFieldArray* fields) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$ObjectStreamClass$DeserializationConstructorsCache$Key::init$();
	$set(this, fieldNames, $new($StringArray, $nc(fields)->length));
	$set(this, fieldTypes, $new($ClassArray, fields->length));
	for (int32_t i = 0; i < fields->length; ++i) {
		$nc(this->fieldNames)->set(i, $($nc(fields->get(i))->getName()));
		$nc(this->fieldTypes)->set(i, $nc(fields->get(i))->getType());
	}
}

int32_t ObjectStreamClass$DeserializationConstructorsCache$Key$Impl::length() {
	return $nc(this->fieldNames)->length;
}

$String* ObjectStreamClass$DeserializationConstructorsCache$Key$Impl::fieldName(int32_t i) {
	return $nc(this->fieldNames)->get(i);
}

$Class* ObjectStreamClass$DeserializationConstructorsCache$Key$Impl::fieldType(int32_t i) {
	return $nc(this->fieldTypes)->get(i);
}

ObjectStreamClass$DeserializationConstructorsCache$Key$Impl::ObjectStreamClass$DeserializationConstructorsCache$Key$Impl() {
}

$Class* ObjectStreamClass$DeserializationConstructorsCache$Key$Impl::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$DeserializationConstructorsCache$Key$Impl, name, initialize, &_ObjectStreamClass$DeserializationConstructorsCache$Key$Impl_ClassInfo_, allocate$ObjectStreamClass$DeserializationConstructorsCache$Key$Impl);
	return class$;
}

$Class* ObjectStreamClass$DeserializationConstructorsCache$Key$Impl::class$ = nullptr;

	} // io
} // java