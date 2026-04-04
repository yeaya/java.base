#include <java/io/UnsupportedEncodingException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void UnsupportedEncodingException::init$() {
	$IOException::init$();
}

void UnsupportedEncodingException::init$($String* s) {
	$IOException::init$(s);
}

UnsupportedEncodingException::UnsupportedEncodingException() {
}

UnsupportedEncodingException::UnsupportedEncodingException(const UnsupportedEncodingException& e) : $IOException(e) {
}

void UnsupportedEncodingException::throw$() {
	throw *this;
}

$Class* UnsupportedEncodingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedEncodingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnsupportedEncodingException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsupportedEncodingException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.UnsupportedEncodingException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsupportedEncodingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsupportedEncodingException);
	});
	return class$;
}

$Class* UnsupportedEncodingException::class$ = nullptr;

	} // io
} // java