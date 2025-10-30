#include <sun/security/x509/X509AttributeName.h>

#include <jcpp.h>

#undef SEPARATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _X509AttributeName_FieldInfo_[] = {
	{"SEPARATOR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(X509AttributeName, SEPARATOR)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(X509AttributeName, prefix)},
	{"suffix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(X509AttributeName, suffix)},
	{}
};

$MethodInfo _X509AttributeName_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(X509AttributeName::*)($String*)>(&X509AttributeName::init$))},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSuffix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _X509AttributeName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.X509AttributeName",
	"java.lang.Object",
	nullptr,
	_X509AttributeName_FieldInfo_,
	_X509AttributeName_MethodInfo_
};

$Object* allocate$X509AttributeName($Class* clazz) {
	return $of($alloc(X509AttributeName));
}

void X509AttributeName::init$($String* name) {
	$set(this, prefix, nullptr);
	$set(this, suffix, nullptr);
	int32_t i = $nc(name)->indexOf((int32_t)X509AttributeName::SEPARATOR);
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
	$loadClass(X509AttributeName, name, initialize, &_X509AttributeName_ClassInfo_, allocate$X509AttributeName);
	return class$;
}

$Class* X509AttributeName::class$ = nullptr;

		} // x509
	} // security
} // sun