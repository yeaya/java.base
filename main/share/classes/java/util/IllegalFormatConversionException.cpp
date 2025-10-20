#include <java/util/IllegalFormatConversionException.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

$FieldInfo _IllegalFormatConversionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatConversionException, serialVersionUID)},
	{"c", "C", nullptr, $PRIVATE, $field(IllegalFormatConversionException, c)},
	{"arg", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(IllegalFormatConversionException, arg)},
	{}
};

$MethodInfo _IllegalFormatConversionException_MethodInfo_[] = {
	{"<init>", "(CLjava/lang/Class;)V", "(CLjava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(IllegalFormatConversionException::*)(char16_t,$Class*)>(&IllegalFormatConversionException::init$))},
	{"getArgumentClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getConversion", "()C", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IllegalFormatConversionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.IllegalFormatConversionException",
	"java.util.IllegalFormatException",
	nullptr,
	_IllegalFormatConversionException_FieldInfo_,
	_IllegalFormatConversionException_MethodInfo_
};

$Object* allocate$IllegalFormatConversionException($Class* clazz) {
	return $of($alloc(IllegalFormatConversionException));
}

void IllegalFormatConversionException::init$(char16_t c, $Class* arg) {
	$IllegalFormatException::init$();
	if (arg == nullptr) {
		$throwNew($NullPointerException);
	}
	this->c = c;
	$set(this, arg, arg);
}

char16_t IllegalFormatConversionException::getConversion() {
	return this->c;
}

$Class* IllegalFormatConversionException::getArgumentClass() {
	return this->arg;
}

$String* IllegalFormatConversionException::getMessage() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%c != %s"_s, $$new($ObjectArray, {
		$($of($Character::valueOf(this->c))),
		$($of($nc(this->arg)->getName()))
	}));
}

IllegalFormatConversionException::IllegalFormatConversionException() {
}

IllegalFormatConversionException::IllegalFormatConversionException(const IllegalFormatConversionException& e) {
}

IllegalFormatConversionException IllegalFormatConversionException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalFormatConversionException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalFormatConversionException::load$($String* name, bool initialize) {
	$loadClass(IllegalFormatConversionException, name, initialize, &_IllegalFormatConversionException_ClassInfo_, allocate$IllegalFormatConversionException);
	return class$;
}

$Class* IllegalFormatConversionException::class$ = nullptr;

	} // util
} // java