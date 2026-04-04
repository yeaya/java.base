#include <sun/security/timestamp/TSResponse$TimestampException.h>
#include <java/io/IOException.h>
#include <sun/security/timestamp/TSResponse.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace timestamp {

void TSResponse$TimestampException::init$($String* message) {
	$IOException::init$(message);
}

TSResponse$TimestampException::TSResponse$TimestampException() {
}

TSResponse$TimestampException::TSResponse$TimestampException(const TSResponse$TimestampException& e) : $IOException(e) {
}

void TSResponse$TimestampException::throw$() {
	throw *this;
}

$Class* TSResponse$TimestampException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TSResponse$TimestampException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(TSResponse$TimestampException, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.timestamp.TSResponse$TimestampException", "sun.security.timestamp.TSResponse", "TimestampException", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.timestamp.TSResponse$TimestampException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.timestamp.TSResponse"
	};
	$loadClass(TSResponse$TimestampException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TSResponse$TimestampException);
	});
	return class$;
}

$Class* TSResponse$TimestampException::class$ = nullptr;

		} // timestamp
	} // security
} // sun