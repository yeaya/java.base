#include <java/io/ObjectInputStream$GetField.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _ObjectInputStream$GetField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ObjectInputStream$GetField, init$, void)},
	{"defaulted", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, defaulted, bool, $String*), "java.io.IOException"},
	{"get", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, get, bool, $String*, bool), "java.io.IOException"},
	{"get", "(Ljava/lang/String;B)B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, get, int8_t, $String*, int8_t), "java.io.IOException"},
	{"get", "(Ljava/lang/String;C)C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, get, char16_t, $String*, char16_t), "java.io.IOException"},
	{"get", "(Ljava/lang/String;S)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, get, int16_t, $String*, int16_t), "java.io.IOException"},
	{"get", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, get, int32_t, $String*, int32_t), "java.io.IOException"},
	{"get", "(Ljava/lang/String;J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, get, int64_t, $String*, int64_t), "java.io.IOException"},
	{"get", "(Ljava/lang/String;F)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, get, float, $String*, float), "java.io.IOException"},
	{"get", "(Ljava/lang/String;D)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, get, double, $String*, double), "java.io.IOException"},
	{"get", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, get, $Object*, $String*, Object$*), "java.io.IOException"},
	{"getObjectStreamClass", "()Ljava/io/ObjectStreamClass;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputStream$GetField, getObjectStreamClass, $ObjectStreamClass*)},
	{}
};

$InnerClassInfo _ObjectInputStream$GetField_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$GetField", "java.io.ObjectInputStream", "GetField", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ObjectInputStream$GetField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.io.ObjectInputStream$GetField",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ObjectInputStream$GetField_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputStream$GetField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$GetField($Class* clazz) {
	return $of($alloc(ObjectInputStream$GetField));
}

void ObjectInputStream$GetField::init$() {
}

ObjectInputStream$GetField::ObjectInputStream$GetField() {
}

$Class* ObjectInputStream$GetField::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$GetField, name, initialize, &_ObjectInputStream$GetField_ClassInfo_, allocate$ObjectInputStream$GetField);
	return class$;
}

$Class* ObjectInputStream$GetField::class$ = nullptr;

	} // io
} // java