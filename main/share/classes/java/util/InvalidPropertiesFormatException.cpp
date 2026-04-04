#include <java/util/InvalidPropertiesFormatException.h>
#include <java/io/IOException.h>
#include <java/io/NotSerializableException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void InvalidPropertiesFormatException::init$($Throwable* cause) {
	$IOException::init$(cause == nullptr ? ($String*)nullptr : $(cause->toString()));
	this->initCause(cause);
}

void InvalidPropertiesFormatException::init$($String* message) {
	$IOException::init$(message);
}

void InvalidPropertiesFormatException::writeObject($ObjectOutputStream* out) {
	$throwNew($NotSerializableException, "Not serializable."_s);
}

void InvalidPropertiesFormatException::readObject($ObjectInputStream* in) {
	$throwNew($NotSerializableException, "Not serializable."_s);
}

InvalidPropertiesFormatException::InvalidPropertiesFormatException() {
}

InvalidPropertiesFormatException::InvalidPropertiesFormatException(const InvalidPropertiesFormatException& e) : $IOException(e) {
}

void InvalidPropertiesFormatException::throw$() {
	throw *this;
}

$Class* InvalidPropertiesFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidPropertiesFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(InvalidPropertiesFormatException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidPropertiesFormatException, init$, void, $String*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(InvalidPropertiesFormatException, readObject, void, $ObjectInputStream*), "java.io.NotSerializableException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(InvalidPropertiesFormatException, writeObject, void, $ObjectOutputStream*), "java.io.NotSerializableException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.InvalidPropertiesFormatException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidPropertiesFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidPropertiesFormatException);
	});
	return class$;
}

$Class* InvalidPropertiesFormatException::class$ = nullptr;

	} // util
} // java