#include <sun/security/x509/RDN.h>

#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/StringJoiner.h>
#include <sun/security/util/DerEncoder.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AVA.h>
#include <sun/security/x509/AVAComparator.h>
#include <sun/security/x509/X500Name.h>
#include <jcpp.h>

#undef RFC2253

using $DerEncoderArray = $Array<::sun::security::util::DerEncoder>;
using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $AVAArray = $Array<::sun::security::x509::AVA>;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $StringJoiner = ::java::util::StringJoiner;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AVA = ::sun::security::x509::AVA;
using $AVAComparator = ::sun::security::x509::AVAComparator;
using $X500Name = ::sun::security::x509::X500Name;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _RDN_FieldInfo_[] = {
	{"assertion", "[Lsun/security/x509/AVA;", nullptr, $FINAL, $field(RDN, assertion)},
	{"avaList", "Ljava/util/List;", "Ljava/util/List<Lsun/security/x509/AVA;>;", $PRIVATE | $VOLATILE, $field(RDN, avaList)},
	{"canonicalString", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(RDN, canonicalString)},
	{}
};

$MethodInfo _RDN_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RDN::*)($String*)>(&RDN::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(RDN::*)($String*,$Map*)>(&RDN::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(RDN::*)($String*,$String*)>(&RDN::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", 0, $method(static_cast<void(RDN::*)($String*,$String*,$Map*)>(&RDN::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, 0, $method(static_cast<void(RDN::*)($DerValue*)>(&RDN::init$)), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(RDN::*)(int32_t)>(&RDN::init$))},
	{"<init>", "(Lsun/security/x509/AVA;)V", nullptr, $PUBLIC, $method(static_cast<void(RDN::*)($AVA*)>(&RDN::init$))},
	{"<init>", "([Lsun/security/x509/AVA;)V", nullptr, $PUBLIC, $method(static_cast<void(RDN::*)($AVAArray*)>(&RDN::init$))},
	{"avas", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/x509/AVA;>;", $PUBLIC},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"findAttribute", "(Lsun/security/util/ObjectIdentifier;)Lsun/security/util/DerValue;", nullptr, 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toRFC1779String", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toRFC1779String", "(Ljava/util/Map;)Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)Ljava/lang/String;", $PUBLIC},
	{"toRFC2253String", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toRFC2253String", "(Ljava/util/Map;)Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)Ljava/lang/String;", $PUBLIC},
	{"toRFC2253String", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toRFC2253StringInternal", "(ZLjava/util/Map;)Ljava/lang/String;", "(ZLjava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)Ljava/lang/String;", $PRIVATE, $method(static_cast<$String*(RDN::*)(bool,$Map*)>(&RDN::toRFC2253StringInternal))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RDN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.RDN",
	"java.lang.Object",
	nullptr,
	_RDN_FieldInfo_,
	_RDN_MethodInfo_
};

$Object* allocate$RDN($Class* clazz) {
	return $of($alloc(RDN));
}

void RDN::init$($String* name) {
	RDN::init$(name, $($Collections::emptyMap()));
}

void RDN::init$($String* name, $Map* keywordMap) {
	int32_t quoteCount = 0;
	int32_t searchOffset = 0;
	int32_t avaOffset = 0;
	$var($List, avaVec, $new($ArrayList, 3));
	int32_t nextPlus = $nc(name)->indexOf((int32_t)u'+');
	while (nextPlus >= 0) {
		quoteCount += $X500Name::countQuotes(name, searchOffset, nextPlus);
		if (nextPlus > 0 && name->charAt(nextPlus - 1) != u'\\' && quoteCount != 1) {
			$var($String, avaString, name->substring(avaOffset, nextPlus));
			if (avaString->isEmpty()) {
				$throwNew($IOException, $$str({"empty AVA in RDN \""_s, name, "\""_s}));
			}
			$var($AVA, ava, $new($AVA, static_cast<$Reader*>($$new($StringReader, avaString)), keywordMap));
			avaVec->add(ava);
			avaOffset = nextPlus + 1;
			quoteCount = 0;
		}
		searchOffset = nextPlus + 1;
		nextPlus = name->indexOf((int32_t)u'+', searchOffset);
	}
	$var($String, avaString, name->substring(avaOffset));
	if (avaString->isEmpty()) {
		$throwNew($IOException, $$str({"empty AVA in RDN \""_s, name, "\""_s}));
	}
	$var($AVA, ava, $new($AVA, static_cast<$Reader*>($$new($StringReader, avaString)), keywordMap));
	avaVec->add(ava);
	$set(this, assertion, $fcast($AVAArray, avaVec->toArray($$new($AVAArray, avaVec->size()))));
}

void RDN::init$($String* name, $String* format) {
	RDN::init$(name, format, $($Collections::emptyMap()));
}

void RDN::init$($String* name, $String* format, $Map* keywordMap) {
	if ($nc(format)->equalsIgnoreCase("RFC2253"_s) == false) {
		$throwNew($IOException, $$str({"Unsupported format "_s, format}));
	}
	int32_t searchOffset = 0;
	int32_t avaOffset = 0;
	$var($List, avaVec, $new($ArrayList, 3));
	int32_t nextPlus = $nc(name)->indexOf((int32_t)u'+');
	while (nextPlus >= 0) {
		if (nextPlus > 0 && name->charAt(nextPlus - 1) != u'\\') {
			$var($String, avaString, name->substring(avaOffset, nextPlus));
			if (avaString->isEmpty()) {
				$throwNew($IOException, $$str({"empty AVA in RDN \""_s, name, "\""_s}));
			}
			$var($AVA, ava, $new($AVA, $$new($StringReader, avaString), $AVA::RFC2253, keywordMap));
			avaVec->add(ava);
			avaOffset = nextPlus + 1;
		}
		searchOffset = nextPlus + 1;
		nextPlus = name->indexOf((int32_t)u'+', searchOffset);
	}
	$var($String, avaString, name->substring(avaOffset));
	if (avaString->isEmpty()) {
		$throwNew($IOException, $$str({"empty AVA in RDN \""_s, name, "\""_s}));
	}
	$var($AVA, ava, $new($AVA, $$new($StringReader, avaString), $AVA::RFC2253, keywordMap));
	avaVec->add(ava);
	$set(this, assertion, $fcast($AVAArray, avaVec->toArray($$new($AVAArray, avaVec->size()))));
}

void RDN::init$($DerValue* rdn) {
	if ($nc(rdn)->tag != $DerValue::tag_Set) {
		$throwNew($IOException, "X500 RDN"_s);
	}
	$var($DerInputStream, dis, $new($DerInputStream, $($nc(rdn)->toByteArray())));
	$var($DerValueArray, avaset, dis->getSet(5));
	$set(this, assertion, $new($AVAArray, $nc(avaset)->length));
	for (int32_t i = 0; i < avaset->length; ++i) {
		$nc(this->assertion)->set(i, $$new($AVA, avaset->get(i)));
	}
}

void RDN::init$(int32_t i) {
	$set(this, assertion, $new($AVAArray, i));
}

void RDN::init$($AVA* ava) {
	if (ava == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, assertion, $new($AVAArray, {ava}));
}

void RDN::init$($AVAArray* avas) {
	$set(this, assertion, $cast($AVAArray, $nc(avas)->clone()));
	for (int32_t i = 0; i < $nc(this->assertion)->length; ++i) {
		if ($nc(this->assertion)->get(i) == nullptr) {
			$throwNew($NullPointerException);
		}
	}
}

$List* RDN::avas() {
	$var($List, list, this->avaList);
	if (list == nullptr) {
		$assign(list, $Collections::unmodifiableList($($Arrays::asList(this->assertion))));
		$set(this, avaList, list);
	}
	return list;
}

int32_t RDN::size() {
	return $nc(this->assertion)->length;
}

bool RDN::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(RDN, obj) == false) {
		return false;
	}
	$var(RDN, other, $cast(RDN, obj));
	if ($nc(this->assertion)->length != $nc($nc(other)->assertion)->length) {
		return false;
	}
	$var($String, thisCanon, this->toRFC2253String(true));
	$var($String, otherCanon, $nc(other)->toRFC2253String(true));
	return $nc(thisCanon)->equals(otherCanon);
}

int32_t RDN::hashCode() {
	return $nc($(toRFC2253String(true)))->hashCode();
}

$DerValue* RDN::findAttribute($ObjectIdentifier* oid) {
	for (int32_t i = 0; i < $nc(this->assertion)->length; ++i) {
		if ($nc($nc($nc(this->assertion)->get(i))->oid)->equals(oid)) {
			return $nc($nc(this->assertion)->get(i))->value;
		}
	}
	return nullptr;
}

void RDN::encode($DerOutputStream* out) {
	$nc(out)->putOrderedSetOf($DerValue::tag_Set, $fcast($DerEncoderArray, this->assertion));
}

$String* RDN::toString() {
	if ($nc(this->assertion)->length == 1) {
		return $nc($nc(this->assertion)->get(0))->toString();
	}
	$var($StringJoiner, sj, $new($StringJoiner, " + "_s));
	for (int32_t i = 0; i < $nc(this->assertion)->length; ++i) {
		sj->add($($nc($nc(this->assertion)->get(i))->toString()));
	}
	return sj->toString();
}

$String* RDN::toRFC1779String() {
	return toRFC1779String($($Collections::emptyMap()));
}

$String* RDN::toRFC1779String($Map* oidMap) {
	if ($nc(this->assertion)->length == 1) {
		return $nc($nc(this->assertion)->get(0))->toRFC1779String(oidMap);
	}
	$var($StringJoiner, sj, $new($StringJoiner, " + "_s));
	for (int32_t i = 0; i < $nc(this->assertion)->length; ++i) {
		sj->add($($nc($nc(this->assertion)->get(i))->toRFC1779String(oidMap)));
	}
	return sj->toString();
}

$String* RDN::toRFC2253String() {
	return toRFC2253StringInternal(false, $($Collections::emptyMap()));
}

$String* RDN::toRFC2253String($Map* oidMap) {
	return toRFC2253StringInternal(false, oidMap);
}

$String* RDN::toRFC2253String(bool canonical) {
	if (canonical == false) {
		return toRFC2253StringInternal(false, $($Collections::emptyMap()));
	}
	$var($String, c, this->canonicalString);
	if (c == nullptr) {
		$assign(c, toRFC2253StringInternal(true, $($Collections::emptyMap())));
		$set(this, canonicalString, c);
	}
	return c;
}

$String* RDN::toRFC2253StringInternal(bool canonical, $Map* oidMap) {
	if ($nc(this->assertion)->length == 1) {
		return canonical ? $nc($nc(this->assertion)->get(0))->toRFC2253CanonicalString() : $nc($nc(this->assertion)->get(0))->toRFC2253String(oidMap);
	}
	$var($AVAArray, toOutput, this->assertion);
	if (canonical) {
		$assign(toOutput, $cast($AVAArray, $nc(this->assertion)->clone()));
		$Arrays::sort(toOutput, $($AVAComparator::getInstance()));
	}
	$var($StringJoiner, sj, $new($StringJoiner, "+"_s));
	{
		$var($AVAArray, arr$, toOutput);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AVA, ava, arr$->get(i$));
			{
				sj->add(canonical ? $(static_cast<$CharSequence*>($nc(ava)->toRFC2253CanonicalString())) : $(static_cast<$CharSequence*>(ava->toRFC2253String(oidMap))));
			}
		}
	}
	return sj->toString();
}

RDN::RDN() {
}

$Class* RDN::load$($String* name, bool initialize) {
	$loadClass(RDN, name, initialize, &_RDN_ClassInfo_, allocate$RDN);
	return class$;
}

$Class* RDN::class$ = nullptr;

		} // x509
	} // security
} // sun