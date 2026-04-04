#include <java/util/zip/DataFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace zip {

void DataFormatException::init$() {
	$Exception::init$();
}

void DataFormatException::init$($String* s) {
	$Exception::init$(s);
}

DataFormatException::DataFormatException() {
}

DataFormatException::DataFormatException(const DataFormatException& e) : $Exception(e) {
}

void DataFormatException::throw$() {
	throw *this;
}

$Class* DataFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DataFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DataFormatException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DataFormatException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.zip.DataFormatException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DataFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DataFormatException);
	});
	return class$;
}

$Class* DataFormatException::class$ = nullptr;

		} // zip
	} // util
} // java