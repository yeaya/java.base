#include <java/lang/invoke/StringConcatException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _StringConcatException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcatException, serialVersionUID)},
	{}
};

$MethodInfo _StringConcatException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatException::*)($String*)>(&StringConcatException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcatException::*)($String*,$Throwable*)>(&StringConcatException::init$))},
	{}
};

$ClassInfo _StringConcatException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.invoke.StringConcatException",
	"java.lang.Exception",
	nullptr,
	_StringConcatException_FieldInfo_,
	_StringConcatException_MethodInfo_
};

$Object* allocate$StringConcatException($Class* clazz) {
	return $of($alloc(StringConcatException));
}

void StringConcatException::init$($String* msg) {
	$Exception::init$(msg);
}

void StringConcatException::init$($String* msg, $Throwable* cause) {
	$Exception::init$(msg, cause);
}

StringConcatException::StringConcatException() {
}

StringConcatException::StringConcatException(const StringConcatException& e) : $Exception(e) {
}

void StringConcatException::throw$() {
	throw *this;
}

$Class* StringConcatException::load$($String* name, bool initialize) {
	$loadClass(StringConcatException, name, initialize, &_StringConcatException_ClassInfo_, allocate$StringConcatException);
	return class$;
}

$Class* StringConcatException::class$ = nullptr;

		} // invoke
	} // lang
} // java