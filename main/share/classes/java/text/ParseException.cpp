#include <java/text/ParseException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

$FieldInfo _ParseException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParseException, serialVersionUID)},
	{"errorOffset", "I", nullptr, $PRIVATE, $field(ParseException, errorOffset)},
	{}
};

$MethodInfo _ParseException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ParseException::*)($String*,int32_t)>(&ParseException::init$))},
	{"getErrorOffset", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ParseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.text.ParseException",
	"java.lang.Exception",
	nullptr,
	_ParseException_FieldInfo_,
	_ParseException_MethodInfo_
};

$Object* allocate$ParseException($Class* clazz) {
	return $of($alloc(ParseException));
}

void ParseException::init$($String* s, int32_t errorOffset) {
	$Exception::init$(s);
	this->errorOffset = errorOffset;
}

int32_t ParseException::getErrorOffset() {
	return this->errorOffset;
}

ParseException::ParseException() {
}

ParseException::ParseException(const ParseException& e) {
}

ParseException ParseException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ParseException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ParseException::load$($String* name, bool initialize) {
	$loadClass(ParseException, name, initialize, &_ParseException_ClassInfo_, allocate$ParseException);
	return class$;
}

$Class* ParseException::class$ = nullptr;

	} // text
} // java