#include <java/util/MissingResourceException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace util {

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

MissingResourceException::MissingResourceException(const MissingResourceException& e) : $RuntimeException(e) {
}

void MissingResourceException::throw$() {
	throw *this;
}

$Class* MissingResourceException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MissingResourceException, serialVersionUID)},
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MissingResourceException, className)},
		{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MissingResourceException, key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MissingResourceException, init$, void, $String*, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, 0, $method(MissingResourceException, init$, void, $String*, $String*, $String*, $Throwable*)},
		{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MissingResourceException, getClassName, $String*)},
		{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MissingResourceException, getKey, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.MissingResourceException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MissingResourceException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingResourceException);
	});
	return class$;
}

$Class* MissingResourceException::class$ = nullptr;

	} // util
} // java