#include <sun/security/util/PropertyExpander$ExpandException.h>
#include <java/security/GeneralSecurityException.h>
#include <sun/security/util/PropertyExpander.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace sun {
	namespace security {
		namespace util {

void PropertyExpander$ExpandException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

PropertyExpander$ExpandException::PropertyExpander$ExpandException() {
}

PropertyExpander$ExpandException::PropertyExpander$ExpandException(const PropertyExpander$ExpandException& e) : $GeneralSecurityException(e) {
}

void PropertyExpander$ExpandException::throw$() {
	throw *this;
}

$Class* PropertyExpander$ExpandException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyExpander$ExpandException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PropertyExpander$ExpandException, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.PropertyExpander$ExpandException", "sun.security.util.PropertyExpander", "ExpandException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.PropertyExpander$ExpandException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.PropertyExpander"
	};
	$loadClass(PropertyExpander$ExpandException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyExpander$ExpandException);
	});
	return class$;
}

$Class* PropertyExpander$ExpandException::class$ = nullptr;

		} // util
	} // security
} // sun