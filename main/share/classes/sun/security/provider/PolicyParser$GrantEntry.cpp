#include <sun/security/provider/PolicyParser$GrantEntry.h>

#include <java/io/PrintWriter.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Collection.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/Vector.h>
#include <sun/security/provider/PolicyParser$PermissionEntry.h>
#include <sun/security/provider/PolicyParser$PrincipalEntry.h>
#include <sun/security/provider/PolicyParser.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Collection = ::java::util::Collection;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Vector = ::java::util::Vector;
using $PolicyParser$PermissionEntry = ::sun::security::provider::PolicyParser$PermissionEntry;
using $PolicyParser$PrincipalEntry = ::sun::security::provider::PolicyParser$PrincipalEntry;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyParser$GrantEntry_FieldInfo_[] = {
	{"signedBy", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PolicyParser$GrantEntry, signedBy)},
	{"codeBase", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PolicyParser$GrantEntry, codeBase)},
	{"principals", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lsun/security/provider/PolicyParser$PrincipalEntry;>;", $PUBLIC, $field(PolicyParser$GrantEntry, principals)},
	{"permissionEntries", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/security/provider/PolicyParser$PermissionEntry;>;", $PUBLIC, $field(PolicyParser$GrantEntry, permissionEntries)},
	{}
};

$MethodInfo _PolicyParser$GrantEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PolicyParser$GrantEntry::*)()>(&PolicyParser$GrantEntry::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyParser$GrantEntry::*)($String*,$String*)>(&PolicyParser$GrantEntry::init$))},
	{"add", "(Lsun/security/provider/PolicyParser$PermissionEntry;)V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"contains", "(Lsun/security/provider/PolicyParser$PrincipalEntry;)Z", nullptr, $PUBLIC},
	{"contains", "(Lsun/security/provider/PolicyParser$PermissionEntry;)Z", nullptr, $PUBLIC},
	{"permissionElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Lsun/security/provider/PolicyParser$PermissionEntry;>;", $PUBLIC},
	{"remove", "(Lsun/security/provider/PolicyParser$PrincipalEntry;)Z", nullptr, $PUBLIC},
	{"remove", "(Lsun/security/provider/PolicyParser$PermissionEntry;)Z", nullptr, $PUBLIC},
	{"write", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PolicyParser$GrantEntry_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyParser$GrantEntry", "sun.security.provider.PolicyParser", "GrantEntry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PolicyParser$GrantEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.PolicyParser$GrantEntry",
	"java.lang.Object",
	nullptr,
	_PolicyParser$GrantEntry_FieldInfo_,
	_PolicyParser$GrantEntry_MethodInfo_,
	nullptr,
	nullptr,
	_PolicyParser$GrantEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyParser"
};

$Object* allocate$PolicyParser$GrantEntry($Class* clazz) {
	return $of($alloc(PolicyParser$GrantEntry));
}

void PolicyParser$GrantEntry::init$() {
	$set(this, principals, $new($LinkedList));
	$set(this, permissionEntries, $new($Vector));
}

void PolicyParser$GrantEntry::init$($String* signedBy, $String* codeBase) {
	$set(this, codeBase, codeBase);
	$set(this, signedBy, signedBy);
	$set(this, principals, $new($LinkedList));
	$set(this, permissionEntries, $new($Vector));
}

void PolicyParser$GrantEntry::add($PolicyParser$PermissionEntry* pe) {
	$nc(this->permissionEntries)->addElement(pe);
}

bool PolicyParser$GrantEntry::remove($PolicyParser$PrincipalEntry* pe) {
	return $nc(this->principals)->remove($of(pe));
}

bool PolicyParser$GrantEntry::remove($PolicyParser$PermissionEntry* pe) {
	return $nc(this->permissionEntries)->removeElement(pe);
}

bool PolicyParser$GrantEntry::contains($PolicyParser$PrincipalEntry* pe) {
	return $nc(this->principals)->contains(pe);
}

bool PolicyParser$GrantEntry::contains($PolicyParser$PermissionEntry* pe) {
	return $nc(this->permissionEntries)->contains(pe);
}

$Enumeration* PolicyParser$GrantEntry::permissionElements() {
	return $nc(this->permissionEntries)->elements();
}

void PolicyParser$GrantEntry::write($PrintWriter* out) {
	$useLocalCurrentObjectStackCache();
	$nc(out)->print("grant"_s);
	if (this->signedBy != nullptr) {
		out->print(" signedBy \""_s);
		out->print(this->signedBy);
		out->print(u'\"');
		if (this->codeBase != nullptr) {
			out->print(", "_s);
		}
	}
	if (this->codeBase != nullptr) {
		out->print(" codeBase \""_s);
		out->print(this->codeBase);
		out->print(u'\"');
		if (this->principals != nullptr && $nc(this->principals)->size() > 0) {
			out->print(",\n"_s);
		}
	}
	if (this->principals != nullptr && $nc(this->principals)->size() > 0) {
		$var($Iterator, pli, $nc(this->principals)->iterator());
		while ($nc(pli)->hasNext()) {
			out->print("      "_s);
			$var($PolicyParser$PrincipalEntry, pe, $cast($PolicyParser$PrincipalEntry, pli->next()));
			$nc(pe)->write(out);
			if (pli->hasNext()) {
				out->print(",\n"_s);
			}
		}
	}
	out->println(" {"_s);
	$var($Enumeration, enum_, $nc(this->permissionEntries)->elements());
	while ($nc(enum_)->hasMoreElements()) {
		$var($PolicyParser$PermissionEntry, pe, $cast($PolicyParser$PermissionEntry, enum_->nextElement()));
		out->write("  "_s);
		$nc(pe)->write(out);
	}
	out->println("};"_s);
}

$Object* PolicyParser$GrantEntry::clone() {
	$var(PolicyParser$GrantEntry, ge, $new(PolicyParser$GrantEntry));
	$set(ge, codeBase, this->codeBase);
	$set(ge, signedBy, this->signedBy);
	$set(ge, principals, $new($LinkedList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$AbstractSequentialList*>(this->principals))))));
	$set(ge, permissionEntries, $new($Vector, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->permissionEntries)))));
	return $of(ge);
}

PolicyParser$GrantEntry::PolicyParser$GrantEntry() {
}

$Class* PolicyParser$GrantEntry::load$($String* name, bool initialize) {
	$loadClass(PolicyParser$GrantEntry, name, initialize, &_PolicyParser$GrantEntry_ClassInfo_, allocate$PolicyParser$GrantEntry);
	return class$;
}

$Class* PolicyParser$GrantEntry::class$ = nullptr;

		} // provider
	} // security
} // sun