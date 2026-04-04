#include <java/lang/NumberFormatException.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void NumberFormatException::init$() {
	$IllegalArgumentException::init$();
}

void NumberFormatException::init$($String* s) {
	$IllegalArgumentException::init$(s);
}

NumberFormatException* NumberFormatException::forInputString($String* s, int32_t radix) {
	$init(NumberFormatException);
	$useLocalObjectStack();
	return $new(NumberFormatException, $$str({"For input string: \""_s, s, "\""_s, (radix == 10 ? ""_s : $$str({" under radix "_s, $$str(radix)}))}));
}

NumberFormatException* NumberFormatException::forCharSequence($CharSequence* s, int32_t beginIndex, int32_t endIndex, int32_t errorIndex) {
	$init(NumberFormatException);
	$useLocalObjectStack();
	return $new(NumberFormatException, $$str({"Error at index "_s, $$str((errorIndex - beginIndex)), " in: \""_s, $($nc(s)->subSequence(beginIndex, endIndex)), "\""_s}));
}

NumberFormatException::NumberFormatException() {
}

NumberFormatException::NumberFormatException(const NumberFormatException& e) : $IllegalArgumentException(e) {
}

void NumberFormatException::throw$() {
	throw *this;
}

$Class* NumberFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NumberFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NumberFormatException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NumberFormatException, init$, void, $String*)},
		{"forCharSequence", "(Ljava/lang/CharSequence;III)Ljava/lang/NumberFormatException;", nullptr, $STATIC, $staticMethod(NumberFormatException, forCharSequence, NumberFormatException*, $CharSequence*, int32_t, int32_t, int32_t)},
		{"forInputString", "(Ljava/lang/String;I)Ljava/lang/NumberFormatException;", nullptr, $STATIC, $staticMethod(NumberFormatException, forInputString, NumberFormatException*, $String*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.NumberFormatException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NumberFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NumberFormatException);
	});
	return class$;
}

$Class* NumberFormatException::class$ = nullptr;

	} // lang
} // java