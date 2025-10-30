#include <sun/security/pkcs/SigningCertificateInfo.h>

#include <java/io/IOException.h>
#include <sun/security/pkcs/ESSCertId.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

using $ESSCertIdArray = $Array<::sun::security::pkcs::ESSCertId>;
using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ESSCertId = ::sun::security::pkcs::ESSCertId;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace pkcs {

$FieldInfo _SigningCertificateInfo_FieldInfo_[] = {
	{"ber", "[B", nullptr, $PRIVATE, $field(SigningCertificateInfo, ber)},
	{"certId", "[Lsun/security/pkcs/ESSCertId;", nullptr, $PRIVATE, $field(SigningCertificateInfo, certId)},
	{}
};

$MethodInfo _SigningCertificateInfo_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(SigningCertificateInfo::*)($bytes*)>(&SigningCertificateInfo::init$)), "java.io.IOException"},
	{"parse", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SigningCertificateInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.pkcs.SigningCertificateInfo",
	"java.lang.Object",
	nullptr,
	_SigningCertificateInfo_FieldInfo_,
	_SigningCertificateInfo_MethodInfo_
};

$Object* allocate$SigningCertificateInfo($Class* clazz) {
	return $of($alloc(SigningCertificateInfo));
}

void SigningCertificateInfo::init$($bytes* ber) {
	$set(this, ber, nullptr);
	$set(this, certId, nullptr);
	parse(ber);
}

$String* SigningCertificateInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("[\n"_s);
	for (int32_t i = 0; i < $nc(this->certId)->length; ++i) {
		sb->append($($nc($nc(this->certId)->get(i))->toString()));
	}
	sb->append("\n]"_s);
	return sb->toString();
}

void SigningCertificateInfo::parse($bytes* bytes) {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, derValue, $new($DerValue, bytes));
	if (derValue->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Bad encoding for signingCertificate"_s);
	}
	$var($DerValueArray, certs, $nc(derValue->data$)->getSequence(1));
	$set(this, certId, $new($ESSCertIdArray, $nc(certs)->length));
	for (int32_t i = 0; i < certs->length; ++i) {
		$nc(this->certId)->set(i, $$new($ESSCertId, certs->get(i)));
	}
	if ($nc(derValue->data$)->available() > 0) {
		$var($DerValueArray, policies, $nc(derValue->data$)->getSequence(1));
		for (int32_t i = 0; i < $nc(policies)->length; ++i) {
		}
	}
}

SigningCertificateInfo::SigningCertificateInfo() {
}

$Class* SigningCertificateInfo::load$($String* name, bool initialize) {
	$loadClass(SigningCertificateInfo, name, initialize, &_SigningCertificateInfo_ClassInfo_, allocate$SigningCertificateInfo);
	return class$;
}

$Class* SigningCertificateInfo::class$ = nullptr;

		} // pkcs
	} // security
} // sun