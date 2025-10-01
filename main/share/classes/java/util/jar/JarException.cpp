#include <java/util/jar/JarException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/zip/ZipException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZipException = ::java::util::zip::ZipException;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _JarException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JarException, serialVersionUID)},
	{}
};

$MethodInfo _JarException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JarException::*)()>(&JarException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JarException::*)($String*)>(&JarException::init$))},
	{}
};

$ClassInfo _JarException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.jar.JarException",
	"java.util.zip.ZipException",
	nullptr,
	_JarException_FieldInfo_,
	_JarException_MethodInfo_
};

$Object* allocate$JarException($Class* clazz) {
	return $of($alloc(JarException));
}

void JarException::init$() {
	$ZipException::init$();
}

void JarException::init$($String* s) {
	$ZipException::init$(s);
}

JarException::JarException() {
}

JarException::JarException(const JarException& e) {
}

JarException JarException::wrapper$() {
	$pendingException(this);
	return *this;
}

void JarException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* JarException::load$($String* name, bool initialize) {
	$loadClass(JarException, name, initialize, &_JarException_ClassInfo_, allocate$JarException);
	return class$;
}

$Class* JarException::class$ = nullptr;

		} // jar
	} // util
} // java