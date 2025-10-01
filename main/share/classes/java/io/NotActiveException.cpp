#include <java/io/NotActiveException.h>

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

$FieldInfo _NotActiveException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotActiveException, serialVersionUID)},
	{}
};

$MethodInfo _NotActiveException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NotActiveException::*)($String*)>(&NotActiveException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NotActiveException::*)()>(&NotActiveException::init$))},
	{}
};

$ClassInfo _NotActiveException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.NotActiveException",
	"java.io.ObjectStreamException",
	nullptr,
	_NotActiveException_FieldInfo_,
	_NotActiveException_MethodInfo_
};

$Object* allocate$NotActiveException($Class* clazz) {
	return $of($alloc(NotActiveException));
}

void NotActiveException::init$($String* reason) {
	$ObjectStreamException::init$(reason);
}

void NotActiveException::init$() {
	$ObjectStreamException::init$();
}

NotActiveException::NotActiveException() {
}

NotActiveException::NotActiveException(const NotActiveException& e) {
}

NotActiveException NotActiveException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NotActiveException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NotActiveException::load$($String* name, bool initialize) {
	$loadClass(NotActiveException, name, initialize, &_NotActiveException_ClassInfo_, allocate$NotActiveException);
	return class$;
}

$Class* NotActiveException::class$ = nullptr;

	} // io
} // java