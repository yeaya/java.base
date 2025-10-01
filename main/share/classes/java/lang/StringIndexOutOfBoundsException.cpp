#include <java/lang/StringIndexOutOfBoundsException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _StringIndexOutOfBoundsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringIndexOutOfBoundsException, serialVersionUID)},
	{}
};

$MethodInfo _StringIndexOutOfBoundsException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringIndexOutOfBoundsException::*)()>(&StringIndexOutOfBoundsException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringIndexOutOfBoundsException::*)($String*)>(&StringIndexOutOfBoundsException::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(StringIndexOutOfBoundsException::*)(int32_t)>(&StringIndexOutOfBoundsException::init$))},
	{}
};

$ClassInfo _StringIndexOutOfBoundsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.StringIndexOutOfBoundsException",
	"java.lang.IndexOutOfBoundsException",
	nullptr,
	_StringIndexOutOfBoundsException_FieldInfo_,
	_StringIndexOutOfBoundsException_MethodInfo_
};

$Object* allocate$StringIndexOutOfBoundsException($Class* clazz) {
	return $of($alloc(StringIndexOutOfBoundsException));
}

void StringIndexOutOfBoundsException::init$() {
	$IndexOutOfBoundsException::init$();
}

void StringIndexOutOfBoundsException::init$($String* s) {
	$IndexOutOfBoundsException::init$(s);
}

void StringIndexOutOfBoundsException::init$(int32_t index) {
	$IndexOutOfBoundsException::init$($$str({"String index out of range: "_s, $$str(index)}));
}

StringIndexOutOfBoundsException::StringIndexOutOfBoundsException() {
}

StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(const StringIndexOutOfBoundsException& e) {
}

StringIndexOutOfBoundsException StringIndexOutOfBoundsException::wrapper$() {
	$pendingException(this);
	return *this;
}

void StringIndexOutOfBoundsException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* StringIndexOutOfBoundsException::load$($String* name, bool initialize) {
	$loadClass(StringIndexOutOfBoundsException, name, initialize, &_StringIndexOutOfBoundsException_ClassInfo_, allocate$StringIndexOutOfBoundsException);
	return class$;
}

$Class* StringIndexOutOfBoundsException::class$ = nullptr;

	} // lang
} // java