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

$FieldInfo _ZipError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZipError, serialVersionUID)},
	{}
};

$MethodInfo _ZipError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ZipError, init$, void, $String*)},
	{}
};

$ClassInfo _ZipError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.ZipError",
	"java.lang.InternalError",
	nullptr,
	_ZipError_FieldInfo_,
	_ZipError_MethodInfo_
};

$Object* allocate$ZipError($Class* clazz) {
	return $of($alloc(ZipError));
}

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
	$loadClass(ZipError, name, initialize, &_ZipError_ClassInfo_, allocate$ZipError);
	return class$;
}

$Class* ZipError::class$ = nullptr;

		} // zip
	} // util
} // java