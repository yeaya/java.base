#include <java/util/zip/ZipError.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace zip {

void ZipError::init$($String* s) {
	$InternalError::init$(s);
}

ZipError::ZipError() {
}

ZipError::ZipError(const ZipError& e) : $InternalError(e) {
}

void ZipError::throw$() {
	throw *this;
}

$Class* ZipError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZipError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ZipError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.zip.ZipError",
		"java.lang.InternalError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ZipError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipError);
	});
	return class$;
}

$Class* ZipError::class$ = nullptr;

		} // zip
	} // util
} // java