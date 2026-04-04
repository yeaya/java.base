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
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace pkcs {

void SigningCertificateInfo::init$($bytes* ber) {
	$set(this, ber, nullptr);
	$set(this, certId, nullptr);
	parse(ber);
}

$String* SigningCertificateInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("[\n"_s);
	for (int32_t i = 0; i < $nc(this->certId)->length; ++i) {
		sb->append($($nc(this->certId->get(i))->toString()));
	}
	sb->append("\n]"_s);
	return sb->toString();
}

void SigningCertificateInfo::parse($bytes* bytes) {
	$useLocalObjectStack();
	$var($DerValue, derValue, $new($DerValue, bytes));
	if (derValue->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Bad encoding for signingCertificate"_s);
	}
	$var($DerValueArray, certs, $nc(derValue->data$)->getSequence(1));
	$set(this, certId, $new($ESSCertIdArray, $nc(certs)->length));
	for (int32_t i = 0; i < certs->length; ++i) {
		this->certId->set(i, $$new($ESSCertId, certs->get(i)));
	}
	if (derValue->data$->available() > 0) {
		$var($DerValueArray, policies, derValue->data$->getSequence(1));
		for (int32_t i = 0; i < $nc(policies)->length; ++i) {
		}
	}
}

SigningCertificateInfo::SigningCertificateInfo() {
}

$Class* SigningCertificateInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ber", "[B", nullptr, $PRIVATE, $field(SigningCertificateInfo, ber)},
		{"certId", "[Lsun/security/pkcs/ESSCertId;", nullptr, $PRIVATE, $field(SigningCertificateInfo, certId)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(SigningCertificateInfo, init$, void, $bytes*), "java.io.IOException"},
		{"parse", "([B)V", nullptr, $PUBLIC, $virtualMethod(SigningCertificateInfo, parse, void, $bytes*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SigningCertificateInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.pkcs.SigningCertificateInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SigningCertificateInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SigningCertificateInfo);
	});
	return class$;
}

$Class* SigningCertificateInfo::class$ = nullptr;

		} // pkcs
	} // security
} // sun