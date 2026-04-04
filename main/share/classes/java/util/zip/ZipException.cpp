#include <java/util/zip/ZipException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace zip {

void ZipException::init$() {
	$IOException::init$();
}

void ZipException::init$($String* s) {
	$IOException::init$(s);
}

ZipException::ZipException() {
}

ZipException::ZipException(const ZipException& e) : $IOException(e) {
}

void ZipException::throw$() {
	throw *this;
}

$Class* ZipException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZipException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ZipException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ZipException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.zip.ZipException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ZipException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipException);
	});
	return class$;
}

$Class* ZipException::class$ = nullptr;

		} // zip
	} // util
} // java