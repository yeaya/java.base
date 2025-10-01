#include <java/io/ObjectInput.h>

#include <java/io/DataInput.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DataInput = ::java::io::DataInput;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _ObjectInput_MethodInfo_[] = {
	{"available", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"read", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"readObject", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.ClassNotFoundException,java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ObjectInput_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.ObjectInput",
	nullptr,
	"java.io.DataInput,java.lang.AutoCloseable",
	nullptr,
	_ObjectInput_MethodInfo_
};

$Object* allocate$ObjectInput($Class* clazz) {
	return $of($alloc(ObjectInput));
}

int32_t ObjectInput::hashCode() {
	 return this->$DataInput::hashCode();
}

bool ObjectInput::equals(Object$* obj) {
	 return this->$DataInput::equals(obj);
}

$Object* ObjectInput::clone() {
	 return this->$DataInput::clone();
}

$String* ObjectInput::toString() {
	 return this->$DataInput::toString();
}

void ObjectInput::finalize() {
	this->$DataInput::finalize();
}

$Class* ObjectInput::load$($String* name, bool initialize) {
	$loadClass(ObjectInput, name, initialize, &_ObjectInput_ClassInfo_, allocate$ObjectInput);
	return class$;
}

$Class* ObjectInput::class$ = nullptr;

	} // io
} // java