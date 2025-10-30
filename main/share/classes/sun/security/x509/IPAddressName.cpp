#include <sun/security/x509/IPAddressName.h>

#include <java/io/IOException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/InetAddress.h>
#include <java/util/Arrays.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <jcpp.h>

#undef MASKSIZE
#undef NAME_DIFF_TYPE
#undef NAME_IP
#undef NAME_MATCH
#undef NAME_NARROWS
#undef NAME_SAME_TYPE
#undef NAME_WIDENS

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InetAddress = ::java::net::InetAddress;
using $Arrays = ::java::util::Arrays;
using $BitArray = ::sun::security::util::BitArray;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _IPAddressName_FieldInfo_[] = {
	{"address", "[B", nullptr, $PRIVATE, $field(IPAddressName, address)},
	{"isIPv4", "Z", nullptr, $PRIVATE, $field(IPAddressName, isIPv4)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IPAddressName, name)},
	{"MASKSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IPAddressName, MASKSIZE)},
	{}
};

$MethodInfo _IPAddressName_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(IPAddressName::*)($DerValue*)>(&IPAddressName::init$)), "java.io.IOException"},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(IPAddressName::*)($bytes*)>(&IPAddressName::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IPAddressName::*)($String*)>(&IPAddressName::init$)), "java.io.IOException"},
	{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBytes", "()[B", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getType", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"parseIPv4", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(IPAddressName::*)($String*)>(&IPAddressName::parseIPv4)), "java.io.IOException"},
	{"parseIPv6", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(IPAddressName::*)($String*)>(&IPAddressName::parseIPv6)), "java.io.IOException"},
	{"subtreeDepth", "()I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IPAddressName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.IPAddressName",
	"java.lang.Object",
	"sun.security.x509.GeneralNameInterface",
	_IPAddressName_FieldInfo_,
	_IPAddressName_MethodInfo_
};

$Object* allocate$IPAddressName($Class* clazz) {
	return $of($alloc(IPAddressName));
}

void IPAddressName::init$($DerValue* derValue) {
	IPAddressName::init$($($nc(derValue)->getOctetString()));
}

void IPAddressName::init$($bytes* address) {
	if ($nc(address)->length == 4 || $nc(address)->length == 8) {
		this->isIPv4 = true;
	} else if (address->length == 16 || address->length == 32) {
		this->isIPv4 = false;
	} else {
		$throwNew($IOException, "Invalid IPAddressName"_s);
	}
	$set(this, address, address);
}

void IPAddressName::init$($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr || $nc(name)->isEmpty()) {
		$throwNew($IOException, "IPAddress cannot be null or empty"_s);
	}
	if ($nc(name)->charAt(name->length() - 1) == u'/') {
		$throwNew($IOException, $$str({"Invalid IPAddress: "_s, name}));
	}
	if ($nc(name)->indexOf((int32_t)u':') >= 0) {
		parseIPv6(name);
		this->isIPv4 = false;
	} else if (name->indexOf((int32_t)u'.') >= 0) {
		parseIPv4(name);
		this->isIPv4 = true;
	} else {
		$throwNew($IOException, $$str({"Invalid IPAddress: "_s, name}));
	}
}

void IPAddressName::parseIPv4($String* name) {
	$useLocalCurrentObjectStackCache();
	int32_t slashNdx = $nc(name)->indexOf((int32_t)u'/');
	if (slashNdx == -1) {
		$set(this, address, $nc($($InetAddress::getByName(name)))->getAddress());
	} else {
		$set(this, address, $new($bytes, 8));
		$var($bytes, mask, $nc($($InetAddress::getByName($(name->substring(slashNdx + 1)))))->getAddress());
		$var($bytes, host, $nc($($InetAddress::getByName($(name->substring(0, slashNdx)))))->getAddress());
		$System::arraycopy(host, 0, this->address, 0, 4);
		$System::arraycopy(mask, 0, this->address, 4, 4);
	}
}

void IPAddressName::parseIPv6($String* name) {
	$useLocalCurrentObjectStackCache();
	int32_t slashNdx = $nc(name)->indexOf((int32_t)u'/');
	if (slashNdx == -1) {
		$set(this, address, $nc($($InetAddress::getByName(name)))->getAddress());
	} else {
		$set(this, address, $new($bytes, 32));
		$var($bytes, base, $nc($($InetAddress::getByName($(name->substring(0, slashNdx)))))->getAddress());
		$System::arraycopy(base, 0, this->address, 0, 16);
		int32_t prefixLen = $Integer::parseInt($(name->substring(slashNdx + 1)));
		if (prefixLen < 0 || prefixLen > 128) {
			$throwNew($IOException, $$str({"IPv6Address prefix length ("_s, $$str(prefixLen), ") in out of valid range [0,128]"_s}));
		}
		$var($BitArray, bitArray, $new($BitArray, IPAddressName::MASKSIZE * 8));
		for (int32_t i = 0; i < prefixLen; ++i) {
			bitArray->set(i, true);
		}
		$var($bytes, maskArray, bitArray->toByteArray());
		for (int32_t i = 0; i < IPAddressName::MASKSIZE; ++i) {
			$nc(this->address)->set(IPAddressName::MASKSIZE + i, $nc(maskArray)->get(i));
		}
	}
}

int32_t IPAddressName::getType() {
	return $GeneralNameInterface::NAME_IP;
}

void IPAddressName::encode($DerOutputStream* out) {
	$nc(out)->putOctetString(this->address);
}

$String* IPAddressName::toString() {
	$useLocalCurrentObjectStackCache();
	try {
		return $str({"IPAddress: "_s, $(getName())});
	} catch ($IOException& ioe) {
		$var($HexDumpEncoder, enc, $new($HexDumpEncoder));
		return $str({"IPAddress: "_s, $(enc->encodeBuffer(this->address))});
	}
	$shouldNotReachHere();
}

$String* IPAddressName::getName() {
	$useLocalCurrentObjectStackCache();
	if (this->name != nullptr) {
		return this->name;
	}
	if (this->isIPv4) {
		$var($bytes, host, $new($bytes, 4));
		$System::arraycopy(this->address, 0, host, 0, 4);
		$set(this, name, $nc($($InetAddress::getByAddress(host)))->getHostAddress());
		if ($nc(this->address)->length == 8) {
			$var($bytes, mask, $new($bytes, 4));
			$System::arraycopy(this->address, 4, mask, 0, 4);
			$set(this, name, $str({this->name, $$str(u'/'), $($nc($($InetAddress::getByAddress(mask)))->getHostAddress())}));
		}
	} else {
		$var($bytes, host, $new($bytes, 16));
		$System::arraycopy(this->address, 0, host, 0, 16);
		$set(this, name, $nc($($InetAddress::getByAddress(host)))->getHostAddress());
		if ($nc(this->address)->length == 32) {
			$var($bytes, maskBytes, $new($bytes, 16));
			for (int32_t i = 16; i < 32; ++i) {
				maskBytes->set(i - 16, $nc(this->address)->get(i));
			}
			$var($BitArray, ba, $new($BitArray, 16 * 8, maskBytes));
			int32_t i = 0;
			for (; i < 16 * 8; ++i) {
				if (!ba->get(i)) {
					break;
				}
			}
			$set(this, name, $str({this->name, $$str(u'/'), $$str(i)}));
			for (; i < 16 * 8; ++i) {
				if (ba->get(i)) {
					$throwNew($IOException, $$str({"Invalid IPv6 subdomain - set bit "_s, $$str(i), " not contiguous"_s}));
				}
			}
		}
	}
	return this->name;
}

$bytes* IPAddressName::getBytes() {
	return $cast($bytes, $nc(this->address)->clone());
}

bool IPAddressName::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(IPAddressName, obj))) {
		return false;
	}
	$var(IPAddressName, otherName, $cast(IPAddressName, obj));
	$var($bytes, other, $nc(otherName)->address);
	if ($nc(other)->length != $nc(this->address)->length) {
		return false;
	}
	if ($nc(this->address)->length == 8 || $nc(this->address)->length == 32) {
		int32_t maskLen = $nc(this->address)->length / 2;
		for (int32_t i = 0; i < maskLen; ++i) {
			int8_t maskedThis = (int8_t)((int32_t)($nc(this->address)->get(i) & (uint32_t)(int32_t)$nc(this->address)->get(i + maskLen)));
			int8_t maskedOther = (int8_t)((int32_t)($nc(other)->get(i) & (uint32_t)(int32_t)other->get(i + maskLen)));
			if (maskedThis != maskedOther) {
				return false;
			}
		}
		for (int32_t i = maskLen; i < $nc(this->address)->length; ++i) {
			if ($nc(this->address)->get(i) != $nc(other)->get(i)) {
				return false;
			}
		}
		return true;
	} else {
		return $Arrays::equals(other, this->address);
	}
}

int32_t IPAddressName::hashCode() {
	int32_t retval = 0;
	for (int32_t i = 0; i < $nc(this->address)->length; ++i) {
		retval += $nc(this->address)->get(i) * i;
	}
	return retval;
}

int32_t IPAddressName::constrains($GeneralNameInterface* inputName) {
	$useLocalCurrentObjectStackCache();
	int32_t constraintType = 0;
	if (inputName == nullptr) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else if ($nc(inputName)->getType() != $GeneralNameInterface::NAME_IP) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else if ($nc(($cast(IPAddressName, inputName)))->equals(this)) {
		constraintType = $GeneralNameInterface::NAME_MATCH;
	} else {
		$var(IPAddressName, otherName, $cast(IPAddressName, inputName));
		$var($bytes, otherAddress, otherName->address);
		if ($nc(otherAddress)->length == 4 && $nc(this->address)->length == 4) {
			constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
		} else if ((otherAddress->length == 8 && $nc(this->address)->length == 8) || (otherAddress->length == 32 && $nc(this->address)->length == 32)) {
			bool otherSubsetOfThis = true;
			bool thisSubsetOfOther = true;
			bool thisEmpty = false;
			bool otherEmpty = false;
			int32_t maskOffset = $nc(this->address)->length / 2;
			for (int32_t i = 0; i < maskOffset; ++i) {
				if ((int8_t)((int32_t)($nc(this->address)->get(i) & (uint32_t)(int32_t)$nc(this->address)->get(i + maskOffset))) != $nc(this->address)->get(i)) {
					thisEmpty = true;
				}
				if ((int8_t)((int32_t)(otherAddress->get(i) & (uint32_t)(int32_t)otherAddress->get(i + maskOffset))) != otherAddress->get(i)) {
					otherEmpty = true;
				}
				if (!(((int8_t)((int32_t)($nc(this->address)->get(i + maskOffset) & (uint32_t)(int32_t)otherAddress->get(i + maskOffset))) == $nc(this->address)->get(i + maskOffset)) && ((int8_t)((int32_t)($nc(this->address)->get(i) & (uint32_t)(int32_t)$nc(this->address)->get(i + maskOffset))) == (int8_t)((int32_t)(otherAddress->get(i) & (uint32_t)(int32_t)$nc(this->address)->get(i + maskOffset)))))) {
					otherSubsetOfThis = false;
				}
				if (!(((int8_t)((int32_t)(otherAddress->get(i + maskOffset) & (uint32_t)(int32_t)$nc(this->address)->get(i + maskOffset))) == otherAddress->get(i + maskOffset)) && ((int8_t)((int32_t)(otherAddress->get(i) & (uint32_t)(int32_t)otherAddress->get(i + maskOffset))) == (int8_t)((int32_t)($nc(this->address)->get(i) & (uint32_t)(int32_t)otherAddress->get(i + maskOffset)))))) {
					thisSubsetOfOther = false;
				}
			}
			if (thisEmpty || otherEmpty) {
				if (thisEmpty && otherEmpty) {
					constraintType = $GeneralNameInterface::NAME_MATCH;
				} else if (thisEmpty) {
					constraintType = $GeneralNameInterface::NAME_WIDENS;
				} else {
					constraintType = $GeneralNameInterface::NAME_NARROWS;
				}
			} else if (otherSubsetOfThis) {
				constraintType = $GeneralNameInterface::NAME_NARROWS;
			} else if (thisSubsetOfOther) {
				constraintType = $GeneralNameInterface::NAME_WIDENS;
			} else {
				constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
			}
		} else if (otherAddress->length == 8 || otherAddress->length == 32) {
			int32_t i = 0;
			int32_t maskOffset = otherAddress->length / 2;
			for (; i < maskOffset; ++i) {
				if (((int32_t)($nc(this->address)->get(i) & (uint32_t)(int32_t)otherAddress->get(i + maskOffset))) != otherAddress->get(i)) {
					break;
				}
			}
			if (i == maskOffset) {
				constraintType = $GeneralNameInterface::NAME_WIDENS;
			} else {
				constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
			}
		} else if ($nc(this->address)->length == 8 || $nc(this->address)->length == 32) {
			int32_t i = 0;
			int32_t maskOffset = $nc(this->address)->length / 2;
			for (; i < maskOffset; ++i) {
				if (((int32_t)(otherAddress->get(i) & (uint32_t)(int32_t)$nc(this->address)->get(i + maskOffset))) != $nc(this->address)->get(i)) {
					break;
				}
			}
			if (i == maskOffset) {
				constraintType = $GeneralNameInterface::NAME_NARROWS;
			} else {
				constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
			}
		} else {
			constraintType = $GeneralNameInterface::NAME_SAME_TYPE;
		}
	}
	return constraintType;
}

int32_t IPAddressName::subtreeDepth() {
	$throwNew($UnsupportedOperationException, "subtreeDepth() not defined for IPAddressName"_s);
	$shouldNotReachHere();
}

IPAddressName::IPAddressName() {
}

$Class* IPAddressName::load$($String* name, bool initialize) {
	$loadClass(IPAddressName, name, initialize, &_IPAddressName_ClassInfo_, allocate$IPAddressName);
	return class$;
}

$Class* IPAddressName::class$ = nullptr;

		} // x509
	} // security
} // sun