#include <java/util/IllformedLocaleException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {

$FieldInfo _IllformedLocaleException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllformedLocaleException, serialVersionUID)},
	{"_errIdx", "I", nullptr, $PRIVATE, $field(IllformedLocaleException, _errIdx)},
	{}
};

$MethodInfo _IllformedLocaleException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllformedLocaleException::*)()>(&IllformedLocaleException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllformedLocaleException::*)($String*)>(&IllformedLocaleException::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(IllformedLocaleException::*)($String*,int32_t)>(&IllformedLocaleException::init$))},
	{"getErrorIndex", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IllformedLocaleException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.IllformedLocaleException",
	"java.lang.RuntimeException",
	nullptr,
	_IllformedLocaleException_FieldInfo_,
	_IllformedLocaleException_MethodInfo_
};

$Object* allocate$IllformedLocaleException($Class* clazz) {
	return $of($alloc(IllformedLocaleException));
}

void IllformedLocaleException::init$() {
	$RuntimeException::init$();
	this->_errIdx = -1;
}

void IllformedLocaleException::init$($String* message) {
	$RuntimeException::init$(message);
	this->_errIdx = -1;
}

void IllformedLocaleException::init$($String* message, int32_t errorIndex) {
	$RuntimeException::init$($$str({message, ((errorIndex < 0) ? ""_s : $$str({" [at index "_s, $$str(errorIndex), "]"_s}))}));
	this->_errIdx = -1;
	this->_errIdx = errorIndex;
}

int32_t IllformedLocaleException::getErrorIndex() {
	return this->_errIdx;
}

IllformedLocaleException::IllformedLocaleException() {
}

IllformedLocaleException::IllformedLocaleException(const IllformedLocaleException& e) {
}

IllformedLocaleException IllformedLocaleException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllformedLocaleException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllformedLocaleException::load$($String* name, bool initialize) {
	$loadClass(IllformedLocaleException, name, initialize, &_IllformedLocaleException_ClassInfo_, allocate$IllformedLocaleException);
	return class$;
}

$Class* IllformedLocaleException::class$ = nullptr;

	} // util
} // java