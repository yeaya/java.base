#include <java/util/jar/JarException.h>
#include <java/util/zip/ZipException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZipException = ::java::util::zip::ZipException;

namespace java {
	namespace util {
		namespace jar {

void JarException::init$() {
	$ZipException::init$();
}

void JarException::init$($String* s) {
	$ZipException::init$(s);
}

JarException::JarException() {
}

JarException::JarException(const JarException& e) : $ZipException(e) {
}

void JarException::throw$() {
	throw *this;
}

$Class* JarException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JarException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JarException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JarException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.jar.JarException",
		"java.util.zip.ZipException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JarException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarException);
	});
	return class$;
}

$Class* JarException::class$ = nullptr;

		} // jar
	} // util
} // java