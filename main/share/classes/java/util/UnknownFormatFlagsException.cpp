#include <java/util/UnknownFormatFlagsException.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

void UnknownFormatFlagsException::init$($String* f) {
	$IllegalFormatException::init$();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, flags, f);
}

$String* UnknownFormatFlagsException::getFlags() {
	return this->flags;
}

$String* UnknownFormatFlagsException::getMessage() {
	return $str({"Flags = "_s, this->flags});
}

UnknownFormatFlagsException::UnknownFormatFlagsException() {
}

UnknownFormatFlagsException::UnknownFormatFlagsException(const UnknownFormatFlagsException& e) : $IllegalFormatException(e) {
}

void UnknownFormatFlagsException::throw$() {
	throw *this;
}

$Class* UnknownFormatFlagsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownFormatFlagsException, serialVersionUID)},
		{"flags", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnknownFormatFlagsException, flags)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnknownFormatFlagsException, init$, void, $String*)},
		{"getFlags", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnknownFormatFlagsException, getFlags, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnknownFormatFlagsException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.UnknownFormatFlagsException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownFormatFlagsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownFormatFlagsException);
	});
	return class$;
}

$Class* UnknownFormatFlagsException::class$ = nullptr;

	} // util
} // java