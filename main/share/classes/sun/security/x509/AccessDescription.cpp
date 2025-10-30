#include <sun/security/x509/AccessDescription.h>

#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/GeneralName.h>
#include <jcpp.h>

#undef OCSP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $GeneralName = ::sun::security::x509::GeneralName;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _AccessDescription_FieldInfo_[] = {
	{"myhash", "I", nullptr, $PRIVATE, $field(AccessDescription, myhash)},
	{"accessMethod", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE, $field(AccessDescription, accessMethod)},
	{"accessLocation", "Lsun/security/x509/GeneralName;", nullptr, $PRIVATE, $field(AccessDescription, accessLocation)},
	{"Ad_OCSP_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessDescription, Ad_OCSP_Id)},
	{"Ad_CAISSUERS_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessDescription, Ad_CAISSUERS_Id)},
	{"Ad_TIMESTAMPING_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessDescription, Ad_TIMESTAMPING_Id)},
	{"Ad_CAREPOSITORY_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessDescription, Ad_CAREPOSITORY_Id)},
	{}
};

$MethodInfo _AccessDescription_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/ObjectIdentifier;Lsun/security/x509/GeneralName;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessDescription::*)($ObjectIdentifier*,$GeneralName*)>(&AccessDescription::init$))},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessDescription::*)($DerValue*)>(&AccessDescription::init$)), "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessDescription::*)($DerOutputStream*)>(&AccessDescription::encode)), "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAccessLocation", "()Lsun/security/x509/GeneralName;", nullptr, $PUBLIC, $method(static_cast<$GeneralName*(AccessDescription::*)()>(&AccessDescription::getAccessLocation))},
	{"getAccessMethod", "()Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC, $method(static_cast<$ObjectIdentifier*(AccessDescription::*)()>(&AccessDescription::getAccessMethod))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AccessDescription_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.x509.AccessDescription",
	"java.lang.Object",
	nullptr,
	_AccessDescription_FieldInfo_,
	_AccessDescription_MethodInfo_
};

$Object* allocate$AccessDescription($Class* clazz) {
	return $of($alloc(AccessDescription));
}

$ObjectIdentifier* AccessDescription::Ad_OCSP_Id = nullptr;
$ObjectIdentifier* AccessDescription::Ad_CAISSUERS_Id = nullptr;
$ObjectIdentifier* AccessDescription::Ad_TIMESTAMPING_Id = nullptr;
$ObjectIdentifier* AccessDescription::Ad_CAREPOSITORY_Id = nullptr;

void AccessDescription::init$($ObjectIdentifier* accessMethod, $GeneralName* accessLocation) {
	this->myhash = -1;
	$set(this, accessMethod, accessMethod);
	$set(this, accessLocation, accessLocation);
}

void AccessDescription::init$($DerValue* derValue) {
	$useLocalCurrentObjectStackCache();
	this->myhash = -1;
	$var($DerInputStream, derIn, $nc(derValue)->getData());
	$set(this, accessMethod, $nc(derIn)->getOID());
	$set(this, accessLocation, $new($GeneralName, $(derIn->getDerValue())));
}

$ObjectIdentifier* AccessDescription::getAccessMethod() {
	return this->accessMethod;
}

$GeneralName* AccessDescription::getAccessLocation() {
	return this->accessLocation;
}

void AccessDescription::encode($DerOutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	tmp->putOID(this->accessMethod);
	$nc(this->accessLocation)->encode(tmp);
	$nc(out)->write($DerValue::tag_Sequence, tmp);
}

int32_t AccessDescription::hashCode() {
	if (this->myhash == -1) {
		int32_t var$0 = $nc(this->accessMethod)->hashCode();
		this->myhash = var$0 + $nc(this->accessLocation)->hashCode();
	}
	return this->myhash;
}

bool AccessDescription::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (obj == nullptr || (!($instanceOf(AccessDescription, obj)))) {
		return false;
	}
	$var(AccessDescription, that, $cast(AccessDescription, obj));
	if (this == that) {
		return true;
	}
	bool var$0 = $nc(this->accessMethod)->equals($($nc(that)->getAccessMethod()));
	return (var$0 && $nc(this->accessLocation)->equals($($nc(that)->getAccessLocation())));
}

$String* AccessDescription::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, method, nullptr);
	if ($nc(this->accessMethod)->equals(AccessDescription::Ad_CAISSUERS_Id)) {
		$assign(method, "caIssuers"_s);
	} else if ($nc(this->accessMethod)->equals(AccessDescription::Ad_CAREPOSITORY_Id)) {
		$assign(method, "caRepository"_s);
	} else if ($nc(this->accessMethod)->equals(AccessDescription::Ad_TIMESTAMPING_Id)) {
		$assign(method, "timeStamping"_s);
	} else if ($nc(this->accessMethod)->equals(AccessDescription::Ad_OCSP_Id)) {
		$assign(method, "ocsp"_s);
	} else {
		$assign(method, $nc(this->accessMethod)->toString());
	}
	return ($str({"\n   accessMethod: "_s, method, "\n   accessLocation: "_s, $($nc(this->accessLocation)->toString()), "\n"_s}));
}

void clinit$AccessDescription($Class* class$) {
	$init($KnownOIDs);
	$assignStatic(AccessDescription::Ad_OCSP_Id, $ObjectIdentifier::of($KnownOIDs::OCSP));
	$assignStatic(AccessDescription::Ad_CAISSUERS_Id, $ObjectIdentifier::of($KnownOIDs::caIssuers));
	$assignStatic(AccessDescription::Ad_TIMESTAMPING_Id, $ObjectIdentifier::of($KnownOIDs::AD_TimeStamping));
	$assignStatic(AccessDescription::Ad_CAREPOSITORY_Id, $ObjectIdentifier::of($KnownOIDs::caRepository));
}

AccessDescription::AccessDescription() {
}

$Class* AccessDescription::load$($String* name, bool initialize) {
	$loadClass(AccessDescription, name, initialize, &_AccessDescription_ClassInfo_, clinit$AccessDescription, allocate$AccessDescription);
	return class$;
}

$Class* AccessDescription::class$ = nullptr;

		} // x509
	} // security
} // sun