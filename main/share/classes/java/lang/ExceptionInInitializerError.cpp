#include <java/lang/ExceptionInInitializerError.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/LinkageError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ExceptionInInitializerError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExceptionInInitializerError, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExceptionInInitializerError, serialPersistentFields)},
	{}
};

$MethodInfo _ExceptionInInitializerError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExceptionInInitializerError::*)()>(&ExceptionInInitializerError::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ExceptionInInitializerError::*)($Throwable*)>(&ExceptionInInitializerError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ExceptionInInitializerError::*)($String*)>(&ExceptionInInitializerError::init$))},
	{"getException", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ExceptionInInitializerError::*)($ObjectInputStream*)>(&ExceptionInInitializerError::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ExceptionInInitializerError::*)($ObjectOutputStream*)>(&ExceptionInInitializerError::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _ExceptionInInitializerError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ExceptionInInitializerError",
	"java.lang.LinkageError",
	nullptr,
	_ExceptionInInitializerError_FieldInfo_,
	_ExceptionInInitializerError_MethodInfo_
};

$Object* allocate$ExceptionInInitializerError($Class* clazz) {
	return $of($alloc(ExceptionInInitializerError));
}


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
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Throwable, exception, $cast($Throwable, $nc(fields)->get("exception"_s, ($Object*)nullptr)));
	if (exception != nullptr) {
		setCause(exception);
	}
}

void ExceptionInInitializerError::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectOutputStream$PutField, fields, $nc(out)->putFields());
	$nc(fields)->put("exception"_s, $($of($LinkageError::getCause())));
	out->writeFields();
}

void clinit$ExceptionInInitializerError($Class* class$) {
	$load($Throwable);
	$assignStatic(ExceptionInInitializerError::serialPersistentFields, $new($ObjectStreamFieldArray, {$$new($ObjectStreamField, "exception"_s, $Throwable::class$)}));
}

ExceptionInInitializerError::ExceptionInInitializerError() {
}

ExceptionInInitializerError::ExceptionInInitializerError(const ExceptionInInitializerError& e) {
}

ExceptionInInitializerError ExceptionInInitializerError::wrapper$() {
	$pendingException(this);
	return *this;
}

void ExceptionInInitializerError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ExceptionInInitializerError::load$($String* name, bool initialize) {
	$loadClass(ExceptionInInitializerError, name, initialize, &_ExceptionInInitializerError_ClassInfo_, clinit$ExceptionInInitializerError, allocate$ExceptionInInitializerError);
	return class$;
}

$Class* ExceptionInInitializerError::class$ = nullptr;

	} // lang
} // java