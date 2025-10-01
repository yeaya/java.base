#include <javax/security/auth/PrivateCredentialPermission.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Principal.h>
#include <java/text/MessageFormat.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <javax/security/auth/PrivateCredentialPermission$CredOwner.h>
#include <sun/security/util/ResourcesMgr.h>
#include <jcpp.h>

#undef EMPTY_PRINCIPALS

using $PrivateCredentialPermission$CredOwnerArray = $Array<::javax::security::auth::PrivateCredentialPermission$CredOwner>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Principal = ::java::security::Principal;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $PrivateCredentialPermission$CredOwner = ::javax::security::auth::PrivateCredentialPermission$CredOwner;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _PrivateCredentialPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrivateCredentialPermission, serialVersionUID)},
	{"EMPTY_PRINCIPALS", "[Ljavax/security/auth/PrivateCredentialPermission$CredOwner;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrivateCredentialPermission, EMPTY_PRINCIPALS)},
	{"credentialClass", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PrivateCredentialPermission, credentialClass)},
	{"principals", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/Principal;>;", $PRIVATE, $field(PrivateCredentialPermission, principals)},
	{"credOwners", "[Ljavax/security/auth/PrivateCredentialPermission$CredOwner;", nullptr, $PRIVATE | $TRANSIENT, $field(PrivateCredentialPermission, credOwners)},
	{"testing", "Z", nullptr, $PRIVATE, $field(PrivateCredentialPermission, testing)},
	{}
};

$MethodInfo _PrivateCredentialPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/Set;)V", "(Ljava/lang/String;Ljava/util/Set<Ljava/security/Principal;>;)V", 0, $method(static_cast<void(PrivateCredentialPermission::*)($String*,$Set*)>(&PrivateCredentialPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PrivateCredentialPermission::*)($String*,$String*)>(&PrivateCredentialPermission::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getActions", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCredentialClass", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(PrivateCredentialPermission::*)()>(&PrivateCredentialPermission::getCredentialClass))},
	{"getPrincipals", "()[[Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$StringArray2*(PrivateCredentialPermission::*)()>(&PrivateCredentialPermission::getPrincipals))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"impliesCredentialClass", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PrivateCredentialPermission::*)($String*,$String*)>(&PrivateCredentialPermission::impliesCredentialClass))},
	{"impliesPrincipalSet", "([Ljavax/security/auth/PrivateCredentialPermission$CredOwner;[Ljavax/security/auth/PrivateCredentialPermission$CredOwner;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PrivateCredentialPermission::*)($PrivateCredentialPermission$CredOwnerArray*,$PrivateCredentialPermission$CredOwnerArray*)>(&PrivateCredentialPermission::impliesPrincipalSet))},
	{"init", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PrivateCredentialPermission::*)($String*)>(&PrivateCredentialPermission::init))},
	{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PrivateCredentialPermission::*)($ObjectInputStream*)>(&PrivateCredentialPermission::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _PrivateCredentialPermission_InnerClassesInfo_[] = {
	{"javax.security.auth.PrivateCredentialPermission$CredOwner", "javax.security.auth.PrivateCredentialPermission", "CredOwner", $STATIC},
	{}
};

$ClassInfo _PrivateCredentialPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.security.auth.PrivateCredentialPermission",
	"java.security.Permission",
	nullptr,
	_PrivateCredentialPermission_FieldInfo_,
	_PrivateCredentialPermission_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateCredentialPermission_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.security.auth.PrivateCredentialPermission$CredOwner"
};

$Object* allocate$PrivateCredentialPermission($Class* clazz) {
	return $of($alloc(PrivateCredentialPermission));
}

$PrivateCredentialPermission$CredOwnerArray* PrivateCredentialPermission::EMPTY_PRINCIPALS = nullptr;

void PrivateCredentialPermission::init$($String* credentialClass, $Set* principals) {
	$Permission::init$(credentialClass);
	this->testing = false;
	$set(this, credentialClass, credentialClass);
	$synchronized(principals) {
		if ($nc(principals)->size() == 0) {
			$set(this, credOwners, PrivateCredentialPermission::EMPTY_PRINCIPALS);
		} else {
			$set(this, credOwners, $new($PrivateCredentialPermission$CredOwnerArray, principals->size()));
			int32_t index = 0;
			$var($Iterator, i, principals->iterator());
			while ($nc(i)->hasNext()) {
				$var($Principal, p, $cast($Principal, i->next()));
				$var($String, var$0, $nc($of(p))->getClass()->getName());
				$nc(this->credOwners)->set(index++, $$new($PrivateCredentialPermission$CredOwner, var$0, $(p->getName())));
			}
		}
	}
}

void PrivateCredentialPermission::init$($String* name, $String* actions) {
	$Permission::init$(name);
	this->testing = false;
	if (!"read"_s->equalsIgnoreCase(actions)) {
		$throwNew($IllegalArgumentException, $($ResourcesMgr::getString("actions.can.only.be.read."_s)));
	}
	init(name);
}

$String* PrivateCredentialPermission::getCredentialClass() {
	return this->credentialClass;
}

$StringArray2* PrivateCredentialPermission::getPrincipals() {
	if (this->credOwners == nullptr || $nc(this->credOwners)->length == 0) {
		return $new($StringArray2, 0, 0);
	}
	$var($StringArray2, pArray, $new($StringArray2, $nc(this->credOwners)->length, 2));
	for (int32_t i = 0; i < $nc(this->credOwners)->length; ++i) {
		$nc(pArray->get(i))->set(0, $nc($nc(this->credOwners)->get(i))->principalClass);
		$nc(pArray->get(i))->set(1, $nc($nc(this->credOwners)->get(i))->principalName);
	}
	return pArray;
}

bool PrivateCredentialPermission::implies($Permission* p) {
	if (p == nullptr || !($instanceOf(PrivateCredentialPermission, p))) {
		return false;
	}
	$var(PrivateCredentialPermission, that, $cast(PrivateCredentialPermission, p));
	if (!impliesCredentialClass(this->credentialClass, $nc(that)->credentialClass)) {
		return false;
	}
	return impliesPrincipalSet(this->credOwners, $nc(that)->credOwners);
}

bool PrivateCredentialPermission::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(PrivateCredentialPermission, obj))) {
		return false;
	}
	$var(PrivateCredentialPermission, that, $cast(PrivateCredentialPermission, obj));
	bool var$0 = this->implies(that);
	return (var$0 && $nc(that)->implies(this));
}

int32_t PrivateCredentialPermission::hashCode() {
	return $nc(this->credentialClass)->hashCode();
}

$String* PrivateCredentialPermission::getActions() {
	return "read"_s;
}

$PermissionCollection* PrivateCredentialPermission::newPermissionCollection() {
	return nullptr;
}

void PrivateCredentialPermission::init($String* name) {
	if (name == nullptr || $($nc(name)->trim())->isEmpty()) {
		$throwNew($IllegalArgumentException, "invalid empty name"_s);
	}
	$var($ArrayList, pList, $new($ArrayList));
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, name, " "_s, true));
	$var($String, principalClass, nullptr);
	$var($String, principalName, nullptr);
	if (this->testing) {
		$init($System);
		$nc($System::out)->println($$str({"whole name = "_s, name}));
	}
	$set(this, credentialClass, tokenizer->nextToken());
	if (this->testing) {
		$init($System);
		$nc($System::out)->println($$str({"Credential Class = "_s, this->credentialClass}));
	}
	if (tokenizer->hasMoreTokens() == false) {
		$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("permission.name.name.syntax.invalid."_s))));
		$var($ObjectArray, source, $new($ObjectArray, {$of(name)}));
		$var($String, var$0, $(form->format(source)));
		$throwNew($IllegalArgumentException, $$concat(var$0, $($ResourcesMgr::getString("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s))));
	}
	while (tokenizer->hasMoreTokens()) {
		tokenizer->nextToken();
		$assign(principalClass, tokenizer->nextToken());
		if (this->testing) {
			$init($System);
			$nc($System::out)->println($$str({"    Principal Class = "_s, principalClass}));
		}
		if (tokenizer->hasMoreTokens() == false) {
			$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("permission.name.name.syntax.invalid."_s))));
			$var($ObjectArray, source, $new($ObjectArray, {$of(name)}));
			$var($String, var$1, $(form->format(source)));
			$throwNew($IllegalArgumentException, $$concat(var$1, $($ResourcesMgr::getString("Principal.Class.not.followed.by.a.Principal.Name"_s))));
		}
		tokenizer->nextToken();
		$assign(principalName, tokenizer->nextToken());
		if (!$nc(principalName)->startsWith("\""_s)) {
			$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("permission.name.name.syntax.invalid."_s))));
			$var($ObjectArray, source, $new($ObjectArray, {$of(name)}));
			$var($String, var$2, $(form->format(source)));
			$throwNew($IllegalArgumentException, $$concat(var$2, $($ResourcesMgr::getString("Principal.Name.must.be.surrounded.by.quotes"_s))));
		}
		if (!$nc(principalName)->endsWith("\""_s)) {
			while (tokenizer->hasMoreTokens()) {
				$assign(principalName, $str({principalName, $(tokenizer->nextToken())}));
				if ($nc(principalName)->endsWith("\""_s)) {
					break;
				}
			}
			if (!$nc(principalName)->endsWith("\""_s)) {
				$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("permission.name.name.syntax.invalid."_s))));
				$var($ObjectArray, source, $new($ObjectArray, {$of(name)}));
				$var($String, var$3, $(form->format(source)));
				$throwNew($IllegalArgumentException, $$concat(var$3, $($ResourcesMgr::getString("Principal.Name.missing.end.quote"_s))));
			}
		}
		if (this->testing) {
			$init($System);
			$nc($System::out)->println($$str({"\tprincipalName = \'"_s, principalName, "\'"_s}));
		}
		$assign(principalName, $nc(principalName)->substring(1, principalName->length() - 1));
		bool var$4 = $nc(principalClass)->equals("*"_s);
		if (var$4 && !principalName->equals("*"_s)) {
			$throwNew($IllegalArgumentException, $($ResourcesMgr::getString("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s)));
		}
		if (this->testing) {
			$init($System);
			$nc($System::out)->println($$str({"\tprincipalName = \'"_s, principalName, "\'"_s}));
		}
		pList->add($$new($PrivateCredentialPermission$CredOwner, principalClass, principalName));
	}
	$set(this, credOwners, $new($PrivateCredentialPermission$CredOwnerArray, pList->size()));
	pList->toArray(this->credOwners);
}

bool PrivateCredentialPermission::impliesCredentialClass($String* thisC, $String* thatC) {
	if (thisC == nullptr || thatC == nullptr) {
		return false;
	}
	if (this->testing) {
		$init($System);
		$nc($System::out)->println($$str({"credential class comparison: "_s, thisC, "/"_s, thatC}));
	}
	if ($nc(thisC)->equals("*"_s)) {
		return true;
	}
	return $nc(thisC)->equals(thatC);
}

bool PrivateCredentialPermission::impliesPrincipalSet($PrivateCredentialPermission$CredOwnerArray* thisP, $PrivateCredentialPermission$CredOwnerArray* thatP) {
	if (thisP == nullptr || thatP == nullptr) {
		return false;
	}
	if ($nc(thatP)->length == 0) {
		return true;
	}
	if ($nc(thisP)->length == 0) {
		return false;
	}
	for (int32_t i = 0; i < $nc(thisP)->length; ++i) {
		bool foundMatch = false;
		for (int32_t j = 0; j < $nc(thatP)->length; ++j) {
			if ($nc(thisP->get(i))->implies(thatP->get(j))) {
				foundMatch = true;
				break;
			}
		}
		if (!foundMatch) {
			return false;
		}
	}
	return true;
}

void PrivateCredentialPermission::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	bool var$0 = $nc($(getName()))->indexOf((int32_t)u' ') == -1;
	if (var$0 && $nc($(getName()))->indexOf((int32_t)u'\"') == -1) {
		$set(this, credentialClass, getName());
		$set(this, credOwners, PrivateCredentialPermission::EMPTY_PRINCIPALS);
	} else {
		init($(getName()));
	}
}

void clinit$PrivateCredentialPermission($Class* class$) {
	$assignStatic(PrivateCredentialPermission::EMPTY_PRINCIPALS, $new($PrivateCredentialPermission$CredOwnerArray, 0));
}

PrivateCredentialPermission::PrivateCredentialPermission() {
}

$Class* PrivateCredentialPermission::load$($String* name, bool initialize) {
	$loadClass(PrivateCredentialPermission, name, initialize, &_PrivateCredentialPermission_ClassInfo_, clinit$PrivateCredentialPermission, allocate$PrivateCredentialPermission);
	return class$;
}

$Class* PrivateCredentialPermission::class$ = nullptr;

		} // auth
	} // security
} // javax