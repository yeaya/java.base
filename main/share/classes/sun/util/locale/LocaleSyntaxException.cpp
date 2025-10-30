#include <sun/util/locale/LocaleSyntaxException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace util {
		namespace locale {

$FieldInfo _LocaleSyntaxException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LocaleSyntaxException, serialVersionUID)},
	{"index", "I", nullptr, $PRIVATE, $field(LocaleSyntaxException, index)},
	{}
};

$MethodInfo _LocaleSyntaxException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LocaleSyntaxException::*)($String*)>(&LocaleSyntaxException::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(LocaleSyntaxException::*)($String*,int32_t)>(&LocaleSyntaxException::init$))},
	{"getErrorIndex", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LocaleSyntaxException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.LocaleSyntaxException",
	"java.lang.Exception",
	nullptr,
	_LocaleSyntaxException_FieldInfo_,
	_LocaleSyntaxException_MethodInfo_
};

$Object* allocate$LocaleSyntaxException($Class* clazz) {
	return $of($alloc(LocaleSyntaxException));
}

void LocaleSyntaxException::init$($String* msg) {
	LocaleSyntaxException::init$(msg, 0);
}

void LocaleSyntaxException::init$($String* msg, int32_t errorIndex) {
	$Exception::init$(msg);
	this->index = -1;
	this->index = errorIndex;
}

int32_t LocaleSyntaxException::getErrorIndex() {
	return this->index;
}

LocaleSyntaxException::LocaleSyntaxException() {
}

LocaleSyntaxException::LocaleSyntaxException(const LocaleSyntaxException& e) : $Exception(e) {
}

void LocaleSyntaxException::throw$() {
	throw *this;
}

$Class* LocaleSyntaxException::load$($String* name, bool initialize) {
	$loadClass(LocaleSyntaxException, name, initialize, &_LocaleSyntaxException_ClassInfo_, allocate$LocaleSyntaxException);
	return class$;
}

$Class* LocaleSyntaxException::class$ = nullptr;

		} // locale
	} // util
} // sun