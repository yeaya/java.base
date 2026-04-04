#include <sun/security/x509/X509AttributeName.h>
#include <jcpp.h>

#undef SEPARATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace x509 {

void X509AttributeName::init$($String* name) {
	$set(this, prefix, nullptr);
	$set(this, suffix, nullptr);
	int32_t i = $nc(name)->indexOf(X509AttributeName::SEPARATOR);
	if (i < 0) {
		$set(this, prefix, name);
	} else {
		$set(this, prefix, name->substring(0, i));
		$set(this, suffix, name->substring(i + 1));
	}
}

$String* X509AttributeName::getPrefix() {
	return (this->prefix);
}

$String* X509AttributeName::getSuffix() {
	return (this->suffix);
}

X509AttributeName::X509AttributeName() {
}

$Class* X509AttributeName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SEPARATOR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X509AttributeName, SEPARATOR)},
		{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(X509AttributeName, prefix)},
		{"suffix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(X509AttributeName, suffix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(X509AttributeName, init$, void, $String*)},
		{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(X509AttributeName, getPrefix, $String*)},
		{"getSuffix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(X509AttributeName, getSuffix, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.x509.X509AttributeName",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(X509AttributeName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509AttributeName);
	});
	return class$;
}

$Class* X509AttributeName::class$ = nullptr;

		} // x509
	} // security
} // sun