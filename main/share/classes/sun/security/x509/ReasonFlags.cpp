#include <sun/security/x509/ReasonFlags.h>

#include <java/io/IOException.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <jcpp.h>

#undef AA_COMPROMISE
#undef AFFILIATION_CHANGED
#undef CA_COMPROMISE
#undef CERTIFICATE_HOLD
#undef CESSATION_OF_OPERATION
#undef FALSE
#undef KEY_COMPROMISE
#undef NAMES
#undef PRIVILEGE_WITHDRAWN
#undef SUPERSEDED
#undef UNUSED

using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $BitArray = ::sun::security::util::BitArray;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _ReasonFlags_FieldInfo_[] = {
	{"UNUSED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReasonFlags, UNUSED)},
	{"KEY_COMPROMISE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReasonFlags, KEY_COMPROMISE)},
	{"CA_COMPROMISE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReasonFlags, CA_COMPROMISE)},
	{"AFFILIATION_CHANGED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReasonFlags, AFFILIATION_CHANGED)},
	{"SUPERSEDED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReasonFlags, SUPERSEDED)},
	{"CESSATION_OF_OPERATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReasonFlags, CESSATION_OF_OPERATION)},
	{"CERTIFICATE_HOLD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReasonFlags, CERTIFICATE_HOLD)},
	{"PRIVILEGE_WITHDRAWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReasonFlags, PRIVILEGE_WITHDRAWN)},
	{"AA_COMPROMISE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ReasonFlags, AA_COMPROMISE)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ReasonFlags, NAMES)},
	{"bitString", "[Z", nullptr, $PRIVATE, $field(ReasonFlags, bitString)},
	{}
};

$MethodInfo _ReasonFlags_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(ReasonFlags::*)($bytes*)>(&ReasonFlags::init$))},
	{"<init>", "([Z)V", nullptr, $PUBLIC, $method(static_cast<void(ReasonFlags::*)($booleans*)>(&ReasonFlags::init$))},
	{"<init>", "(Lsun/security/util/BitArray;)V", nullptr, $PUBLIC, $method(static_cast<void(ReasonFlags::*)($BitArray*)>(&ReasonFlags::init$))},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ReasonFlags::*)($DerInputStream*)>(&ReasonFlags::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(ReasonFlags::*)($DerValue*)>(&ReasonFlags::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getFlags", "()[Z", nullptr, $PUBLIC},
	{"isSet", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(ReasonFlags::*)(int32_t)>(&ReasonFlags::isSet))},
	{"name2Index", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&ReasonFlags::name2Index)), "java.io.IOException"},
	{"set", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(ReasonFlags::*)(int32_t,bool)>(&ReasonFlags::set))},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ReasonFlags_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.ReasonFlags",
	"java.lang.Object",
	nullptr,
	_ReasonFlags_FieldInfo_,
	_ReasonFlags_MethodInfo_
};

$Object* allocate$ReasonFlags($Class* clazz) {
	return $of($alloc(ReasonFlags));
}

$String* ReasonFlags::UNUSED = nullptr;
$String* ReasonFlags::KEY_COMPROMISE = nullptr;
$String* ReasonFlags::CA_COMPROMISE = nullptr;
$String* ReasonFlags::AFFILIATION_CHANGED = nullptr;
$String* ReasonFlags::SUPERSEDED = nullptr;
$String* ReasonFlags::CESSATION_OF_OPERATION = nullptr;
$String* ReasonFlags::CERTIFICATE_HOLD = nullptr;
$String* ReasonFlags::PRIVILEGE_WITHDRAWN = nullptr;
$String* ReasonFlags::AA_COMPROMISE = nullptr;
$StringArray* ReasonFlags::NAMES = nullptr;

int32_t ReasonFlags::name2Index($String* name) {
	$init(ReasonFlags);
	for (int32_t i = 0; i < $nc(ReasonFlags::NAMES)->length; ++i) {
		if ($nc($nc(ReasonFlags::NAMES)->get(i))->equalsIgnoreCase(name)) {
			return i;
		}
	}
	$throwNew($IOException, "Name not recognized by ReasonFlags"_s);
}

bool ReasonFlags::isSet(int32_t position) {
	return (position < $nc(this->bitString)->length) && $nc(this->bitString)->get(position);
}

void ReasonFlags::set(int32_t position, bool val) {
	if (position >= $nc(this->bitString)->length) {
		$var($booleans, tmp, $new($booleans, position + 1));
		$System::arraycopy(this->bitString, 0, tmp, 0, $nc(this->bitString)->length);
		$set(this, bitString, tmp);
	}
	$nc(this->bitString)->set(position, val);
}

void ReasonFlags::init$($bytes* reasons) {
	$set(this, bitString, $$new($BitArray, $nc(reasons)->length * 8, reasons)->toBooleanArray());
}

void ReasonFlags::init$($booleans* reasons) {
	$set(this, bitString, reasons);
}

void ReasonFlags::init$($BitArray* reasons) {
	$set(this, bitString, $nc(reasons)->toBooleanArray());
}

void ReasonFlags::init$($DerInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, derVal, $nc(in)->getDerValue());
	$set(this, bitString, $nc($($nc(derVal)->getUnalignedBitString(true)))->toBooleanArray());
}

void ReasonFlags::init$($DerValue* derVal) {
	$set(this, bitString, $nc($($nc(derVal)->getUnalignedBitString(true)))->toBooleanArray());
}

$booleans* ReasonFlags::getFlags() {
	return this->bitString;
}

void ReasonFlags::set($String* name, Object$* obj) {
	if (!($instanceOf($Boolean, obj))) {
		$throwNew($IOException, "Attribute must be of type Boolean."_s);
	}
	bool val = $nc(($cast($Boolean, obj)))->booleanValue();
	set(name2Index(name), val);
}

$Object* ReasonFlags::get($String* name) {
	return $of($Boolean::valueOf(isSet(name2Index(name))));
}

void ReasonFlags::delete$($String* name) {
	$init($Boolean);
	set(name, $of($Boolean::FALSE));
}

$String* ReasonFlags::toString() {
	$var($StringBuilder, sb, $new($StringBuilder, "Reason Flags [\n"_s));
	if (isSet(0)) {
		sb->append("  Unused\n"_s);
	}
	if (isSet(1)) {
		sb->append("  Key Compromise\n"_s);
	}
	if (isSet(2)) {
		sb->append("  CA Compromise\n"_s);
	}
	if (isSet(3)) {
		sb->append("  Affiliation_Changed\n"_s);
	}
	if (isSet(4)) {
		sb->append("  Superseded\n"_s);
	}
	if (isSet(5)) {
		sb->append("  Cessation Of Operation\n"_s);
	}
	if (isSet(6)) {
		sb->append("  Certificate Hold\n"_s);
	}
	if (isSet(7)) {
		sb->append("  Privilege Withdrawn\n"_s);
	}
	if (isSet(8)) {
		sb->append("  AA Compromise\n"_s);
	}
	sb->append("]\n"_s);
	return sb->toString();
}

void ReasonFlags::encode($DerOutputStream* out) {
	$nc(out)->putTruncatedUnalignedBitString($$new($BitArray, this->bitString));
}

$Enumeration* ReasonFlags::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	for (int32_t i = 0; i < $nc(ReasonFlags::NAMES)->length; ++i) {
		elements->addElement($nc(ReasonFlags::NAMES)->get(i));
	}
	return (elements->elements());
}

void clinit$ReasonFlags($Class* class$) {
	$assignStatic(ReasonFlags::UNUSED, "unused"_s);
	$assignStatic(ReasonFlags::KEY_COMPROMISE, "key_compromise"_s);
	$assignStatic(ReasonFlags::CA_COMPROMISE, "ca_compromise"_s);
	$assignStatic(ReasonFlags::AFFILIATION_CHANGED, "affiliation_changed"_s);
	$assignStatic(ReasonFlags::SUPERSEDED, "superseded"_s);
	$assignStatic(ReasonFlags::CESSATION_OF_OPERATION, "cessation_of_operation"_s);
	$assignStatic(ReasonFlags::CERTIFICATE_HOLD, "certificate_hold"_s);
	$assignStatic(ReasonFlags::PRIVILEGE_WITHDRAWN, "privilege_withdrawn"_s);
	$assignStatic(ReasonFlags::AA_COMPROMISE, "aa_compromise"_s);
	$assignStatic(ReasonFlags::NAMES, $new($StringArray, {
		ReasonFlags::UNUSED,
		ReasonFlags::KEY_COMPROMISE,
		ReasonFlags::CA_COMPROMISE,
		ReasonFlags::AFFILIATION_CHANGED,
		ReasonFlags::SUPERSEDED,
		ReasonFlags::CESSATION_OF_OPERATION,
		ReasonFlags::CERTIFICATE_HOLD,
		ReasonFlags::PRIVILEGE_WITHDRAWN,
		ReasonFlags::AA_COMPROMISE
	}));
}

ReasonFlags::ReasonFlags() {
}

$Class* ReasonFlags::load$($String* name, bool initialize) {
	$loadClass(ReasonFlags, name, initialize, &_ReasonFlags_ClassInfo_, clinit$ReasonFlags, allocate$ReasonFlags);
	return class$;
}

$Class* ReasonFlags::class$ = nullptr;

		} // x509
	} // security
} // sun