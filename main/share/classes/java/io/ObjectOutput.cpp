#include <java/io/ObjectOutput.h>

#include <java/io/DataOutput.h>
#include <jcpp.h>

using $DataOutput = ::java::io::DataOutput;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _ObjectOutput_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutput, flush, void), "java.io.IOException"},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "([B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "([BII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectOutput, writeObject, void, Object$*), "java.io.IOException"},
	{}
};

$ClassInfo _ObjectOutput_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.ObjectOutput",
	nullptr,
	"java.io.DataOutput,java.lang.AutoCloseable",
	nullptr,
	_ObjectOutput_MethodInfo_
};

$Object* allocate$ObjectOutput($Class* clazz) {
	return $of($alloc(ObjectOutput));
}

int32_t ObjectOutput::hashCode() {
	 return this->$DataOutput::hashCode();
}

bool ObjectOutput::equals(Object$* obj) {
	 return this->$DataOutput::equals(obj);
}

$Object* ObjectOutput::clone() {
	 return this->$DataOutput::clone();
}

$String* ObjectOutput::toString() {
	 return this->$DataOutput::toString();
}

void ObjectOutput::finalize() {
	this->$DataOutput::finalize();
}

$Class* ObjectOutput::load$($String* name, bool initialize) {
	$loadClass(ObjectOutput, name, initialize, &_ObjectOutput_ClassInfo_, allocate$ObjectOutput);
	return class$;
}

$Class* ObjectOutput::class$ = nullptr;

	} // io
} // java