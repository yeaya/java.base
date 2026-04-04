#include <java/lang/ClassNotFoundException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/ReflectiveOperationException.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;

namespace java {
	namespace lang {

$ObjectStreamFieldArray* ClassNotFoundException::serialPersistentFields = nullptr;

void ClassNotFoundException::init$() {
	$ReflectiveOperationException::init$(($Throwable*)nullptr);
}

void ClassNotFoundException::init$($String* s) {
	$ReflectiveOperationException::init$(s, nullptr);
}

void ClassNotFoundException::init$($String* s, $Throwable* ex) {
	$ReflectiveOperationException::init$(s, ex);
}

$Throwable* ClassNotFoundException::getException() {
	return $ReflectiveOperationException::getCause();
}

void ClassNotFoundException::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Throwable, exception, $cast($Throwable, $nc(fields)->get("ex"_s, nullptr)));
	if (exception != nullptr) {
		setCause(exception);
	}
}

void ClassNotFoundException::writeObject($ObjectOutputStream* out) {
	$useLocalObjectStack();
	$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
	$nc(fields)->put("ex"_s, $($ReflectiveOperationException::getCause()));
	out->writeFields();
}

void ClassNotFoundException::clinit$($Class* clazz) {
	$assignStatic(ClassNotFoundException::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "ex"_s, $Throwable::class$)}));
}

ClassNotFoundException::ClassNotFoundException() {
}

ClassNotFoundException::ClassNotFoundException(const ClassNotFoundException& e) : $ReflectiveOperationException(e) {
}

void ClassNotFoundException::throw$() {
	throw *this;
}

$Class* ClassNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassNotFoundException, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassNotFoundException, serialPersistentFields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassNotFoundException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ClassNotFoundException, init$, void, $String*, $Throwable*)},
		{"getException", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(ClassNotFoundException, getException, $Throwable*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(ClassNotFoundException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(ClassNotFoundException, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.ClassNotFoundException",
		"java.lang.ReflectiveOperationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassNotFoundException, name, initialize, &classInfo$$, ClassNotFoundException::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClassNotFoundException);
	});
	return class$;
}

$Class* ClassNotFoundException::class$ = nullptr;

	} // lang
} // java