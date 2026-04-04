#include <java/io/UncheckedIOException.h>
#include <java/io/IOException.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

void UncheckedIOException::init$($String* message, $IOException* cause) {
	$RuntimeException::init$(message, $cast($Throwable, $Objects::requireNonNull(cause)));
}

void UncheckedIOException::init$($IOException* cause) {
	$RuntimeException::init$($cast($Throwable, $Objects::requireNonNull(cause)));
}

$Throwable* UncheckedIOException::getCause() {
	return $cast($IOException, $RuntimeException::getCause());
}

void UncheckedIOException::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$var($Throwable, cause, $RuntimeException::getCause());
	if (!($instanceOf($IOException, cause))) {
		$throwNew($InvalidObjectException, "Cause must be an IOException"_s);
	}
}

UncheckedIOException::UncheckedIOException() {
}

UncheckedIOException::UncheckedIOException(const UncheckedIOException& e) : $RuntimeException(e) {
}

void UncheckedIOException::throw$() {
	throw *this;
}

$Class* UncheckedIOException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UncheckedIOException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/io/IOException;)V", nullptr, $PUBLIC, $method(UncheckedIOException, init$, void, $String*, $IOException*)},
		{"<init>", "(Ljava/io/IOException;)V", nullptr, $PUBLIC, $method(UncheckedIOException, init$, void, $IOException*)},
		{"getCause", "()Ljava/io/IOException;", nullptr, $PUBLIC, $virtualMethod(UncheckedIOException, getCause, $Throwable*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(UncheckedIOException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.UncheckedIOException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UncheckedIOException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UncheckedIOException);
	});
	return class$;
}

$Class* UncheckedIOException::class$ = nullptr;

	} // io
} // java