#include <java/io/NotSerializableException.h>

#include <java/io/ObjectStreamException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _NotSerializableException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotSerializableException, serialVersionUID)},
	{}
};

$MethodInfo _NotSerializableException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NotSerializableException::*)($String*)>(&NotSerializableException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NotSerializableException::*)()>(&NotSerializableException::init$))},
	{}
};

$ClassInfo _NotSerializableException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.NotSerializableException",
	"java.io.ObjectStreamException",
	nullptr,
	_NotSerializableException_FieldInfo_,
	_NotSerializableException_MethodInfo_
};

$Object* allocate$NotSerializableException($Class* clazz) {
	return $of($alloc(NotSerializableException));
}

void NotSerializableException::init$($String* classname) {
	$ObjectStreamException::init$(classname);
}

void NotSerializableException::init$() {
	$ObjectStreamException::init$();
}

NotSerializableException::NotSerializableException() {
}

NotSerializableException::NotSerializableException(const NotSerializableException& e) {
}

NotSerializableException NotSerializableException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NotSerializableException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NotSerializableException::load$($String* name, bool initialize) {
	$loadClass(NotSerializableException, name, initialize, &_NotSerializableException_ClassInfo_, allocate$NotSerializableException);
	return class$;
}

$Class* NotSerializableException::class$ = nullptr;

	} // io
} // java