#include <sun/security/x509/GeneralSubtrees.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/DNSName.h>
#include <sun/security/x509/EDIPartyName.h>
#include <sun/security/x509/GeneralName.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <sun/security/x509/GeneralSubtree.h>
#include <sun/security/x509/IPAddressName.h>
#include <sun/security/x509/OIDName.h>
#include <sun/security/x509/OtherName.h>
#include <sun/security/x509/RFC822Name.h>
#include <sun/security/x509/URIName.h>
#include <sun/security/x509/X400Address.h>
#include <sun/security/x509/X500Name.h>
#include <jcpp.h>

#undef NAME_NARROWS
#undef NAME_WIDENS
#undef NAME_RFC822
#undef NAME_MATCH
#undef NAME_IP
#undef NAME_ANY
#undef NAME_URI
#undef NAME_SAME_TYPE
#undef NAME_X400
#undef NAME_DIFF_TYPE
#undef NAME_EDI
#undef NAME_OID
#undef NAME_DNS
#undef NAME_DIRECTORY

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $DNSName = ::sun::security::x509::DNSName;
using $EDIPartyName = ::sun::security::x509::EDIPartyName;
using $GeneralName = ::sun::security::x509::GeneralName;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;
using $GeneralSubtree = ::sun::security::x509::GeneralSubtree;
using $IPAddressName = ::sun::security::x509::IPAddressName;
using $OIDName = ::sun::security::x509::OIDName;
using $OtherName = ::sun::security::x509::OtherName;
using $RFC822Name = ::sun::security::x509::RFC822Name;
using $URIName = ::sun::security::x509::URIName;
using $X400Address = ::sun::security::x509::X400Address;
using $X500Name = ::sun::security::x509::X500Name;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _GeneralSubtrees_FieldInfo_[] = {
	{"trees", "Ljava/util/List;", "Ljava/util/List<Lsun/security/x509/GeneralSubtree;>;", $PRIVATE | $FINAL, $field(GeneralSubtrees, trees$)},
	{"NAME_DIFF_TYPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralSubtrees, NAME_DIFF_TYPE)},
	{"NAME_MATCH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralSubtrees, NAME_MATCH)},
	{"NAME_NARROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralSubtrees, NAME_NARROWS)},
	{"NAME_WIDENS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralSubtrees, NAME_WIDENS)},
	{"NAME_SAME_TYPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralSubtrees, NAME_SAME_TYPE)},
	{}
};

$MethodInfo _GeneralSubtrees_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeneralSubtrees::*)()>(&GeneralSubtrees::init$))},
	{"<init>", "(Lsun/security/x509/GeneralSubtrees;)V", nullptr, $PRIVATE, $method(static_cast<void(GeneralSubtrees::*)(GeneralSubtrees*)>(&GeneralSubtrees::init$))},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralSubtrees::*)($DerValue*)>(&GeneralSubtrees::init$)), "java.io.IOException"},
	{"add", "(Lsun/security/x509/GeneralSubtree;)V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"contains", "(Lsun/security/x509/GeneralSubtree;)Z", nullptr, $PUBLIC},
	{"createWidestSubtree", "(Lsun/security/x509/GeneralNameInterface;)Lsun/security/x509/GeneralSubtree;", nullptr, $PRIVATE, $method(static_cast<$GeneralSubtree*(GeneralSubtrees::*)($GeneralNameInterface*)>(&GeneralSubtrees::createWidestSubtree))},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(I)Lsun/security/x509/GeneralSubtree;", nullptr, $PUBLIC},
	{"getGeneralNameInterface", "(I)Lsun/security/x509/GeneralNameInterface;", nullptr, $PRIVATE, $method(static_cast<$GeneralNameInterface*(GeneralSubtrees::*)(int32_t)>(&GeneralSubtrees::getGeneralNameInterface))},
	{"getGeneralNameInterface", "(Lsun/security/x509/GeneralSubtree;)Lsun/security/x509/GeneralNameInterface;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GeneralNameInterface*(*)($GeneralSubtree*)>(&GeneralSubtrees::getGeneralNameInterface))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"intersect", "(Lsun/security/x509/GeneralSubtrees;)Lsun/security/x509/GeneralSubtrees;", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lsun/security/x509/GeneralSubtree;>;", $PUBLIC},
	{"minimize", "()V", nullptr, $PRIVATE, $method(static_cast<void(GeneralSubtrees::*)()>(&GeneralSubtrees::minimize))},
	{"reduce", "(Lsun/security/x509/GeneralSubtrees;)V", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"trees", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/x509/GeneralSubtree;>;", $PUBLIC},
	{"union", "(Lsun/security/x509/GeneralSubtrees;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GeneralSubtrees_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.GeneralSubtrees",
	"java.lang.Object",
	"java.lang.Cloneable",
	_GeneralSubtrees_FieldInfo_,
	_GeneralSubtrees_MethodInfo_
};

$Object* allocate$GeneralSubtrees($Class* clazz) {
	return $of($alloc(GeneralSubtrees));
}

void GeneralSubtrees::init$() {
	$set(this, trees$, $new($ArrayList));
}

void GeneralSubtrees::init$(GeneralSubtrees* source) {
	$set(this, trees$, $new($ArrayList, static_cast<$Collection*>($nc(source)->trees$)));
}

void GeneralSubtrees::init$($DerValue* val) {
	GeneralSubtrees::init$();
	if ($nc(val)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding of GeneralSubtrees."_s);
	}
	while ($nc($nc(val)->data$)->available() != 0) {
		$var($DerValue, opt, $nc(val->data$)->getDerValue());
		$var($GeneralSubtree, tree, $new($GeneralSubtree, opt));
		add(tree);
	}
}

$GeneralSubtree* GeneralSubtrees::get(int32_t index) {
	return $cast($GeneralSubtree, $nc(this->trees$)->get(index));
}

void GeneralSubtrees::remove(int32_t index) {
	$nc(this->trees$)->remove(index);
}

void GeneralSubtrees::add($GeneralSubtree* tree) {
	if (tree == nullptr) {
		$throwNew($NullPointerException);
	}
	$nc(this->trees$)->add(tree);
}

bool GeneralSubtrees::contains($GeneralSubtree* tree) {
	if (tree == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(this->trees$)->contains(tree);
}

int32_t GeneralSubtrees::size() {
	return $nc(this->trees$)->size();
}

$Iterator* GeneralSubtrees::iterator() {
	return $nc(this->trees$)->iterator();
}

$List* GeneralSubtrees::trees() {
	return this->trees$;
}

$Object* GeneralSubtrees::clone() {
	return $of($new(GeneralSubtrees, this));
}

$String* GeneralSubtrees::toString() {
	return $str({"   GeneralSubtrees:\n"_s, this->trees$, $$str(u'\n')});
}

void GeneralSubtrees::encode($DerOutputStream* out) {
	$var($DerOutputStream, seq, $new($DerOutputStream));
	{
		int32_t i = 0;
		int32_t n = size();
		for (; i < n; ++i) {
			$nc($(get(i)))->encode(seq);
		}
	}
	$nc(out)->write($DerValue::tag_Sequence, seq);
}

bool GeneralSubtrees::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf(GeneralSubtrees, obj) == false) {
		return false;
	}
	$var(GeneralSubtrees, other, $cast(GeneralSubtrees, obj));
	return $nc(this->trees$)->equals($nc(other)->trees$);
}

int32_t GeneralSubtrees::hashCode() {
	return $nc(this->trees$)->hashCode();
}

$GeneralNameInterface* GeneralSubtrees::getGeneralNameInterface(int32_t ndx) {
	return getGeneralNameInterface($(get(ndx)));
}

$GeneralNameInterface* GeneralSubtrees::getGeneralNameInterface($GeneralSubtree* gs) {
	$init(GeneralSubtrees);
	$var($GeneralName, gn, $nc(gs)->getName());
	$var($GeneralNameInterface, gni, $nc(gn)->getName());
	return gni;
}

void GeneralSubtrees::minimize() {
	for (int32_t i = 0; i < (size() - 1); ++i) {
		$var($GeneralNameInterface, current, getGeneralNameInterface(i));
		bool remove1 = false;
		for (int32_t j = i + 1; j < size(); ++j) {
			$var($GeneralNameInterface, subsequent, getGeneralNameInterface(j));
			switch ($nc(current)->constrains(subsequent)) {
			case $GeneralNameInterface::NAME_DIFF_TYPE:
				{
					continue;
				}
			case $GeneralNameInterface::NAME_MATCH:
				{
					remove1 = true;
					break;
				}
			case $GeneralNameInterface::NAME_NARROWS:
				{
					remove(j);
					--j;
					continue;
				}
			case $GeneralNameInterface::NAME_WIDENS:
				{
					remove1 = true;
					break;
				}
			case $GeneralNameInterface::NAME_SAME_TYPE:
				{
					continue;
				}
			}
			break;
		}
		if (remove1) {
			remove(i);
			--i;
		}
	}
}

$GeneralSubtree* GeneralSubtrees::createWidestSubtree($GeneralNameInterface* name) {
	try {
		$var($GeneralName, newName, nullptr);
		{
			$var($ObjectIdentifier, otherOID, nullptr)
			switch ($nc(name)->getType()) {
			case $GeneralNameInterface::NAME_ANY:
				{
					$assign(otherOID, $nc(($cast($OtherName, name)))->getOID());
					$assign(newName, $new($GeneralName, static_cast<$GeneralNameInterface*>($$new($OtherName, otherOID, nullptr))));
					break;
				}
			case $GeneralNameInterface::NAME_RFC822:
				{
					$assign(newName, $new($GeneralName, static_cast<$GeneralNameInterface*>($$new($RFC822Name, ""_s))));
					break;
				}
			case $GeneralNameInterface::NAME_DNS:
				{
					$assign(newName, $new($GeneralName, static_cast<$GeneralNameInterface*>($$new($DNSName, ""_s))));
					break;
				}
			case $GeneralNameInterface::NAME_X400:
				{
					$assign(newName, $new($GeneralName, static_cast<$GeneralNameInterface*>($$new($X400Address, ($bytes*)nullptr))));
					break;
				}
			case $GeneralNameInterface::NAME_DIRECTORY:
				{
					$assign(newName, $new($GeneralName, static_cast<$GeneralNameInterface*>($$new($X500Name, ""_s))));
					break;
				}
			case $GeneralNameInterface::NAME_EDI:
				{
					$assign(newName, $new($GeneralName, static_cast<$GeneralNameInterface*>($$new($EDIPartyName, ""_s))));
					break;
				}
			case $GeneralNameInterface::NAME_URI:
				{
					$assign(newName, $new($GeneralName, static_cast<$GeneralNameInterface*>($$new($URIName, ""_s))));
					break;
				}
			case $GeneralNameInterface::NAME_IP:
				{
					$assign(newName, $new($GeneralName, static_cast<$GeneralNameInterface*>($$new($IPAddressName, ($bytes*)nullptr))));
					break;
				}
			case $GeneralNameInterface::NAME_OID:
				{
					$assign(newName, $new($GeneralName, static_cast<$GeneralNameInterface*>($$new($OIDName, ""_s))));
					break;
				}
			default:
				{
					$throwNew($IOException, $$str({"Unsupported GeneralNameInterface type: "_s, $$str(name->getType())}));
				}
			}
		}
		return $new($GeneralSubtree, newName, 0, -1);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($RuntimeException, $$str({"Unexpected error: "_s, e}), e);
	}
	$shouldNotReachHere();
}

GeneralSubtrees* GeneralSubtrees::intersect(GeneralSubtrees* other) {
	if (other == nullptr) {
		$throwNew($NullPointerException, "other GeneralSubtrees must not be null"_s);
	}
	$var(GeneralSubtrees, newThis, $new(GeneralSubtrees));
	$var(GeneralSubtrees, newExcluded, nullptr);
	if (size() == 0) {
		union$(other);
		return nullptr;
	}
	this->minimize();
	$nc(other)->minimize();
	for (int32_t i = 0; i < size(); ++i) {
		$var($GeneralNameInterface, thisEntry, getGeneralNameInterface(i));
		bool removeThisEntry = false;
		bool sameType = false;
		for (int32_t j = 0; j < other->size(); ++j) {
			$var($GeneralSubtree, otherEntryGS, other->get(j));
			$var($GeneralNameInterface, otherEntry, getGeneralNameInterface(otherEntryGS));
			switch ($nc(thisEntry)->constrains(otherEntry)) {
			case GeneralSubtrees::NAME_NARROWS:
				{
					remove(i);
					--i;
					newThis->add(otherEntryGS);
					sameType = false;
					break;
				}
			case GeneralSubtrees::NAME_SAME_TYPE:
				{
					sameType = true;
					continue;
				}
			case GeneralSubtrees::NAME_MATCH:
				{}
			case GeneralSubtrees::NAME_WIDENS:
				{
					sameType = false;
					break;
				}
			case GeneralSubtrees::NAME_DIFF_TYPE:
				{}
			default:
				{
					continue;
				}
			}
			break;
		}
		if (sameType) {
			bool intersection = false;
			for (int32_t j = 0; j < size(); ++j) {
				$var($GeneralNameInterface, thisAltEntry, getGeneralNameInterface(j));
				int32_t var$0 = $nc(thisAltEntry)->getType();
				if (var$0 == $nc(thisEntry)->getType()) {
					for (int32_t k = 0; k < other->size(); ++k) {
						$var($GeneralNameInterface, othAltEntry, other->getGeneralNameInterface(k));
						int32_t constraintType = thisAltEntry->constrains(othAltEntry);
						if (constraintType == GeneralSubtrees::NAME_MATCH || constraintType == GeneralSubtrees::NAME_WIDENS || constraintType == GeneralSubtrees::NAME_NARROWS) {
							intersection = true;
							break;
						}
					}
				}
			}
			if (intersection == false) {
				if (newExcluded == nullptr) {
					$assign(newExcluded, $new(GeneralSubtrees));
				}
				$var($GeneralSubtree, widestSubtree, createWidestSubtree(thisEntry));
				if (!$nc(newExcluded)->contains(widestSubtree)) {
					newExcluded->add(widestSubtree);
				}
			}
			remove(i);
			--i;
		}
	}
	if (newThis->size() > 0) {
		union$(newThis);
	}
	for (int32_t i = 0; i < other->size(); ++i) {
		$var($GeneralSubtree, otherEntryGS, other->get(i));
		$var($GeneralNameInterface, otherEntry, getGeneralNameInterface(otherEntryGS));
		bool diffType = false;
		for (int32_t j = 0; j < size(); ++j) {
			$var($GeneralNameInterface, thisEntry, getGeneralNameInterface(j));
			switch ($nc(thisEntry)->constrains(otherEntry)) {
			case GeneralSubtrees::NAME_DIFF_TYPE:
				{
					diffType = true;
					continue;
				}
			case GeneralSubtrees::NAME_NARROWS:
				{}
			case GeneralSubtrees::NAME_SAME_TYPE:
				{}
			case GeneralSubtrees::NAME_MATCH:
				{}
			case GeneralSubtrees::NAME_WIDENS:
				{
					diffType = false;
					break;
				}
			default:
				{
					continue;
				}
			}
			break;
		}
		if (diffType) {
			add(otherEntryGS);
		}
	}
	return newExcluded;
}

void GeneralSubtrees::union$(GeneralSubtrees* other) {
	if (other != nullptr) {
		{
			int32_t i = 0;
			int32_t n = other->size();
			for (; i < n; ++i) {
				add($(other->get(i)));
			}
		}
		minimize();
	}
}

void GeneralSubtrees::reduce(GeneralSubtrees* excluded) {
	if (excluded == nullptr) {
		return;
	}
	{
		int32_t i = 0;
		int32_t n = $nc(excluded)->size();
		for (; i < n; ++i) {
			$var($GeneralNameInterface, excludedName, excluded->getGeneralNameInterface(i));
			for (int32_t j = 0; j < size(); ++j) {
				$var($GeneralNameInterface, permitted, getGeneralNameInterface(j));
				switch ($nc(excludedName)->constrains(permitted)) {
				case $GeneralNameInterface::NAME_DIFF_TYPE:
					{
						break;
					}
				case $GeneralNameInterface::NAME_MATCH:
					{
						remove(j);
						--j;
						break;
					}
				case $GeneralNameInterface::NAME_NARROWS:
					{
						remove(j);
						--j;
						break;
					}
				case $GeneralNameInterface::NAME_WIDENS:
					{
						break;
					}
				case $GeneralNameInterface::NAME_SAME_TYPE:
					{
						break;
					}
				}
			}
		}
	}
}

GeneralSubtrees::GeneralSubtrees() {
}

$Class* GeneralSubtrees::load$($String* name, bool initialize) {
	$loadClass(GeneralSubtrees, name, initialize, &_GeneralSubtrees_ClassInfo_, allocate$GeneralSubtrees);
	return class$;
}

$Class* GeneralSubtrees::class$ = nullptr;

		} // x509
	} // security
} // sun