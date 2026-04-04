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
using $DerValue = ::sun::security::util::DerValue;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace java {
	namespace security {
		namespace cert {

void PolicyQualifierInfo::init$($bytes* encoded) {
	$useLocalObjectStack();
	$set(this, mEncoded, $cast($bytes, $nc(encoded)->clone()));
	$var($DerValue, val, $new($DerValue, this->mEncoded));
	if (val->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for PolicyQualifierInfo"_s);
	}
	$set(this, mId, $$nc(($$nc($nc(val->data$)->getDerValue()))->getOID())->toString());
	$var($bytes, tmp, val->data$->toByteArray());
	if (tmp == nullptr) {
		$set(this, mData, nullptr);
	} else {
		$set(this, mData, $new($bytes, tmp->length));
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
	return (this->mData == nullptr ? ($bytes*)nullptr : $cast($bytes, this->mData->clone()));
}

$String* PolicyQualifierInfo::toString() {
	$useLocalObjectStack();
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
	$FieldInfo fieldInfos$$[] = {
		{"mEncoded", "[B", nullptr, $PRIVATE, $field(PolicyQualifierInfo, mEncoded)},
		{"mId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PolicyQualifierInfo, mId)},
		{"mData", "[B", nullptr, $PRIVATE, $field(PolicyQualifierInfo, mData)},
		{"pqiString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PolicyQualifierInfo, pqiString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(PolicyQualifierInfo, init$, void, $bytes*), "java.io.IOException"},
		{"getEncoded", "()[B", nullptr, $PUBLIC | $FINAL, $method(PolicyQualifierInfo, getEncoded, $bytes*)},
		{"getPolicyQualifier", "()[B", nullptr, $PUBLIC | $FINAL, $method(PolicyQualifierInfo, getPolicyQualifier, $bytes*)},
		{"getPolicyQualifierId", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(PolicyQualifierInfo, getPolicyQualifierId, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyQualifierInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.cert.PolicyQualifierInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PolicyQualifierInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyQualifierInfo);
	});
	return class$;
}

$Class* PolicyQualifierInfo::class$ = nullptr;

		} // cert
	} // security
} // java