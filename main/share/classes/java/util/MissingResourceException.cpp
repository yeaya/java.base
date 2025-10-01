#include <java/util/MissingResourceException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {

$FieldInfo _MissingResourceException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MissingResourceException, serialVersionUID)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MissingResourceException, className)},
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MissingResourceException, key)},
	{}
};

$MethodInfo _MissingResourceException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MissingResourceException::*)($String*,$String*,$String*)>(&MissingResourceException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, 0, $method(static_cast<void(MissingResourceException::*)($String*,$String*,$String*,$Throwable*)>(&MissingResourceException::init$))},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MissingResourceException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.MissingResourceException",
	"java.lang.RuntimeException",
	nullptr,
	_MissingResourceException_FieldInfo_,
	_MissingResourceException_MethodInfo_
};

$Object* allocate$MissingResourceException($Class* clazz) {
	return $of($alloc(MissingResourceException));
}

void MissingResourceException::init$($String* s, $String* className, $String* key) {
	$RuntimeException::init$(s);
	$set(this, className, className);
	$set(this, key, key);
}

void MissingResourceException::init$($String* message, $String* className, $String* key, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
	$set(this, className, className);
	$set(this, key, key);
}

$String* MissingResourceException::getClassName() {
	return this->className;
}

$String* MissingResourceException::getKey() {
	return this->key;
}

MissingResourceException::MissingResourceException() {
}

MissingResourceException::MissingResourceException(const MissingResourceException& e) {
}

MissingResourceException MissingResourceException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MissingResourceException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MissingResourceException::load$($String* name, bool initialize) {
	$loadClass(MissingResourceException, name, initialize, &_MissingResourceException_ClassInfo_, allocate$MissingResourceException);
	return class$;
}

$Class* MissingResourceException::class$ = nullptr;

	} // util
} // java