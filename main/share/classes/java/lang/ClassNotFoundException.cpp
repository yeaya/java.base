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

$FieldInfo _ClassNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassNotFoundException, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassNotFoundException, serialPersistentFields)},
	{}
};

$MethodInfo _ClassNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClassNotFoundException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassNotFoundException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ClassNotFoundException, init$, void, $String*, $Throwable*)},
	{"getException", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(ClassNotFoundException, getException, $Throwable*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(ClassNotFoundException, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(ClassNotFoundException, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _ClassNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ClassNotFoundException",
	"java.lang.ReflectiveOperationException",
	nullptr,
	_ClassNotFoundException_FieldInfo_,
	_ClassNotFoundException_MethodInfo_
};

$Object* allocate$ClassNotFoundException($Class* clazz) {
	return $of($alloc(ClassNotFoundException));
}

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
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Throwable, exception, $cast($Throwable, $nc(fields)->get("ex"_s, ($Object*)nullptr)));
	if (exception != nullptr) {
		setCause(exception);
	}
}

void ClassNotFoundException::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
	$nc(fields)->put("ex"_s, $($of($ReflectiveOperationException::getCause())));
	out->writeFields();
}

void clinit$ClassNotFoundException($Class* class$) {
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
	$loadClass(ClassNotFoundException, name, initialize, &_ClassNotFoundException_ClassInfo_, clinit$ClassNotFoundException, allocate$ClassNotFoundException);
	return class$;
}

$Class* ClassNotFoundException::class$ = nullptr;

	} // lang
} // java