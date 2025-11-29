#include <sun/security/x509/NetscapeCertTypeExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/KeyUsageExtension.h>
#include <sun/security/x509/NetscapeCertTypeExtension$MapEntry.h>
#include <jcpp.h>

#undef DIGITAL_SIGNATURE
#undef IDENT
#undef KEY_CERTSIGN
#undef KEY_ENCIPHERMENT
#undef NAME
#undef OBJECT_SIGNING
#undef OBJECT_SIGNING_CA
#undef SSL_CA
#undef SSL_CLIENT
#undef SSL_SERVER
#undef S_MIME
#undef S_MIME_CA
#undef TRUE

using $NetscapeCertTypeExtension$MapEntryArray = $Array<::sun::security::x509::NetscapeCertTypeExtension$MapEntry>;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $BitArray = ::sun::security::util::BitArray;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $Extension = ::sun::security::x509::Extension;
using $KeyUsageExtension = ::sun::security::x509::KeyUsageExtension;
using $NetscapeCertTypeExtension$MapEntry = ::sun::security::x509::NetscapeCertTypeExtension$MapEntry;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _NetscapeCertTypeExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NetscapeCertTypeExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NetscapeCertTypeExtension, NAME)},
	{"SSL_CLIENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NetscapeCertTypeExtension, SSL_CLIENT)},
	{"SSL_SERVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NetscapeCertTypeExtension, SSL_SERVER)},
	{"S_MIME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NetscapeCertTypeExtension, S_MIME)},
	{"OBJECT_SIGNING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NetscapeCertTypeExtension, OBJECT_SIGNING)},
	{"SSL_CA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NetscapeCertTypeExtension, SSL_CA)},
	{"S_MIME_CA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NetscapeCertTypeExtension, S_MIME_CA)},
	{"OBJECT_SIGNING_CA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NetscapeCertTypeExtension, OBJECT_SIGNING_CA)},
	{"NetscapeCertType_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(NetscapeCertTypeExtension, NetscapeCertType_Id)},
	{"bitString", "[Z", nullptr, $PRIVATE, $field(NetscapeCertTypeExtension, bitString)},
	{"mMapData", "[Lsun/security/x509/NetscapeCertTypeExtension$MapEntry;", nullptr, $PRIVATE | $STATIC, $staticField(NetscapeCertTypeExtension, mMapData)},
	{"mAttributeNames", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(NetscapeCertTypeExtension, mAttributeNames)},
	{}
};

$MethodInfo _NetscapeCertTypeExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(NetscapeCertTypeExtension::*)($bytes*)>(&NetscapeCertTypeExtension::init$)), "java.io.IOException"},
	{"<init>", "([Z)V", nullptr, $PUBLIC, $method(static_cast<void(NetscapeCertTypeExtension::*)($booleans*)>(&NetscapeCertTypeExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(NetscapeCertTypeExtension::*)($Boolean*,Object$*)>(&NetscapeCertTypeExtension::init$)), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NetscapeCertTypeExtension::*)()>(&NetscapeCertTypeExtension::init$))},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(NetscapeCertTypeExtension::*)()>(&NetscapeCertTypeExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getKeyUsageMappedBits", "()[Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPosition", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&NetscapeCertTypeExtension::getPosition)), "java.io.IOException"},
	{"isSet", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(NetscapeCertTypeExtension::*)(int32_t)>(&NetscapeCertTypeExtension::isSet))},
	{"set", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(NetscapeCertTypeExtension::*)(int32_t,bool)>(&NetscapeCertTypeExtension::set))},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NetscapeCertTypeExtension_InnerClassesInfo_[] = {
	{"sun.security.x509.NetscapeCertTypeExtension$MapEntry", "sun.security.x509.NetscapeCertTypeExtension", "MapEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NetscapeCertTypeExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.NetscapeCertTypeExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_NetscapeCertTypeExtension_FieldInfo_,
	_NetscapeCertTypeExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;",
	nullptr,
	_NetscapeCertTypeExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.x509.NetscapeCertTypeExtension$MapEntry"
};

$Object* allocate$NetscapeCertTypeExtension($Class* clazz) {
	return $of($alloc(NetscapeCertTypeExtension));
}

int32_t NetscapeCertTypeExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool NetscapeCertTypeExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* NetscapeCertTypeExtension::clone() {
	 return this->$Extension::clone();
}

void NetscapeCertTypeExtension::finalize() {
	this->$Extension::finalize();
}

$String* NetscapeCertTypeExtension::IDENT = nullptr;
$String* NetscapeCertTypeExtension::NAME = nullptr;
$String* NetscapeCertTypeExtension::SSL_CLIENT = nullptr;
$String* NetscapeCertTypeExtension::SSL_SERVER = nullptr;
$String* NetscapeCertTypeExtension::S_MIME = nullptr;
$String* NetscapeCertTypeExtension::OBJECT_SIGNING = nullptr;
$String* NetscapeCertTypeExtension::SSL_CA = nullptr;
$String* NetscapeCertTypeExtension::S_MIME_CA = nullptr;
$String* NetscapeCertTypeExtension::OBJECT_SIGNING_CA = nullptr;
$ObjectIdentifier* NetscapeCertTypeExtension::NetscapeCertType_Id = nullptr;
$NetscapeCertTypeExtension$MapEntryArray* NetscapeCertTypeExtension::mMapData = nullptr;
$Vector* NetscapeCertTypeExtension::mAttributeNames = nullptr;

int32_t NetscapeCertTypeExtension::getPosition($String* name) {
	$init(NetscapeCertTypeExtension);
	for (int32_t i = 0; i < $nc(NetscapeCertTypeExtension::mMapData)->length; ++i) {
		if ($nc(name)->equalsIgnoreCase($nc($nc(NetscapeCertTypeExtension::mMapData)->get(i))->mName)) {
			return $nc($nc(NetscapeCertTypeExtension::mMapData)->get(i))->mPosition;
		}
	}
	$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:NetscapeCertType."_s}));
}

void NetscapeCertTypeExtension::encodeThis() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, os, $new($DerOutputStream));
	os->putTruncatedUnalignedBitString($$new($BitArray, this->bitString));
	$set(this, extensionValue, os->toByteArray());
}

bool NetscapeCertTypeExtension::isSet(int32_t position) {
	return (position < $nc(this->bitString)->length) && $nc(this->bitString)->get(position);
}

void NetscapeCertTypeExtension::set(int32_t position, bool val) {
	if (position >= $nc(this->bitString)->length) {
		$var($booleans, tmp, $new($booleans, position + 1));
		$System::arraycopy(this->bitString, 0, tmp, 0, $nc(this->bitString)->length);
		$set(this, bitString, tmp);
	}
	$nc(this->bitString)->set(position, val);
}

void NetscapeCertTypeExtension::init$($bytes* bitString) {
	$Extension::init$();
	$set(this, bitString, $$new($BitArray, $nc(bitString)->length * 8, bitString)->toBooleanArray());
	$set(this, extensionId, NetscapeCertTypeExtension::NetscapeCertType_Id);
	this->critical = true;
	encodeThis();
}

void NetscapeCertTypeExtension::init$($booleans* bitString) {
	$Extension::init$();
	$set(this, bitString, bitString);
	$set(this, extensionId, NetscapeCertTypeExtension::NetscapeCertType_Id);
	this->critical = true;
	encodeThis();
}

void NetscapeCertTypeExtension::init$($Boolean* critical, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$Extension::init$();
	$set(this, extensionId, NetscapeCertTypeExtension::NetscapeCertType_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	$set(this, bitString, $nc($(val->getUnalignedBitString()))->toBooleanArray());
}

void NetscapeCertTypeExtension::init$() {
	$Extension::init$();
	$set(this, extensionId, NetscapeCertTypeExtension::NetscapeCertType_Id);
	this->critical = true;
	$set(this, bitString, $new($booleans, 0));
}

void NetscapeCertTypeExtension::set($String* name, Object$* obj) {
	if (!($instanceOf($Boolean, obj))) {
		$throwNew($IOException, "Attribute must be of type Boolean."_s);
	}
	bool val = $nc(($cast($Boolean, obj)))->booleanValue();
	set(getPosition(name), val);
	encodeThis();
}

$Object* NetscapeCertTypeExtension::get($String* name) {
	return $of($Boolean::valueOf(isSet(getPosition(name))));
}

void NetscapeCertTypeExtension::delete$($String* name) {
	set(getPosition(name), false);
	encodeThis();
}

$String* NetscapeCertTypeExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()));
	sb->append("NetscapeCertType [\n"_s);
	if (isSet(0)) {
		sb->append("   SSL client\n"_s);
	}
	if (isSet(1)) {
		sb->append("   SSL server\n"_s);
	}
	if (isSet(2)) {
		sb->append("   S/MIME\n"_s);
	}
	if (isSet(3)) {
		sb->append("   Object Signing\n"_s);
	}
	if (isSet(5)) {
		sb->append("   SSL CA\n"_s);
	}
	if (isSet(6)) {
		sb->append("   S/MIME CA\n"_s);
	}
	if (isSet(7)) {
		sb->append("   Object Signing CA"_s);
	}
	sb->append("]\n"_s);
	return sb->toString();
}

void NetscapeCertTypeExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$set(this, extensionId, NetscapeCertTypeExtension::NetscapeCertType_Id);
		this->critical = true;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

$Enumeration* NetscapeCertTypeExtension::getElements() {
	return $nc(NetscapeCertTypeExtension::mAttributeNames)->elements();
}

$String* NetscapeCertTypeExtension::getName() {
	return (NetscapeCertTypeExtension::NAME);
}

$booleans* NetscapeCertTypeExtension::getKeyUsageMappedBits() {
	$useLocalCurrentObjectStackCache();
	$var($KeyUsageExtension, keyUsage, $new($KeyUsageExtension));
	$init($Boolean);
	$var($Boolean, val, $Boolean::TRUE);
	try {
		bool var$1 = isSet(getPosition(NetscapeCertTypeExtension::SSL_CLIENT));
		bool var$0 = var$1 || isSet(getPosition(NetscapeCertTypeExtension::S_MIME));
		if (var$0 || isSet(getPosition(NetscapeCertTypeExtension::OBJECT_SIGNING))) {
			$init($KeyUsageExtension);
			keyUsage->set($KeyUsageExtension::DIGITAL_SIGNATURE, $of(val));
		}
		if (isSet(getPosition(NetscapeCertTypeExtension::SSL_SERVER))) {
			$init($KeyUsageExtension);
			keyUsage->set($KeyUsageExtension::KEY_ENCIPHERMENT, $of(val));
		}
		bool var$3 = isSet(getPosition(NetscapeCertTypeExtension::SSL_CA));
		bool var$2 = var$3 || isSet(getPosition(NetscapeCertTypeExtension::S_MIME_CA));
		if (var$2 || isSet(getPosition(NetscapeCertTypeExtension::OBJECT_SIGNING_CA))) {
			$init($KeyUsageExtension);
			keyUsage->set($KeyUsageExtension::KEY_CERTSIGN, $of(val));
		}
	} catch ($IOException& e) {
	}
	return keyUsage->getBits();
}

void clinit$NetscapeCertTypeExtension($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(NetscapeCertTypeExtension::IDENT, "x509.info.extensions.NetscapeCertType"_s);
	$assignStatic(NetscapeCertTypeExtension::NAME, "NetscapeCertType"_s);
	$assignStatic(NetscapeCertTypeExtension::SSL_CLIENT, "ssl_client"_s);
	$assignStatic(NetscapeCertTypeExtension::SSL_SERVER, "ssl_server"_s);
	$assignStatic(NetscapeCertTypeExtension::S_MIME, "s_mime"_s);
	$assignStatic(NetscapeCertTypeExtension::OBJECT_SIGNING, "object_signing"_s);
	$assignStatic(NetscapeCertTypeExtension::SSL_CA, "ssl_ca"_s);
	$assignStatic(NetscapeCertTypeExtension::S_MIME_CA, "s_mime_ca"_s);
	$assignStatic(NetscapeCertTypeExtension::OBJECT_SIGNING_CA, "object_signing_ca"_s);
	$init($KnownOIDs);
	$assignStatic(NetscapeCertTypeExtension::NetscapeCertType_Id, $ObjectIdentifier::of($KnownOIDs::NETSCAPE_CertType));
	$assignStatic(NetscapeCertTypeExtension::mMapData, $new($NetscapeCertTypeExtension$MapEntryArray, {
		$$new($NetscapeCertTypeExtension$MapEntry, NetscapeCertTypeExtension::SSL_CLIENT, 0),
		$$new($NetscapeCertTypeExtension$MapEntry, NetscapeCertTypeExtension::SSL_SERVER, 1),
		$$new($NetscapeCertTypeExtension$MapEntry, NetscapeCertTypeExtension::S_MIME, 2),
		$$new($NetscapeCertTypeExtension$MapEntry, NetscapeCertTypeExtension::OBJECT_SIGNING, 3),
		$$new($NetscapeCertTypeExtension$MapEntry, NetscapeCertTypeExtension::SSL_CA, 5),
		$$new($NetscapeCertTypeExtension$MapEntry, NetscapeCertTypeExtension::S_MIME_CA, 6),
		$$new($NetscapeCertTypeExtension$MapEntry, NetscapeCertTypeExtension::OBJECT_SIGNING_CA, 7)
	}));
	$assignStatic(NetscapeCertTypeExtension::mAttributeNames, $new($Vector));
	{
		{
			$var($NetscapeCertTypeExtension$MapEntryArray, arr$, NetscapeCertTypeExtension::mMapData);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($NetscapeCertTypeExtension$MapEntry, entry, arr$->get(i$));
				{
					$nc(NetscapeCertTypeExtension::mAttributeNames)->add($nc(entry)->mName);
				}
			}
		}
	}
}

NetscapeCertTypeExtension::NetscapeCertTypeExtension() {
}

$Class* NetscapeCertTypeExtension::load$($String* name, bool initialize) {
	$loadClass(NetscapeCertTypeExtension, name, initialize, &_NetscapeCertTypeExtension_ClassInfo_, clinit$NetscapeCertTypeExtension, allocate$NetscapeCertTypeExtension);
	return class$;
}

$Class* NetscapeCertTypeExtension::class$ = nullptr;

		} // x509
	} // security
} // sun