#include <java/text/ParseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

void ParseException::init$($String* s, int32_t errorOffset) {
	$Exception::init$(s);
	this->errorOffset = errorOffset;
}

int32_t ParseException::getErrorOffset() {
	return this->errorOffset;
}

ParseException::ParseException() {
}

ParseException::ParseException(const ParseException& e) : $Exception(e) {
}

void ParseException::throw$() {
	throw *this;
}

$Class* ParseException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParseException, serialVersionUID)},
		{"errorOffset", "I", nullptr, $PRIVATE, $field(ParseException, errorOffset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(ParseException, init$, void, $String*, int32_t)},
		{"getErrorOffset", "()I", nullptr, $PUBLIC, $virtualMethod(ParseException, getErrorOffset, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.text.ParseException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ParseException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParseException);
	});
	return class$;
}

$Class* ParseException::class$ = nullptr;

	} // text
} // java