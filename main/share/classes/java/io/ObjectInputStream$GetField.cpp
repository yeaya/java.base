#include <java/io/ObjectInputStream$GetField.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _ObjectInputStream$GetField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ObjectInputStream$GetField::*)()>(&ObjectInputStream$GetField::init$))},
	{"defaulted", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;B)B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;C)C", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;S)S", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;J)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;F)F", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;D)D", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getObjectStreamClass", "()Ljava/io/ObjectStreamClass;", nullptr, $PUBLIC | $ABSTRACT},
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