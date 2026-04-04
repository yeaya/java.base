#include <java/util/IllegalFormatConversionException.h>
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
	$useLocalObjectStack();
	return $String::format("%c != %s"_s, $$new($ObjectArray, {
		$($Character::valueOf(this->c)),
		$($nc(this->arg)->getName())
	}));
}

IllegalFormatConversionException::IllegalFormatConversionException() {
}

IllegalFormatConversionException::IllegalFormatConversionException(const IllegalFormatConversionException& e) : $IllegalFormatException(e) {
}

void IllegalFormatConversionException::throw$() {
	throw *this;
}

$Class* IllegalFormatConversionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatConversionException, serialVersionUID)},
		{"c", "C", nullptr, $PRIVATE, $field(IllegalFormatConversionException, c)},
		{"arg", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(IllegalFormatConversionException, arg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(CLjava/lang/Class;)V", "(CLjava/lang/Class<*>;)V", $PUBLIC, $method(IllegalFormatConversionException, init$, void, char16_t, $Class*)},
		{"getArgumentClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(IllegalFormatConversionException, getArgumentClass, $Class*)},
		{"getConversion", "()C", nullptr, $PUBLIC, $virtualMethod(IllegalFormatConversionException, getConversion, char16_t)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IllegalFormatConversionException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.IllegalFormatConversionException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalFormatConversionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalFormatConversionException);
	});
	return class$;
}

$Class* IllegalFormatConversionException::class$ = nullptr;

	} // util
} // java