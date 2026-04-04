#include <java/lang/invoke/StringConcatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringConcatException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(StringConcatException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.invoke.StringConcatException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringConcatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringConcatException);
	});
	return class$;
}

$Class* StringConcatException::class$ = nullptr;

		} // invoke
	} // lang
} // java