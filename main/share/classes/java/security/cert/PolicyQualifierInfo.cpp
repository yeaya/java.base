#include <java/security/cert/PolicyQualifierInfo.h>

#include <java/io/IOException.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerValue = ::sun::security::util::DerValue;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _PolicyQualifierInfo_FieldInfo_[] = {
	{"mEncoded", "[B", nullptr, $PRIVATE, $field(PolicyQualifierInfo, mEncoded)},
	{"mId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PolicyQualifierInfo, mId)},
	{"mData", "[B", nullptr, $PRIVATE, $field(PolicyQualifierInfo, mData)},
	{"pqiString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PolicyQualifierInfo, pqiString)},
	{}
};

$MethodInfo _PolicyQualifierInfo_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyQualifierInfo::*)($bytes*)>(&PolicyQualifierInfo::init$)), "java.io.IOException"},
	{"getEncoded", "()[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(PolicyQualifierInfo::*)()>(&PolicyQualifierInfo::getEncoded))},
	{"getPolicyQualifier", "()[B", nullptr, $PUBLIC | $FINAL, $method(static_cast<$bytes*(PolicyQualifierInfo::*)()>(&PolicyQualifierInfo::getPolicyQualifier))},
	{"getPolicyQualifierId", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(PolicyQualifierInfo::*)()>(&PolicyQualifierInfo::getPolicyQualifierId))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PolicyQualifierInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.PolicyQualifierInfo",
	"java.lang.Object",
	nullptr,
	_PolicyQualifierInfo_FieldInfo_,
	_PolicyQualifierInfo_MethodInfo_
};

$Object* allocate$PolicyQualifierInfo($Class* clazz) {
	return $of($alloc(PolicyQualifierInfo));
}

void PolicyQualifierInfo::init$($bytes* encoded) {
	$useLocalCurrentObjectStackCache();
	$set(this, mEncoded, $cast($bytes, $nc(encoded)->clone()));
	$var($DerValue, val, $new($DerValue, this->mEncoded));
	if (val->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for PolicyQualifierInfo"_s);
	}
	$set(this, mId, $nc($($nc(($($nc(val->data$)->getDerValue())))->getOID()))->toString());
	$var($bytes, tmp, $nc(val->data$)->toByteArray());
	if (tmp == nullptr) {
		$set(this, mData, nullptr);
	} else {
		$set(this, mData, $new($bytes, $nc(tmp)->length));
		$System::arraycopy(tmp, 0, this->mData, 0, tmp->length);
	}
}

$String* PolicyQualifierInfo::getPolicyQualifierId() {
	return this->mId;
}

$bytes* PolicyQualifierInfo::getEncoded() {
	return $cast($bytes, $nc(this->mEncoded)->clone());
}

$bytes* PolicyQualifierInfo::getPolicyQualifier() {
	return (this->mData == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(this->mData)->clone()));
}

$String* PolicyQualifierInfo::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->pqiString != nullptr) {
		return this->pqiString;
	}
	$var($HexDumpEncoder, enc, $new($HexDumpEncoder));
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("PolicyQualifierInfo: [\n"_s);
	sb->append($$str({"  qualifierID: "_s, this->mId, "\n"_s}));
	sb->append($$str({"  qualifier: "_s, (this->mData == nullptr ? "null"_s : $(enc->encodeBuffer(this->mData))), "\n"_s}));
	sb->append("]"_s);
	$set(this, pqiString, sb->toString());
	return this->pqiString;
}

PolicyQualifierInfo::PolicyQualifierInfo() {
}

$Class* PolicyQualifierInfo::load$($String* name, bool initialize) {
	$loadClass(PolicyQualifierInfo, name, initialize, &_PolicyQualifierInfo_ClassInfo_, allocate$PolicyQualifierInfo);
	return class$;
}

$Class* PolicyQualifierInfo::class$ = nullptr;

		} // cert
	} // security
} // java