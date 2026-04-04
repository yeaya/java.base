#include <java/util/IllformedLocaleException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {

void IllformedLocaleException::init$() {
	$RuntimeException::init$();
	this->_errIdx = -1;
}

void IllformedLocaleException::init$($String* message) {
	$RuntimeException::init$(message);
	this->_errIdx = -1;
}

void IllformedLocaleException::init$($String* message, int32_t errorIndex) {
	$useLocalObjectStack();
	$RuntimeException::init$($$str({message, ((errorIndex < 0) ? ""_s : $$str({" [at index "_s, $$str(errorIndex), "]"_s}))}));
	this->_errIdx = -1;
	this->_errIdx = errorIndex;
}

int32_t IllformedLocaleException::getErrorIndex() {
	return this->_errIdx;
}

IllformedLocaleException::IllformedLocaleException() {
}

IllformedLocaleException::IllformedLocaleException(const IllformedLocaleException& e) : $RuntimeException(e) {
}

void IllformedLocaleException::throw$() {
	throw *this;
}

$Class* IllformedLocaleException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllformedLocaleException, serialVersionUID)},
		{"_errIdx", "I", nullptr, $PRIVATE, $field(IllformedLocaleException, _errIdx)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllformedLocaleException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllformedLocaleException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(IllformedLocaleException, init$, void, $String*, int32_t)},
		{"getErrorIndex", "()I", nullptr, $PUBLIC, $virtualMethod(IllformedLocaleException, getErrorIndex, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.IllformedLocaleException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllformedLocaleException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllformedLocaleException);
	});
	return class$;
}

$Class* IllformedLocaleException::class$ = nullptr;

	} // util
} // java