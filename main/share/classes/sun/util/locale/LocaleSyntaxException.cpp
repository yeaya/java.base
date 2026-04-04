#include <sun/util/locale/LocaleSyntaxException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace util {
		namespace locale {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LocaleSyntaxException, serialVersionUID)},
		{"index", "I", nullptr, $PRIVATE, $field(LocaleSyntaxException, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LocaleSyntaxException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(LocaleSyntaxException, init$, void, $String*, int32_t)},
		{"getErrorIndex", "()I", nullptr, $PUBLIC, $virtualMethod(LocaleSyntaxException, getErrorIndex, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.locale.LocaleSyntaxException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LocaleSyntaxException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleSyntaxException);
	});
	return class$;
}

$Class* LocaleSyntaxException::class$ = nullptr;

		} // locale
	} // util
} // sun