#include <java/util/DuplicateFormatFlagsException.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

void DuplicateFormatFlagsException::init$($String* f) {
	$IllegalFormatException::init$();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, flags, f);
}

$String* DuplicateFormatFlagsException::getFlags() {
	return this->flags;
}

$String* DuplicateFormatFlagsException::getMessage() {
	return $String::format("Flags = \'%s\'"_s, $$new($ObjectArray, {this->flags}));
}

DuplicateFormatFlagsException::DuplicateFormatFlagsException() {
}

DuplicateFormatFlagsException::DuplicateFormatFlagsException(const DuplicateFormatFlagsException& e) : $IllegalFormatException(e) {
}

void DuplicateFormatFlagsException::throw$() {
	throw *this;
}

$Class* DuplicateFormatFlagsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DuplicateFormatFlagsException, serialVersionUID)},
		{"flags", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DuplicateFormatFlagsException, flags)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DuplicateFormatFlagsException, init$, void, $String*)},
		{"getFlags", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DuplicateFormatFlagsException, getFlags, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DuplicateFormatFlagsException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.DuplicateFormatFlagsException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DuplicateFormatFlagsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DuplicateFormatFlagsException);
	});
	return class$;
}

$Class* DuplicateFormatFlagsException::class$ = nullptr;

	} // util
} // java