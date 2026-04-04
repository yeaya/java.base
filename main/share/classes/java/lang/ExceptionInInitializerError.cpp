#include <java/lang/ExceptionInInitializerError.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$ObjectStreamFieldArray* ExceptionInInitializerError::serialPersistentFields = nullptr;

void ExceptionInInitializerError::init$() {
	$LinkageError::init$();
	initCause(nullptr);
}

void ExceptionInInitializerError::init$($Throwable* thrown) {
	$LinkageError::init$(nullptr, thrown);
}

void ExceptionInInitializerError::init$($String* s) {
	$LinkageError::init$(s, nullptr);
}

$Throwable* ExceptionInInitializerError::getException() {
	return $LinkageError::getCause();
}

void ExceptionInInitializerError::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Throwable, exception, $cast($Throwable, $nc(fields)->get("exception"_s, nullptr)));
	if (exception != nullptr) {
		setCause(exception);
	}
}

void ExceptionInInitializerError::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
	$nc(fields)->put("exception"_s, $($LinkageError::getCause()));
	out->writeFields();
}

void ExceptionInInitializerError::clinit$($Class* clazz) {
	$assignStatic(ExceptionInInitializerError::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "exception"_s, $Throwable::class$)}));
}

ExceptionInInitializerError::ExceptionInInitializerError() {
}

ExceptionInInitializerError::ExceptionInInitializerError(const ExceptionInInitializerError& e) : $LinkageError(e) {
}

void ExceptionInInitializerError::throw$() {
	throw *this;
}

$Class* ExceptionInInitializerError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExceptionInInitializerError, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExceptionInInitializerError, serialPersistentFields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExceptionInInitializerError, init$, void)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ExceptionInInitializerError, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ExceptionInInitializerError, init$, void, $String*)},
		{"getException", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(ExceptionInInitializerError, getException, $Throwable*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(ExceptionInInitializerError, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(ExceptionInInitializerError, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ExceptionInInitializerError",
		"java.lang.LinkageError",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ExceptionInInitializerError, name, initialize, &classInfo$$, ExceptionInInitializerError::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExceptionInInitializerError);
	});
	return class$;
}

$Class* ExceptionInInitializerError::class$ = nullptr;

	} // lang
} // java