#include <sun/security/util/ObjectIdentifier.h>

#include <java/io/IOException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/math/BigInteger.h>
#include <java/util/Arrays.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier$HugeOidNotSupportedByOldJDK.h>
#include <jcpp.h>

#undef MAXIMUM_OID_SIZE
#undef MAX_VALUE
#undef TWO

using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $Arrays = ::java::util::Arrays;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier$HugeOidNotSupportedByOldJDK = ::sun::security::util::ObjectIdentifier$HugeOidNotSupportedByOldJDK;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _ObjectIdentifier_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ObjectIdentifier, $assertionsDisabled)},
	{"MAXIMUM_OID_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectIdentifier, MAXIMUM_OID_SIZE)},
	{"encoding", "[B", nullptr, $PRIVATE, $field(ObjectIdentifier, encoding)},
	{"stringForm", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(ObjectIdentifier, stringForm)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectIdentifier, serialVersionUID)},
	{"components", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ObjectIdentifier, components)},
	{"componentLen", "I", nullptr, $PRIVATE, $field(ObjectIdentifier, componentLen)},
	{"componentsCalculated", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(ObjectIdentifier, componentsCalculated)},
	{"oidTable", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/String;Lsun/security/util/ObjectIdentifier;>;", $PRIVATE | $STATIC, $staticField(ObjectIdentifier, oidTable)},
	{}
};

$MethodInfo _ObjectIdentifier_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectIdentifier::*)($String*)>(&ObjectIdentifier::init$)), "java.io.IOException"},
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(ObjectIdentifier::*)($bytes*)>(&ObjectIdentifier::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectIdentifier::*)($DerInputStream*)>(&ObjectIdentifier::init$)), "java.io.IOException"},
	{"check", "([B)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*)>(&ObjectIdentifier::check)), "java.io.IOException"},
	{"checkCount", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&ObjectIdentifier::checkCount)), "java.io.IOException"},
	{"checkFirstComponent", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&ObjectIdentifier::checkFirstComponent)), "java.io.IOException"},
	{"checkFirstComponent", "(Ljava/math/BigInteger;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BigInteger*)>(&ObjectIdentifier::checkFirstComponent)), "java.io.IOException"},
	{"checkOidSize", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&ObjectIdentifier::checkOidSize)), "java.io.IOException"},
	{"checkOtherComponent", "(II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&ObjectIdentifier::checkOtherComponent)), "java.io.IOException"},
	{"checkOtherComponent", "(ILjava/math/BigInteger;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$BigInteger*)>(&ObjectIdentifier::checkOtherComponent)), "java.io.IOException"},
	{"checkSecondComponent", "(II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t)>(&ObjectIdentifier::checkSecondComponent)), "java.io.IOException"},
	{"checkSecondComponent", "(ILjava/math/BigInteger;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$BigInteger*)>(&ObjectIdentifier::checkSecondComponent)), "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, 0, $method(static_cast<void(ObjectIdentifier::*)($DerOutputStream*)>(&ObjectIdentifier::encode)), "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"init", "([II)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectIdentifier::*)($ints*,int32_t)>(&ObjectIdentifier::init)), "java.io.IOException"},
	{"of", "(Ljava/lang/String;)Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ObjectIdentifier*(*)($String*)>(&ObjectIdentifier::of)), "java.io.IOException"},
	{"of", "(Lsun/security/util/KnownOIDs;)Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ObjectIdentifier*(*)($KnownOIDs*)>(&ObjectIdentifier::of))},
	{"pack", "([BIIII)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t,int32_t,int32_t,int32_t)>(&ObjectIdentifier::pack))},
	{"pack7Oid", "([BII[BI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t,$bytes*,int32_t)>(&ObjectIdentifier::pack7Oid))},
	{"pack7Oid", "(I[BI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$bytes*,int32_t)>(&ObjectIdentifier::pack7Oid))},
	{"pack7Oid", "(Ljava/math/BigInteger;[BI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigInteger*,$bytes*,int32_t)>(&ObjectIdentifier::pack7Oid))},
	{"pack8", "([BII[BI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t,$bytes*,int32_t)>(&ObjectIdentifier::pack8))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectIdentifier::*)($ObjectInputStream*)>(&ObjectIdentifier::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toIntArray", "()[I", nullptr, $PRIVATE, $method(static_cast<$ints*(ObjectIdentifier::*)()>(&ObjectIdentifier::toIntArray))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectIdentifier::*)($ObjectOutputStream*)>(&ObjectIdentifier::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ObjectIdentifier_InnerClassesInfo_[] = {
	{"sun.security.util.ObjectIdentifier$HugeOidNotSupportedByOldJDK", "sun.security.util.ObjectIdentifier", "HugeOidNotSupportedByOldJDK", $STATIC},
	{}
};

$ClassInfo _ObjectIdentifier_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.util.ObjectIdentifier",
	"java.lang.Object",
	"java.io.Serializable",
	_ObjectIdentifier_FieldInfo_,
	_ObjectIdentifier_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectIdentifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.util.ObjectIdentifier$HugeOidNotSupportedByOldJDK"
};

$Object* allocate$ObjectIdentifier($Class* clazz) {
	return $of($alloc(ObjectIdentifier));
}

bool ObjectIdentifier::$assertionsDisabled = false;
$ConcurrentHashMap* ObjectIdentifier::oidTable = nullptr;

void ObjectIdentifier::readObject($ObjectInputStream* is) {
	$nc(is)->defaultReadObject();
	if (this->encoding == nullptr) {
		$var($ints, comp, $cast($ints, this->components));
		if (this->componentLen > $nc(comp)->length) {
			this->componentLen = comp->length;
		}
		checkOidSize(this->componentLen);
		init(comp, this->componentLen);
	} else {
		checkOidSize($nc(this->encoding)->length);
		check(this->encoding);
	}
}

void ObjectIdentifier::writeObject($ObjectOutputStream* os) {
	if (!this->componentsCalculated) {
		$var($ints, comps, toIntArray());
		if (comps != nullptr) {
			$set(this, components, comps);
			this->componentLen = comps->length;
		} else {
			$init($ObjectIdentifier$HugeOidNotSupportedByOldJDK);
			$set(this, components, $ObjectIdentifier$HugeOidNotSupportedByOldJDK::theOne);
		}
		this->componentsCalculated = true;
	}
	$nc(os)->defaultWriteObject();
}

void ObjectIdentifier::init$($String* oid) {
	$useLocalCurrentObjectStackCache();
	$set(this, encoding, nullptr);
	$set(this, components, nullptr);
	this->componentLen = -1;
	this->componentsCalculated = false;
	int32_t ch = u'.';
	int32_t start = 0;
	int32_t end = 0;
	int32_t pos = 0;
	$var($bytes, tmp, $new($bytes, $nc(oid)->length()));
	int32_t first = 0;
	int32_t second = 0;
	int32_t count = 0;
	try {
		$var($String, comp, nullptr);
		do {
			int32_t length = 0;
			end = oid->indexOf(ch, start);
			if (end == -1) {
				$assign(comp, oid->substring(start));
				length = oid->length() - start;
			} else {
				$assign(comp, oid->substring(start, end));
				length = end - start;
			}
			if (length > 9) {
				$var($BigInteger, bignum, $new($BigInteger, comp));
				if (count == 0) {
					checkFirstComponent(bignum);
					first = bignum->intValue();
				} else {
					if (count == 1) {
						checkSecondComponent(first, bignum);
						$assign(bignum, bignum->add($($BigInteger::valueOf((int64_t)(40 * first)))));
					} else {
						checkOtherComponent(count, bignum);
					}
					pos += pack7Oid(bignum, tmp, pos);
				}
			} else {
				int32_t num = $Integer::parseInt(comp);
				if (count == 0) {
					checkFirstComponent(num);
					first = num;
				} else {
					if (count == 1) {
						checkSecondComponent(first, num);
						num += 40 * first;
					} else {
						checkOtherComponent(count, num);
					}
					pos += pack7Oid(num, tmp, pos);
				}
			}
			start = end + 1;
			++count;
			checkOidSize(pos);
		} while (end != -1);
		checkCount(count);
		$set(this, encoding, $new($bytes, pos));
		$System::arraycopy(tmp, 0, this->encoding, 0, pos);
		$set(this, stringForm, oid);
	} catch ($IOException& ioe) {
		$throw(ioe);
	} catch ($Exception& e) {
		$throwNew($IOException, $$str({"ObjectIdentifier() -- Invalid format: "_s, $(e->toString())}), e);
	}
}

void ObjectIdentifier::init$($bytes* encoding) {
	$set(this, encoding, nullptr);
	$set(this, components, nullptr);
	this->componentLen = -1;
	this->componentsCalculated = false;
	checkOidSize($nc(encoding)->length);
	check(encoding);
	$set(this, encoding, encoding);
}

void ObjectIdentifier::init$($DerInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$set(this, encoding, nullptr);
	$set(this, components, nullptr);
	this->componentLen = -1;
	this->componentsCalculated = false;
	$set(this, encoding, $nc($($nc($($nc(in)->getDerValue()))->getOID()))->encoding);
}

void ObjectIdentifier::init($ints* components, int32_t length) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = 0;
	$var($bytes, tmp, $new($bytes, length * 5 + 1));
	if ($nc(components)->get(1) < $Integer::MAX_VALUE - components->get(0) * 40) {
		pos += pack7Oid(components->get(0) * 40 + components->get(1), tmp, pos);
	} else {
		$var($BigInteger, big, $BigInteger::valueOf((int64_t)components->get(1)));
		$assign(big, $nc(big)->add($($BigInteger::valueOf((int64_t)(components->get(0) * 40)))));
		pos += pack7Oid(big, tmp, pos);
	}
	for (int32_t i = 2; i < length; ++i) {
		pos += pack7Oid($nc(components)->get(i), tmp, pos);
		checkOidSize(pos);
	}
	$set(this, encoding, $new($bytes, pos));
	$System::arraycopy(tmp, 0, this->encoding, 0, pos);
}

ObjectIdentifier* ObjectIdentifier::of($String* oidStr) {
	$init(ObjectIdentifier);
	$var(ObjectIdentifier, oid, $cast(ObjectIdentifier, $nc(ObjectIdentifier::oidTable)->get(oidStr)));
	if (oid == nullptr) {
		$assign(oid, $new(ObjectIdentifier, oidStr));
		$nc(ObjectIdentifier::oidTable)->put(oidStr, oid);
	}
	return oid;
}

ObjectIdentifier* ObjectIdentifier::of($KnownOIDs* o) {
	$init(ObjectIdentifier);
	$useLocalCurrentObjectStackCache();
	$var($String, oidStr, $nc(o)->value());
	$var(ObjectIdentifier, oid, $cast(ObjectIdentifier, $nc(ObjectIdentifier::oidTable)->get(oidStr)));
	if (oid == nullptr) {
		try {
			$assign(oid, $new(ObjectIdentifier, oidStr));
		} catch ($IOException& ioe) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(ioe));
		}
		$nc(ObjectIdentifier::oidTable)->put(oidStr, oid);
	}
	return oid;
}

void ObjectIdentifier::encode($DerOutputStream* out) {
	$nc(out)->write($DerValue::tag_ObjectId, this->encoding);
}

bool ObjectIdentifier::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(ObjectIdentifier, obj) == false) {
		return false;
	}
	$var(ObjectIdentifier, other, $cast(ObjectIdentifier, obj));
	return $Arrays::equals(this->encoding, $nc(other)->encoding);
}

int32_t ObjectIdentifier::hashCode() {
	return $Arrays::hashCode(this->encoding);
}

$ints* ObjectIdentifier::toIntArray() {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(this->encoding)->length;
	$var($ints, result, $new($ints, 20));
	int32_t which = 0;
	int32_t fromPos = 0;
	for (int32_t i = 0; i < length; ++i) {
		if (((int32_t)($nc(this->encoding)->get(i) & (uint32_t)128)) == 0) {
			if (i - fromPos + 1 > 4) {
				$var($BigInteger, big, $new($BigInteger, $(pack(this->encoding, fromPos, i - fromPos + 1, 7, 8))));
				if (fromPos == 0) {
					result->set(which++, 2);
					$var($BigInteger, second, big->subtract($($BigInteger::valueOf((int64_t)80))));
					if ($nc(second)->compareTo($($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE))) == 1) {
						return nullptr;
					} else {
						result->set(which++, second->intValue());
					}
				} else if (big->compareTo($($BigInteger::valueOf((int64_t)$Integer::MAX_VALUE))) == 1) {
					return nullptr;
				} else {
					result->set(which++, big->intValue());
				}
			} else {
				int32_t retval = 0;
				for (int32_t j = fromPos; j <= i; ++j) {
					retval <<= 7;
					int8_t tmp = $nc(this->encoding)->get(j);
					retval |= ((int32_t)(tmp & (uint32_t)127));
				}
				if (fromPos == 0) {
					if (retval < 80) {
						result->set(which++, retval / 40);
						result->set(which++, retval % 40);
					} else {
						result->set(which++, 2);
						result->set(which++, retval - 80);
					}
				} else {
					result->set(which++, retval);
				}
			}
			fromPos = i + 1;
		}
		if (which >= result->length) {
			$assign(result, $Arrays::copyOf(result, which + 10));
		}
	}
	return $Arrays::copyOf(result, which);
}

$String* ObjectIdentifier::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, this->stringForm);
	if (s == nullptr) {
		int32_t length = $nc(this->encoding)->length;
		$var($StringBuilder, sb, $new($StringBuilder, length * 4));
		int32_t fromPos = 0;
		for (int32_t i = 0; i < length; ++i) {
			if (((int32_t)($nc(this->encoding)->get(i) & (uint32_t)128)) == 0) {
				if (fromPos != 0) {
					sb->append(u'.');
				}
				if (i - fromPos + 1 > 4) {
					$var($BigInteger, big, $new($BigInteger, $(pack(this->encoding, fromPos, i - fromPos + 1, 7, 8))));
					if (fromPos == 0) {
						sb->append("2."_s);
						sb->append($($of(big->subtract($($BigInteger::valueOf((int64_t)80))))));
					} else {
						sb->append($of(big));
					}
				} else {
					int32_t retval = 0;
					for (int32_t j = fromPos; j <= i; ++j) {
						retval <<= 7;
						int8_t tmp = $nc(this->encoding)->get(j);
						retval |= ((int32_t)(tmp & (uint32_t)127));
					}
					if (fromPos == 0) {
						if (retval < 80) {
							sb->append(retval / 40);
							sb->append(u'.');
							sb->append(retval % 40);
						} else {
							sb->append("2."_s);
							sb->append(retval - 80);
						}
					} else {
						sb->append(retval);
					}
				}
				fromPos = i + 1;
			}
		}
		$assign(s, sb->toString());
		$set(this, stringForm, s);
	}
	return s;
}

$bytes* ObjectIdentifier::pack($bytes* in, int32_t ioffset, int32_t ilength, int32_t iw, int32_t ow) {
	$init(ObjectIdentifier);
	if (!ObjectIdentifier::$assertionsDisabled && !(iw > 0 && iw <= 8)) {
		$throwNew($AssertionError, $of("input NUB must be between 1 and 8"_s));
	}
	if (!ObjectIdentifier::$assertionsDisabled && !(ow > 0 && ow <= 8)) {
		$throwNew($AssertionError, $of("output NUB must be between 1 and 8"_s));
	}
	if (iw == ow) {
		return $cast($bytes, $nc(in)->clone());
	}
	int32_t bits = ilength * iw;
	$var($bytes, out, $new($bytes, $div((bits + ow - 1), ow)));
	int32_t ipos = 0;
	int32_t opos = $div((bits + ow - 1), ow) * ow - bits;
	while (ipos < bits) {
		int32_t count = iw - $mod(ipos, iw);
		if (count > ow - $mod(opos, ow)) {
			count = ow - $mod(opos, ow);
		}
		(*out)[$div(opos, ow)] |= $sl((int32_t)(($sr($nc(in)->get(ioffset + $div(ipos, iw)) + 256, iw - $mod(ipos, iw) - count)) & (uint32_t)(($sl(1, count)) - 1)), ow - $mod(opos, ow) - count);
		ipos += count;
		opos += count;
	}
	return out;
}

int32_t ObjectIdentifier::pack7Oid($bytes* in, int32_t ioffset, int32_t ilength, $bytes* out, int32_t ooffset) {
	$init(ObjectIdentifier);
	$var($bytes, pack, ObjectIdentifier::pack(in, ioffset, ilength, 8, 7));
	int32_t firstNonZero = $nc(pack)->length - 1;
	for (int32_t i = pack->length - 2; i >= 0; --i) {
		if (pack->get(i) != 0) {
			firstNonZero = i;
		}
		(*pack)[i] |= 128;
	}
	$System::arraycopy(pack, firstNonZero, out, ooffset, pack->length - firstNonZero);
	return pack->length - firstNonZero;
}

int32_t ObjectIdentifier::pack8($bytes* in, int32_t ioffset, int32_t ilength, $bytes* out, int32_t ooffset) {
	$init(ObjectIdentifier);
	$var($bytes, pack, ObjectIdentifier::pack(in, ioffset, ilength, 7, 8));
	int32_t firstNonZero = $nc(pack)->length - 1;
	for (int32_t i = pack->length - 2; i >= 0; --i) {
		if (pack->get(i) != 0) {
			firstNonZero = i;
		}
	}
	$System::arraycopy(pack, firstNonZero, out, ooffset, pack->length - firstNonZero);
	return pack->length - firstNonZero;
}

int32_t ObjectIdentifier::pack7Oid(int32_t input, $bytes* out, int32_t ooffset) {
	$init(ObjectIdentifier);
	$var($bytes, b, $new($bytes, 4));
	b->set(0, (int8_t)(input >> 24));
	b->set(1, (int8_t)(input >> 16));
	b->set(2, (int8_t)(input >> 8));
	b->set(3, (int8_t)(input));
	return pack7Oid(b, 0, 4, out, ooffset);
}

int32_t ObjectIdentifier::pack7Oid($BigInteger* input, $bytes* out, int32_t ooffset) {
	$init(ObjectIdentifier);
	$var($bytes, b, $nc(input)->toByteArray());
	return pack7Oid(b, 0, $nc(b)->length, out, ooffset);
}

void ObjectIdentifier::check($bytes* encoding) {
	$init(ObjectIdentifier);
	int32_t length = $nc(encoding)->length;
	if (length < 1 || ((int32_t)(encoding->get(length - 1) & (uint32_t)128)) != 0) {
		$throwNew($IOException, "ObjectIdentifier() -- Invalid DER encoding, not ended"_s);
	}
	for (int32_t i = 0; i < length; ++i) {
		if (encoding->get(i) == (int8_t)128 && (i == 0 || ((int32_t)(encoding->get(i - 1) & (uint32_t)128)) == 0)) {
			$throwNew($IOException, "ObjectIdentifier() -- Invalid DER encoding, useless extra octet detected"_s);
		}
	}
}

void ObjectIdentifier::checkCount(int32_t count) {
	$init(ObjectIdentifier);
	if (count < 2) {
		$throwNew($IOException, "ObjectIdentifier() -- Must be at least two oid components "_s);
	}
}

void ObjectIdentifier::checkFirstComponent(int32_t first) {
	$init(ObjectIdentifier);
	if (first < 0 || first > 2) {
		$throwNew($IOException, "ObjectIdentifier() -- First oid component is invalid "_s);
	}
}

void ObjectIdentifier::checkFirstComponent($BigInteger* first) {
	$init(ObjectIdentifier);
	bool var$0 = $nc(first)->signum() == -1;
	if (var$0 || $nc(first)->compareTo($BigInteger::TWO) > 0) {
		$throwNew($IOException, "ObjectIdentifier() -- First oid component is invalid "_s);
	}
}

void ObjectIdentifier::checkSecondComponent(int32_t first, int32_t second) {
	$init(ObjectIdentifier);
	if (second < 0 || first != 2 && second > 39) {
		$throwNew($IOException, "ObjectIdentifier() -- Second oid component is invalid "_s);
	}
}

void ObjectIdentifier::checkSecondComponent(int32_t first, $BigInteger* second) {
	$init(ObjectIdentifier);
	bool var$0 = $nc(second)->signum() == -1;
	if (var$0 || first != 2 && $nc(second)->compareTo($($BigInteger::valueOf((int64_t)39))) == 1) {
		$throwNew($IOException, "ObjectIdentifier() -- Second oid component is invalid "_s);
	}
}

void ObjectIdentifier::checkOtherComponent(int32_t i, int32_t num) {
	$init(ObjectIdentifier);
	$useLocalCurrentObjectStackCache();
	if (num < 0) {
		$throwNew($IOException, $$str({"ObjectIdentifier() -- oid component #"_s, $$str((i + 1)), " must be non-negative "_s}));
	}
}

void ObjectIdentifier::checkOtherComponent(int32_t i, $BigInteger* num) {
	$init(ObjectIdentifier);
	$useLocalCurrentObjectStackCache();
	if ($nc(num)->signum() == -1) {
		$throwNew($IOException, $$str({"ObjectIdentifier() -- oid component #"_s, $$str((i + 1)), " must be non-negative "_s}));
	}
}

void ObjectIdentifier::checkOidSize(int32_t oidLength) {
	$init(ObjectIdentifier);
	$useLocalCurrentObjectStackCache();
	if (oidLength > ObjectIdentifier::MAXIMUM_OID_SIZE) {
		$throwNew($IOException, $$str({"ObjectIdentifier encoded length exceeds the restriction in JDK (OId length(>=): "_s, $$str(oidLength), ", Restriction: "_s, $$str(ObjectIdentifier::MAXIMUM_OID_SIZE), ")"_s}));
	}
}

void clinit$ObjectIdentifier($Class* class$) {
	ObjectIdentifier::$assertionsDisabled = !ObjectIdentifier::class$->desiredAssertionStatus();
	$assignStatic(ObjectIdentifier::oidTable, $new($ConcurrentHashMap));
}

ObjectIdentifier::ObjectIdentifier() {
}

$Class* ObjectIdentifier::load$($String* name, bool initialize) {
	$loadClass(ObjectIdentifier, name, initialize, &_ObjectIdentifier_ClassInfo_, clinit$ObjectIdentifier, allocate$ObjectIdentifier);
	return class$;
}

$Class* ObjectIdentifier::class$ = nullptr;

		} // util
	} // security
} // sun