#include <java/util/IllegalFormatFlagsException.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

void IllegalFormatFlagsException::init$($String* f) {
	$IllegalFormatException::init$();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, flags, f);
}

$String* IllegalFormatFlagsException::getFlags() {
	return this->flags;
}

$String* IllegalFormatFlagsException::getMessage() {
	return $str({"Flags = \'"_s, this->flags, "\'"_s});
}

IllegalFormatFlagsException::IllegalFormatFlagsException() {
}

IllegalFormatFlagsException::IllegalFormatFlagsException(const IllegalFormatFlagsException& e) : $IllegalFormatException(e) {
}

void IllegalFormatFlagsException::throw$() {
	throw *this;
}

$Class* IllegalFormatFlagsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatFlagsException, serialVersionUID)},
		{"flags", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IllegalFormatFlagsException, flags)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalFormatFlagsException, init$, void, $String*)},
		{"getFlags", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IllegalFormatFlagsException, getFlags, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IllegalFormatFlagsException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.IllegalFormatFlagsException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalFormatFlagsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalFormatFlagsException);
	});
	return class$;
}

$Class* IllegalFormatFlagsException::class$ = nullptr;

	} // util
} // java