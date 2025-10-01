#include <java/nio/charset/IllegalCharsetNameException.h>

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
	namespace nio {
		namespace charset {

$FieldInfo _IllegalCharsetNameException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalCharsetNameException, serialVersionUID)},
	{"charsetName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IllegalCharsetNameException, charsetName)},
	{}
};

$MethodInfo _IllegalCharsetNameException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalCharsetNameException::*)($String*)>(&IllegalCharsetNameException::init$))},
	{"getCharsetName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IllegalCharsetNameException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.charset.IllegalCharsetNameException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_IllegalCharsetNameException_FieldInfo_,
	_IllegalCharsetNameException_MethodInfo_
};

$Object* allocate$IllegalCharsetNameException($Class* clazz) {
	return $of($alloc(IllegalCharsetNameException));
}

void IllegalCharsetNameException::init$($String* charsetName) {
	$IllegalArgumentException::init$($($String::valueOf($of(charsetName))));
	$set(this, charsetName, charsetName);
}

$String* IllegalCharsetNameException::getCharsetName() {
	return this->charsetName;
}

IllegalCharsetNameException::IllegalCharsetNameException() {
}

IllegalCharsetNameException::IllegalCharsetNameException(const IllegalCharsetNameException& e) {
}

IllegalCharsetNameException IllegalCharsetNameException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalCharsetNameException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalCharsetNameException::load$($String* name, bool initialize) {
	$loadClass(IllegalCharsetNameException, name, initialize, &_IllegalCharsetNameException_ClassInfo_, allocate$IllegalCharsetNameException);
	return class$;
}

$Class* IllegalCharsetNameException::class$ = nullptr;

		} // charset
	} // nio
} // java