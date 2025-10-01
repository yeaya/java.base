#include <jdk/internal/util/jar/InvalidJarIndexError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace util {
			namespace jar {

$FieldInfo _InvalidJarIndexError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(InvalidJarIndexError, serialVersionUID)},
	{}
};

$MethodInfo _InvalidJarIndexError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidJarIndexError::*)()>(&InvalidJarIndexError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidJarIndexError::*)($String*)>(&InvalidJarIndexError::init$))},
	{}
};

$ClassInfo _InvalidJarIndexError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.jar.InvalidJarIndexError",
	"java.lang.Error",
	nullptr,
	_InvalidJarIndexError_FieldInfo_,
	_InvalidJarIndexError_MethodInfo_
};

$Object* allocate$InvalidJarIndexError($Class* clazz) {
	return $of($alloc(InvalidJarIndexError));
}

void InvalidJarIndexError::init$() {
	$Error::init$();
}

void InvalidJarIndexError::init$($String* s) {
	$Error::init$(s);
}

InvalidJarIndexError::InvalidJarIndexError() {
}

InvalidJarIndexError::InvalidJarIndexError(const InvalidJarIndexError& e) {
}

InvalidJarIndexError InvalidJarIndexError::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidJarIndexError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidJarIndexError::load$($String* name, bool initialize) {
	$loadClass(InvalidJarIndexError, name, initialize, &_InvalidJarIndexError_ClassInfo_, allocate$InvalidJarIndexError);
	return class$;
}

$Class* InvalidJarIndexError::class$ = nullptr;

			} // jar
		} // util
	} // internal
} // jdk