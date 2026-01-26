#include <java/io/ObjectStreamException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectStreamException, serialVersionUID)},
	{}
};

$MethodInfo _ObjectStreamException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(ObjectStreamException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PROTECTED, $method(ObjectStreamException, init$, void)},
	{}
};

$ClassInfo _ObjectStreamException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.io.ObjectStreamException",
	"java.io.IOException",
	nullptr,
	_ObjectStreamException_FieldInfo_,
	_ObjectStreamException_MethodInfo_
};

$Object* allocate$ObjectStreamException($Class* clazz) {
	return $of($alloc(ObjectStreamException));
}

void ObjectStreamException::init$($String* message) {
	$IOException::init$(message);
}

void ObjectStreamException::init$() {
	$IOException::init$();
}

ObjectStreamException::ObjectStreamException() {
}

ObjectStreamException::ObjectStreamException(const ObjectStreamException& e) : $IOException(e) {
}

void ObjectStreamException::throw$() {
	throw *this;
}

$Class* ObjectStreamException::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamException, name, initialize, &_ObjectStreamException_ClassInfo_, allocate$ObjectStreamException);
	return class$;
}

$Class* ObjectStreamException::class$ = nullptr;

	} // io
} // java