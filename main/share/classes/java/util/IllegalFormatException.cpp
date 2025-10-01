#include <java/util/IllegalFormatException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _IllegalFormatException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalFormatException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IllegalFormatException::*)()>(&IllegalFormatException::init$))},
	{}
};

$ClassInfo _IllegalFormatException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.IllegalFormatException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_IllegalFormatException_FieldInfo_,
	_IllegalFormatException_MethodInfo_
};

$Object* allocate$IllegalFormatException($Class* clazz) {
	return $of($alloc(IllegalFormatException));
}

void IllegalFormatException::init$() {
	$IllegalArgumentException::init$();
}

IllegalFormatException::IllegalFormatException() {
}

IllegalFormatException::IllegalFormatException(const IllegalFormatException& e) {
}

IllegalFormatException IllegalFormatException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalFormatException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalFormatException::load$($String* name, bool initialize) {
	$loadClass(IllegalFormatException, name, initialize, &_IllegalFormatException_ClassInfo_, allocate$IllegalFormatException);
	return class$;
}

$Class* IllegalFormatException::class$ = nullptr;

	} // util
} // java