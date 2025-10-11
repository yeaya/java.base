#include <sun/security/ssl/ProtocolVersion.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/CryptoPrimitive.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <sun/security/ssl/SSLAlgorithmConstraints.h>
#include <jcpp.h>

#undef PROTOCOLS_TO_10
#undef PROTOCOLS_TO_TLS10
#undef PROTOCOLS_TO_TLS11
#undef PROTOCOLS_TO_TLS12
#undef LIMIT_MIN_VALUE
#undef PROTOCOLS_OF_11
#undef PROTOCOLS_OF_12
#undef PROTOCOLS_OF_13
#undef PROTOCOLS_OF_30
#undef NONE
#undef DEFAULT_SSL_ONLY
#undef KEY_AGREEMENT
#undef PROTOCOLS_EMPTY
#undef LIMIT_MAX_VALUE
#undef PROTOCOLS_OF_NONE
#undef SSL30
#undef DTLS12
#undef TLS11
#undef TLS10
#undef DTLS10
#undef PROTOCOLS_TO_13
#undef TLS13
#undef PROTOCOLS_TO_12
#undef TLS12
#undef PROTOCOLS_TO_11

using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $CryptoPrimitive = ::java::security::CryptoPrimitive;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $SSLAlgorithmConstraints = ::sun::security::ssl::SSLAlgorithmConstraints;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ProtocolVersion_FieldInfo_[] = {
	{"TLS13", "Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProtocolVersion, TLS13)},
	{"TLS12", "Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProtocolVersion, TLS12)},
	{"TLS11", "Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProtocolVersion, TLS11)},
	{"TLS10", "Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProtocolVersion, TLS10)},
	{"SSL30", "Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProtocolVersion, SSL30)},
	{"SSL20Hello", "Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProtocolVersion, SSL20Hello)},
	{"DTLS12", "Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProtocolVersion, DTLS12)},
	{"DTLS10", "Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProtocolVersion, DTLS10)},
	{"NONE", "Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ProtocolVersion, NONE)},
	{"$VALUES", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ProtocolVersion, $VALUES)},
	{"id", "I", nullptr, $FINAL, $field(ProtocolVersion, id)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(ProtocolVersion, name$)},
	{"isDTLS", "Z", nullptr, $FINAL, $field(ProtocolVersion, isDTLS)},
	{"major", "B", nullptr, $FINAL, $field(ProtocolVersion, major)},
	{"minor", "B", nullptr, $FINAL, $field(ProtocolVersion, minor)},
	{"isAvailable", "Z", nullptr, $FINAL, $field(ProtocolVersion, isAvailable)},
	{"LIMIT_MAX_VALUE", "I", nullptr, $STATIC | $FINAL, $constField(ProtocolVersion, LIMIT_MAX_VALUE)},
	{"LIMIT_MIN_VALUE", "I", nullptr, $STATIC | $FINAL, $constField(ProtocolVersion, LIMIT_MIN_VALUE)},
	{"PROTOCOLS_TO_10", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_TO_10)},
	{"PROTOCOLS_TO_11", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_TO_11)},
	{"PROTOCOLS_TO_12", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_TO_12)},
	{"PROTOCOLS_TO_13", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_TO_13)},
	{"PROTOCOLS_OF_NONE", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_OF_NONE)},
	{"PROTOCOLS_OF_30", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_OF_30)},
	{"PROTOCOLS_OF_11", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_OF_11)},
	{"PROTOCOLS_OF_12", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_OF_12)},
	{"PROTOCOLS_OF_13", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_OF_13)},
	{"PROTOCOLS_10_11", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_10_11)},
	{"PROTOCOLS_11_12", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_11_12)},
	{"PROTOCOLS_12_13", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_12_13)},
	{"PROTOCOLS_10_12", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_10_12)},
	{"PROTOCOLS_TO_TLS12", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_TO_TLS12)},
	{"PROTOCOLS_TO_TLS11", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_TO_TLS11)},
	{"PROTOCOLS_TO_TLS10", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_TO_TLS10)},
	{"PROTOCOLS_EMPTY", "[Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC | $FINAL, $staticField(ProtocolVersion, PROTOCOLS_EMPTY)},
	{}
};

$MethodInfo _ProtocolVersion_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/ProtocolVersion;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ProtocolVersionArray*(*)()>(&ProtocolVersion::$values))},
	{"<init>", "(Ljava/lang/String;IILjava/lang/String;Z)V", "(ILjava/lang/String;Z)V", $PRIVATE, $method(static_cast<void(ProtocolVersion::*)($String*,int32_t,int32_t,$String*,bool)>(&ProtocolVersion::init$))},
	{"compare", "(Lsun/security/ssl/ProtocolVersion;)I", nullptr, 0, $method(static_cast<int32_t(ProtocolVersion::*)(ProtocolVersion*)>(&ProtocolVersion::compare))},
	{"isNegotiable", "(BBZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int8_t,int8_t,bool,bool)>(&ProtocolVersion::isNegotiable))},
	{"nameOf", "(BB)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int8_t,int8_t)>(&ProtocolVersion::nameOf))},
	{"nameOf", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&ProtocolVersion::nameOf))},
	{"nameOf", "(Ljava/lang/String;)Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC, $method(static_cast<ProtocolVersion*(*)($String*)>(&ProtocolVersion::nameOf))},
	{"namesOf", "([Ljava/lang/String;)Ljava/util/List;", "([Ljava/lang/String;)Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $STATIC, $method(static_cast<$List*(*)($StringArray*)>(&ProtocolVersion::namesOf))},
	{"selectedFrom", "(Ljava/util/List;I)Lsun/security/ssl/ProtocolVersion;", "(Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;I)Lsun/security/ssl/ProtocolVersion;", $STATIC, $method(static_cast<ProtocolVersion*(*)($List*,int32_t)>(&ProtocolVersion::selectedFrom))},
	{"toStringArray", "(Ljava/util/List;)[Ljava/lang/String;", "(Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;)[Ljava/lang/String;", $STATIC, $method(static_cast<$StringArray*(*)($List*)>(&ProtocolVersion::toStringArray))},
	{"toStringArray", "([I)[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)($ints*)>(&ProtocolVersion::toStringArray))},
	{"useTLS10PlusSpec", "()Z", nullptr, 0, $method(static_cast<bool(ProtocolVersion::*)()>(&ProtocolVersion::useTLS10PlusSpec))},
	{"useTLS10PlusSpec", "(IZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t,bool)>(&ProtocolVersion::useTLS10PlusSpec))},
	{"useTLS11PlusSpec", "()Z", nullptr, 0, $method(static_cast<bool(ProtocolVersion::*)()>(&ProtocolVersion::useTLS11PlusSpec))},
	{"useTLS12PlusSpec", "(Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($String*)>(&ProtocolVersion::useTLS12PlusSpec))},
	{"useTLS12PlusSpec", "()Z", nullptr, 0, $method(static_cast<bool(ProtocolVersion::*)()>(&ProtocolVersion::useTLS12PlusSpec))},
	{"useTLS13PlusSpec", "()Z", nullptr, 0, $method(static_cast<bool(ProtocolVersion::*)()>(&ProtocolVersion::useTLS13PlusSpec))},
	{"useTLS13PlusSpec", "(IZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t,bool)>(&ProtocolVersion::useTLS13PlusSpec))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProtocolVersion*(*)($String*)>(&ProtocolVersion::valueOf))},
	{"valueOf", "(BB)Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC, $method(static_cast<ProtocolVersion*(*)(int8_t,int8_t)>(&ProtocolVersion::valueOf))},
	{"valueOf", "(I)Lsun/security/ssl/ProtocolVersion;", nullptr, $STATIC, $method(static_cast<ProtocolVersion*(*)(int32_t)>(&ProtocolVersion::valueOf))},
	{"values", "()[Lsun/security/ssl/ProtocolVersion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ProtocolVersionArray*(*)()>(&ProtocolVersion::values))},
	{}
};

$ClassInfo _ProtocolVersion_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.ProtocolVersion",
	"java.lang.Enum",
	nullptr,
	_ProtocolVersion_FieldInfo_,
	_ProtocolVersion_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/ProtocolVersion;>;"
};

$Object* allocate$ProtocolVersion($Class* clazz) {
	return $of($alloc(ProtocolVersion));
}

ProtocolVersion* ProtocolVersion::TLS13 = nullptr;
ProtocolVersion* ProtocolVersion::TLS12 = nullptr;
ProtocolVersion* ProtocolVersion::TLS11 = nullptr;
ProtocolVersion* ProtocolVersion::TLS10 = nullptr;
ProtocolVersion* ProtocolVersion::SSL30 = nullptr;
ProtocolVersion* ProtocolVersion::SSL20Hello = nullptr;
ProtocolVersion* ProtocolVersion::DTLS12 = nullptr;
ProtocolVersion* ProtocolVersion::DTLS10 = nullptr;
ProtocolVersion* ProtocolVersion::NONE = nullptr;
$ProtocolVersionArray* ProtocolVersion::$VALUES = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_TO_10 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_TO_11 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_TO_12 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_TO_13 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_OF_NONE = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_OF_30 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_OF_11 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_OF_12 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_OF_13 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_10_11 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_11_12 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_12_13 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_10_12 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_TO_TLS12 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_TO_TLS11 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_TO_TLS10 = nullptr;
$ProtocolVersionArray* ProtocolVersion::PROTOCOLS_EMPTY = nullptr;

$ProtocolVersionArray* ProtocolVersion::$values() {
	$init(ProtocolVersion);
	return $new($ProtocolVersionArray, {
		ProtocolVersion::TLS13,
		ProtocolVersion::TLS12,
		ProtocolVersion::TLS11,
		ProtocolVersion::TLS10,
		ProtocolVersion::SSL30,
		ProtocolVersion::SSL20Hello,
		ProtocolVersion::DTLS12,
		ProtocolVersion::DTLS10,
		ProtocolVersion::NONE
	});
}

$ProtocolVersionArray* ProtocolVersion::values() {
	$init(ProtocolVersion);
	return $cast($ProtocolVersionArray, ProtocolVersion::$VALUES->clone());
}

ProtocolVersion* ProtocolVersion::valueOf($String* name) {
	$init(ProtocolVersion);
	return $cast(ProtocolVersion, $Enum::valueOf(ProtocolVersion::class$, name));
}

void ProtocolVersion::init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, $String* name, bool isDTLS) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	$set(this, name$, name);
	this->isDTLS = isDTLS;
	this->major = (int8_t)((int32_t)(((int32_t)((uint32_t)id >> 8)) & (uint32_t)255));
	this->minor = (int8_t)((int32_t)(id & (uint32_t)255));
	$init($SSLAlgorithmConstraints);
	$init($CryptoPrimitive);
	this->isAvailable = $nc($SSLAlgorithmConstraints::DEFAULT_SSL_ONLY)->permits($($EnumSet::of($CryptoPrimitive::KEY_AGREEMENT)), name, nullptr);
}

ProtocolVersion* ProtocolVersion::valueOf(int8_t major, int8_t minor) {
	$init(ProtocolVersion);
	{
		$var($ProtocolVersionArray, arr$, ProtocolVersion::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			ProtocolVersion* pv = arr$->get(i$);
			{
				if (($nc(pv)->major == major) && (pv->minor == minor)) {
					return pv;
				}
			}
		}
	}
	return nullptr;
}

ProtocolVersion* ProtocolVersion::valueOf(int32_t id) {
	$init(ProtocolVersion);
	{
		$var($ProtocolVersionArray, arr$, ProtocolVersion::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			ProtocolVersion* pv = arr$->get(i$);
			{
				if ($nc(pv)->id == id) {
					return pv;
				}
			}
		}
	}
	return nullptr;
}

$String* ProtocolVersion::nameOf(int8_t major, int8_t minor) {
	$init(ProtocolVersion);
	{
		$var($ProtocolVersionArray, arr$, ProtocolVersion::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			ProtocolVersion* pv = arr$->get(i$);
			{
				if (($nc(pv)->major == major) && (pv->minor == minor)) {
					return pv->name$;
				}
			}
		}
	}
	return $str({"(D)TLS-"_s, $$str(major), "."_s, $$str(minor)});
}

$String* ProtocolVersion::nameOf(int32_t id) {
	$init(ProtocolVersion);
	return nameOf((int8_t)((int32_t)(((int32_t)((uint32_t)id >> 8)) & (uint32_t)255)), (int8_t)((int32_t)(id & (uint32_t)255)));
}

ProtocolVersion* ProtocolVersion::nameOf($String* name) {
	$init(ProtocolVersion);
	{
		$var($ProtocolVersionArray, arr$, ProtocolVersion::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			ProtocolVersion* pv = arr$->get(i$);
			{
				if ($nc($nc(pv)->name$)->equals(name)) {
					return pv;
				}
			}
		}
	}
	return nullptr;
}

bool ProtocolVersion::isNegotiable(int8_t major, int8_t minor, bool isDTLS, bool allowSSL20Hello) {
	$init(ProtocolVersion);
	int32_t v = (((int32_t)(major & (uint32_t)255)) << 8) | ((int32_t)(minor & (uint32_t)255));
	if (isDTLS) {
		return v <= ProtocolVersion::DTLS10->id;
	} else {
		if (v < ProtocolVersion::SSL30->id) {
			if (!allowSSL20Hello || (v != ProtocolVersion::SSL20Hello->id)) {
				return false;
			}
		}
		return true;
	}
}

$StringArray* ProtocolVersion::toStringArray($List* protocolVersions) {
	$init(ProtocolVersion);
	if ((protocolVersions != nullptr) && !protocolVersions->isEmpty()) {
		$var($StringArray, protocolNames, $new($StringArray, protocolVersions->size()));
		int32_t i = 0;
		{
			$var($Iterator, i$, protocolVersions->iterator());
			for (; $nc(i$)->hasNext();) {
				ProtocolVersion* pv = $cast(ProtocolVersion, i$->next());
				{
					protocolNames->set(i++, $nc(pv)->name$);
				}
			}
		}
		return protocolNames;
	}
	return $new($StringArray, 0);
}

$StringArray* ProtocolVersion::toStringArray($ints* protocolVersions) {
	$init(ProtocolVersion);
	if ((protocolVersions != nullptr) && protocolVersions->length != 0) {
		$var($StringArray, protocolNames, $new($StringArray, protocolVersions->length));
		int32_t i = 0;
		{
			$var($ints, arr$, protocolVersions);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t pv = arr$->get(i$);
				{
					protocolNames->set(i++, $(ProtocolVersion::nameOf(pv)));
				}
			}
		}
		return protocolNames;
	}
	return $new($StringArray, 0);
}

$List* ProtocolVersion::namesOf($StringArray* protocolNames) {
	$init(ProtocolVersion);
	if (protocolNames == nullptr || $nc(protocolNames)->length == 0) {
		return $Collections::emptyList();
	}
	$var($List, pvs, $new($ArrayList, $nc(protocolNames)->length));
	{
		$var($StringArray, arr$, protocolNames);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, pn, arr$->get(i$));
			{
				ProtocolVersion* pv = ProtocolVersion::nameOf(pn);
				if (pv == nullptr) {
					$throwNew($IllegalArgumentException, $$str({"Unsupported protocol"_s, pn}));
				}
				pvs->add(pv);
			}
		}
	}
	return $Collections::unmodifiableList(pvs);
}

bool ProtocolVersion::useTLS12PlusSpec($String* name) {
	$init(ProtocolVersion);
	ProtocolVersion* pv = ProtocolVersion::nameOf(name);
	if (pv != nullptr && pv != ProtocolVersion::NONE) {
		return pv->isDTLS ? (pv->id <= ProtocolVersion::DTLS12->id) : (pv->id >= ProtocolVersion::TLS12->id);
	}
	return false;
}

int32_t ProtocolVersion::compare(ProtocolVersion* that) {
	if (this == that) {
		return 0;
	}
	if (this == ProtocolVersion::NONE) {
		return -1;
	} else if (that == ProtocolVersion::NONE) {
		return 1;
	}
	if (this->isDTLS) {
		return $nc(that)->id - this->id;
	} else {
		return this->id - $nc(that)->id;
	}
}

bool ProtocolVersion::useTLS13PlusSpec() {
	return this->isDTLS ? (this->id < ProtocolVersion::DTLS12->id) : (this->id >= ProtocolVersion::TLS13->id);
}

bool ProtocolVersion::useTLS12PlusSpec() {
	return this->isDTLS ? (this->id <= ProtocolVersion::DTLS12->id) : (this->id >= ProtocolVersion::TLS12->id);
}

bool ProtocolVersion::useTLS11PlusSpec() {
	return this->isDTLS || (this->id >= ProtocolVersion::TLS11->id);
}

bool ProtocolVersion::useTLS10PlusSpec() {
	return this->isDTLS || (this->id >= ProtocolVersion::TLS10->id);
}

bool ProtocolVersion::useTLS10PlusSpec(int32_t id, bool isDTLS) {
	$init(ProtocolVersion);
	return isDTLS || (id >= ProtocolVersion::TLS10->id);
}

bool ProtocolVersion::useTLS13PlusSpec(int32_t id, bool isDTLS) {
	$init(ProtocolVersion);
	return isDTLS ? (id < ProtocolVersion::DTLS12->id) : (id >= ProtocolVersion::TLS13->id);
}

ProtocolVersion* ProtocolVersion::selectedFrom($List* listedVersions, int32_t suggestedVersion) {
	$init(ProtocolVersion);
	ProtocolVersion* selectedVersion = ProtocolVersion::NONE;
	{
		$var($Iterator, i$, $nc(listedVersions)->iterator());
		for (; $nc(i$)->hasNext();) {
			ProtocolVersion* pv = $cast(ProtocolVersion, i$->next());
			{
				if ($nc(pv)->id == suggestedVersion) {
					return pv;
				} else if ($nc(pv)->isDTLS) {
					if (pv->id > suggestedVersion && pv->id < $nc(selectedVersion)->id) {
						selectedVersion = pv;
					}
				} else if ($nc(pv)->id < suggestedVersion && pv->id > $nc(selectedVersion)->id) {
					selectedVersion = pv;
				}
			}
		}
	}
	return selectedVersion;
}

void clinit$ProtocolVersion($Class* class$) {
	$assignStatic(ProtocolVersion::TLS13, $new(ProtocolVersion, "TLS13"_s, 0, 772, "TLSv1.3"_s, false));
	$assignStatic(ProtocolVersion::TLS12, $new(ProtocolVersion, "TLS12"_s, 1, 771, "TLSv1.2"_s, false));
	$assignStatic(ProtocolVersion::TLS11, $new(ProtocolVersion, "TLS11"_s, 2, 770, "TLSv1.1"_s, false));
	$assignStatic(ProtocolVersion::TLS10, $new(ProtocolVersion, "TLS10"_s, 3, 769, "TLSv1"_s, false));
	$assignStatic(ProtocolVersion::SSL30, $new(ProtocolVersion, "SSL30"_s, 4, 768, "SSLv3"_s, false));
	$assignStatic(ProtocolVersion::SSL20Hello, $new(ProtocolVersion, "SSL20Hello"_s, 5, 2, "SSLv2Hello"_s, false));
	$assignStatic(ProtocolVersion::DTLS12, $new(ProtocolVersion, "DTLS12"_s, 6, 0x0000FEFD, "DTLSv1.2"_s, true));
	$assignStatic(ProtocolVersion::DTLS10, $new(ProtocolVersion, "DTLS10"_s, 7, 0x0000FEFF, "DTLSv1.0"_s, true));
	$assignStatic(ProtocolVersion::NONE, $new(ProtocolVersion, "NONE"_s, 8, -1, "NONE"_s, false));
	$assignStatic(ProtocolVersion::$VALUES, ProtocolVersion::$values());
	$assignStatic(ProtocolVersion::PROTOCOLS_TO_10, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS10,
		ProtocolVersion::SSL30
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_TO_11, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS11,
		ProtocolVersion::TLS10,
		ProtocolVersion::SSL30,
		ProtocolVersion::DTLS10
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_TO_12, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS12,
		ProtocolVersion::TLS11,
		ProtocolVersion::TLS10,
		ProtocolVersion::SSL30,
		ProtocolVersion::DTLS12,
		ProtocolVersion::DTLS10
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_TO_13, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS13,
		ProtocolVersion::TLS12,
		ProtocolVersion::TLS11,
		ProtocolVersion::TLS10,
		ProtocolVersion::SSL30,
		ProtocolVersion::DTLS12,
		ProtocolVersion::DTLS10
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_OF_NONE, $new($ProtocolVersionArray, {ProtocolVersion::NONE}));
	$assignStatic(ProtocolVersion::PROTOCOLS_OF_30, $new($ProtocolVersionArray, {ProtocolVersion::SSL30}));
	$assignStatic(ProtocolVersion::PROTOCOLS_OF_11, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS11,
		ProtocolVersion::DTLS10
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_OF_12, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS12,
		ProtocolVersion::DTLS12
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_OF_13, $new($ProtocolVersionArray, {ProtocolVersion::TLS13}));
	$assignStatic(ProtocolVersion::PROTOCOLS_10_11, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS11,
		ProtocolVersion::TLS10,
		ProtocolVersion::DTLS10
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_11_12, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS12,
		ProtocolVersion::TLS11,
		ProtocolVersion::DTLS12,
		ProtocolVersion::DTLS10
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_12_13, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS13,
		ProtocolVersion::TLS12,
		ProtocolVersion::DTLS12
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_10_12, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS12,
		ProtocolVersion::TLS11,
		ProtocolVersion::TLS10,
		ProtocolVersion::DTLS12,
		ProtocolVersion::DTLS10
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_TO_TLS12, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS12,
		ProtocolVersion::TLS11,
		ProtocolVersion::TLS10,
		ProtocolVersion::SSL30
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_TO_TLS11, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS11,
		ProtocolVersion::TLS10,
		ProtocolVersion::SSL30
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_TO_TLS10, $new($ProtocolVersionArray, {
		ProtocolVersion::TLS10,
		ProtocolVersion::SSL30
	}));
	$assignStatic(ProtocolVersion::PROTOCOLS_EMPTY, $new($ProtocolVersionArray, 0));
}

ProtocolVersion::ProtocolVersion() {
}

$Class* ProtocolVersion::load$($String* name, bool initialize) {
	$loadClass(ProtocolVersion, name, initialize, &_ProtocolVersion_ClassInfo_, clinit$ProtocolVersion, allocate$ProtocolVersion);
	return class$;
}

$Class* ProtocolVersion::class$ = nullptr;

		} // ssl
	} // security
} // sun