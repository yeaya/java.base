#include <sun/security/pkcs/ContentInfo.h>

#include <java/io/IOException.h>
#include <sun/security/pkcs/ParsingException.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

#undef DATA_OID
#undef DIGESTED_DATA_OID
#undef ENCRYPTED_DATA_OID
#undef ENVELOPED_DATA_OID
#undef NETSCAPE_CERT_SEQUENCE_OID
#undef OLD_DATA_OID
#undef OLD_SIGNED_DATA_OID
#undef PKCS7
#undef PKCS7_OID
#undef SIGNED_AND_ENVELOPED_DATA_OID
#undef SIGNED_DATA_OID
#undef TIMESTAMP_TOKEN_INFO_OID

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsingException = ::sun::security::pkcs::ParsingException;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace pkcs {

$FieldInfo _ContentInfo_FieldInfo_[] = {
	{"PKCS7_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, PKCS7_OID)},
	{"DATA_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, DATA_OID)},
	{"SIGNED_DATA_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, SIGNED_DATA_OID)},
	{"ENVELOPED_DATA_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, ENVELOPED_DATA_OID)},
	{"SIGNED_AND_ENVELOPED_DATA_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, SIGNED_AND_ENVELOPED_DATA_OID)},
	{"DIGESTED_DATA_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, DIGESTED_DATA_OID)},
	{"ENCRYPTED_DATA_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, ENCRYPTED_DATA_OID)},
	{"OLD_SIGNED_DATA_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, OLD_SIGNED_DATA_OID)},
	{"OLD_DATA_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, OLD_DATA_OID)},
	{"NETSCAPE_CERT_SEQUENCE_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, NETSCAPE_CERT_SEQUENCE_OID)},
	{"TIMESTAMP_TOKEN_INFO_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(ContentInfo, TIMESTAMP_TOKEN_INFO_OID)},
	{"contentType", "Lsun/security/util/ObjectIdentifier;", nullptr, 0, $field(ContentInfo, contentType)},
	{"content", "Lsun/security/util/DerValue;", nullptr, 0, $field(ContentInfo, content)},
	{}
};

$MethodInfo _ContentInfo_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/ObjectIdentifier;Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(ContentInfo::*)($ObjectIdentifier*,$DerValue*)>(&ContentInfo::init$))},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(ContentInfo::*)($bytes*)>(&ContentInfo::init$))},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ContentInfo::*)($DerInputStream*)>(&ContentInfo::init$)), "java.io.IOException,sun.security.pkcs.ParsingException"},
	{"<init>", "(Lsun/security/util/DerInputStream;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ContentInfo::*)($DerInputStream*,bool)>(&ContentInfo::init$)), "java.io.IOException,sun.security.pkcs.ParsingException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getContent", "()Lsun/security/util/DerValue;", nullptr, $PUBLIC},
	{"getContentBytes", "()[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getContentType", "()Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC},
	{"getData", "()[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ContentInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.pkcs.ContentInfo",
	"java.lang.Object",
	nullptr,
	_ContentInfo_FieldInfo_,
	_ContentInfo_MethodInfo_
};

$Object* allocate$ContentInfo($Class* clazz) {
	return $of($alloc(ContentInfo));
}

$ObjectIdentifier* ContentInfo::PKCS7_OID = nullptr;
$ObjectIdentifier* ContentInfo::DATA_OID = nullptr;
$ObjectIdentifier* ContentInfo::SIGNED_DATA_OID = nullptr;
$ObjectIdentifier* ContentInfo::ENVELOPED_DATA_OID = nullptr;
$ObjectIdentifier* ContentInfo::SIGNED_AND_ENVELOPED_DATA_OID = nullptr;
$ObjectIdentifier* ContentInfo::DIGESTED_DATA_OID = nullptr;
$ObjectIdentifier* ContentInfo::ENCRYPTED_DATA_OID = nullptr;
$ObjectIdentifier* ContentInfo::OLD_SIGNED_DATA_OID = nullptr;
$ObjectIdentifier* ContentInfo::OLD_DATA_OID = nullptr;
$ObjectIdentifier* ContentInfo::NETSCAPE_CERT_SEQUENCE_OID = nullptr;
$ObjectIdentifier* ContentInfo::TIMESTAMP_TOKEN_INFO_OID = nullptr;

void ContentInfo::init$($ObjectIdentifier* contentType, $DerValue* content) {
	$set(this, contentType, contentType);
	$set(this, content, content);
}

void ContentInfo::init$($bytes* bytes) {
	$var($DerValue, octetString, $new($DerValue, $DerValue::tag_OctetString, bytes));
	$set(this, contentType, ContentInfo::DATA_OID);
	$set(this, content, octetString);
}

void ContentInfo::init$($DerInputStream* derin) {
	ContentInfo::init$(derin, false);
}

void ContentInfo::init$($DerInputStream* derin, bool oldStyle) {
	$useLocalCurrentObjectStackCache();
	$var($DerInputStream, disType, nullptr);
	$var($DerInputStream, disTaggedContent, nullptr);
	$var($DerValue, type, nullptr);
	$var($DerValue, taggedContent, nullptr);
	$var($DerValueArray, typeAndContent, nullptr);
	$var($DerValueArray, contents, nullptr);
	$assign(typeAndContent, $nc(derin)->getSequence(2));
	if ($nc(typeAndContent)->length < 1 || $nc(typeAndContent)->length > 2) {
		$throwNew($ParsingException, "Invalid length for ContentInfo"_s);
	}
	$assign(type, $nc(typeAndContent)->get(0));
	$assign(disType, $new($DerInputStream, $($nc(type)->toByteArray())));
	$set(this, contentType, disType->getOID());
	if (oldStyle) {
		$set(this, content, typeAndContent->get(1));
	} else if (typeAndContent->length > 1) {
		$assign(taggedContent, typeAndContent->get(1));
		$assign(disTaggedContent, $new($DerInputStream, $($nc(taggedContent)->toByteArray())));
		$assign(contents, disTaggedContent->getSet(1, true));
		if ($nc(contents)->length != 1) {
			$throwNew($ParsingException, "ContentInfo encoding error"_s);
		}
		$set(this, content, $nc(contents)->get(0));
	}
}

$DerValue* ContentInfo::getContent() {
	return this->content;
}

$ObjectIdentifier* ContentInfo::getContentType() {
	return this->contentType;
}

$bytes* ContentInfo::getData() {
	bool var$1 = $nc(this->contentType)->equals(ContentInfo::DATA_OID);
	bool var$0 = var$1 || $nc(this->contentType)->equals(ContentInfo::OLD_DATA_OID);
	if (var$0 || $nc(this->contentType)->equals(ContentInfo::TIMESTAMP_TOKEN_INFO_OID)) {
		if (this->content == nullptr) {
			return nullptr;
		} else {
			return $nc(this->content)->getOctetString();
		}
	}
	$throwNew($IOException, $$str({"content type is not DATA: "_s, this->contentType}));
}

void ContentInfo::encode($DerOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, contentDerCode, nullptr);
	$var($DerOutputStream, seq, nullptr);
	$assign(seq, $new($DerOutputStream));
	seq->putOID(this->contentType);
	if (this->content != nullptr) {
		$var($DerValue, taggedContent, nullptr);
		$assign(contentDerCode, $new($DerOutputStream));
		$nc(this->content)->encode(contentDerCode);
		$assign(taggedContent, $new($DerValue, (int8_t)160, $(contentDerCode->toByteArray())));
		seq->putDerValue(taggedContent);
	}
	$nc(out)->write($DerValue::tag_Sequence, seq);
}

$bytes* ContentInfo::getContentBytes() {
	$useLocalCurrentObjectStackCache();
	if (this->content == nullptr) {
		return nullptr;
	}
	$var($DerValue, v, $new($DerValue, $($nc(this->content)->toByteArray())));
	return v->getOctetString();
}

$String* ContentInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, out, ""_s);
	$plusAssign(out, $$str({"Content Info Sequence\n\tContent type: "_s, this->contentType, "\n"_s}));
	$plusAssign(out, $$str({"\tContent: "_s, this->content}));
	return out;
}

void clinit$ContentInfo($Class* class$) {
	$init($KnownOIDs);
	$assignStatic(ContentInfo::PKCS7_OID, $ObjectIdentifier::of($KnownOIDs::PKCS7));
	$assignStatic(ContentInfo::DATA_OID, $ObjectIdentifier::of($KnownOIDs::Data));
	$assignStatic(ContentInfo::SIGNED_DATA_OID, $ObjectIdentifier::of($KnownOIDs::SignedData));
	$assignStatic(ContentInfo::ENVELOPED_DATA_OID, $ObjectIdentifier::of($KnownOIDs::EnvelopedData));
	$assignStatic(ContentInfo::SIGNED_AND_ENVELOPED_DATA_OID, $ObjectIdentifier::of($KnownOIDs::SignedAndEnvelopedData));
	$assignStatic(ContentInfo::DIGESTED_DATA_OID, $ObjectIdentifier::of($KnownOIDs::DigestedData));
	$assignStatic(ContentInfo::ENCRYPTED_DATA_OID, $ObjectIdentifier::of($KnownOIDs::EncryptedData));
	$assignStatic(ContentInfo::OLD_SIGNED_DATA_OID, $ObjectIdentifier::of($KnownOIDs::JDK_OLD_SignedData));
	$assignStatic(ContentInfo::OLD_DATA_OID, $ObjectIdentifier::of($KnownOIDs::JDK_OLD_Data));
	$assignStatic(ContentInfo::NETSCAPE_CERT_SEQUENCE_OID, $ObjectIdentifier::of($KnownOIDs::NETSCAPE_CertSequence));
	$assignStatic(ContentInfo::TIMESTAMP_TOKEN_INFO_OID, $ObjectIdentifier::of($KnownOIDs::TimeStampTokenInfo));
}

ContentInfo::ContentInfo() {
}

$Class* ContentInfo::load$($String* name, bool initialize) {
	$loadClass(ContentInfo, name, initialize, &_ContentInfo_ClassInfo_, clinit$ContentInfo, allocate$ContentInfo);
	return class$;
}

$Class* ContentInfo::class$ = nullptr;

		} // pkcs
	} // security
} // sun