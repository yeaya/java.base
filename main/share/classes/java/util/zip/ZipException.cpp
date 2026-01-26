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

$FieldInfo _ZipException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZipException, serialVersionUID)},
	{}
};

$MethodInfo _ZipException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ZipException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ZipException, init$, void, $String*)},
	{}
};

$ClassInfo _ZipException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.zip.ZipException",
	"java.io.IOException",
	nullptr,
	_ZipException_FieldInfo_,
	_ZipException_MethodInfo_
};

$Object* allocate$ZipException($Class* clazz) {
	return $of($alloc(ZipException));
}

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
	$loadClass(ZipException, name, initialize, &_ZipException_ClassInfo_, allocate$ZipException);
	return class$;
}

$Class* ZipException::class$ = nullptr;

		} // zip
	} // util
} // java