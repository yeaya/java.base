#include <javax/security/auth/PrivateCredentialPermission.h>
#include <java/io/ObjectInputStream.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Principal = ::java::security::Principal;
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

$PrivateCredentialPermission$CredOwnerArray* PrivateCredentialPermission::EMPTY_PRINCIPALS = nullptr;

void PrivateCredentialPermission::init$($String* credentialClass, $Set* principals) {
	$useLocalObjectStack();
	$Permission::init$(credentialClass);
	this->testing = false;
	$set(this, credentialClass, credentialClass);
	$synchronized(principals) {
		if (principals->size() == 0) {
			$set(this, credOwners, PrivateCredentialPermission::EMPTY_PRINCIPALS);
		} else {
			$set(this, credOwners, $new($PrivateCredentialPermission$CredOwnerArray, principals->size()));
			int32_t index = 0;
			$var($Iterator, i, principals->iterator());
			while ($nc(i)->hasNext()) {
				$var($Principal, p, $cast($Principal, i->next()));
				$var($String, var$0, $nc(p)->getClass()->getName());
				this->credOwners->set(index++, $$new($PrivateCredentialPermission$CredOwner, var$0, $(p->getName())));
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
	if (this->credOwners == nullptr || this->credOwners->length == 0) {
		return $new($StringArray2, 0, 0);
	}
	$var($StringArray2, pArray, $new($StringArray2, $nc(this->credOwners)->length, 2));
	for (int32_t i = 0; i < this->credOwners->length; ++i) {
		$nc(pArray->get(i))->set(0, $nc(this->credOwners->get(i))->principalClass);
		$nc(pArray->get(i))->set(1, $nc(this->credOwners->get(i))->principalName);
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
	return impliesPrincipalSet(this->credOwners, that->credOwners);
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
	$useLocalObjectStack();
	if (name == nullptr || $(name->trim())->isEmpty()) {
		$throwNew($IllegalArgumentException, "invalid empty name"_s);
	}
	$var($ArrayList, pList, $new($ArrayList));
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, name, " "_s, true));
	$var($String, principalClass, nullptr);
	$var($String, principalName, nullptr);
	if (this->testing) {
		$nc($System::out)->println($$str({"whole name = "_s, name}));
	}
	$set(this, credentialClass, tokenizer->nextToken());
	if (this->testing) {
		$nc($System::out)->println($$str({"Credential Class = "_s, this->credentialClass}));
	}
	if (tokenizer->hasMoreTokens() == false) {
		$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("permission.name.name.syntax.invalid."_s))));
		$var($ObjectArray, source, $new($ObjectArray, {name}));
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($(form->format(source)));
		var$0->append($($ResourcesMgr::getString("Credential.Class.not.followed.by.a.Principal.Class.and.Name"_s)));
		$throwNew($IllegalArgumentException, $$str(var$0));
	}
	while (tokenizer->hasMoreTokens()) {
		tokenizer->nextToken();
		$assign(principalClass, tokenizer->nextToken());
		if (this->testing) {
			$nc($System::out)->println($$str({"    Principal Class = "_s, principalClass}));
		}
		if (tokenizer->hasMoreTokens() == false) {
			$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("permission.name.name.syntax.invalid."_s))));
			$var($ObjectArray, source, $new($ObjectArray, {name}));
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append($(form->format(source)));
			var$1->append($($ResourcesMgr::getString("Principal.Class.not.followed.by.a.Principal.Name"_s)));
			$throwNew($IllegalArgumentException, $$str(var$1));
		}
		tokenizer->nextToken();
		$assign(principalName, tokenizer->nextToken());
		if (!$nc(principalName)->startsWith("\""_s)) {
			$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("permission.name.name.syntax.invalid."_s))));
			$var($ObjectArray, source, $new($ObjectArray, {name}));
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append($(form->format(source)));
			var$2->append($($ResourcesMgr::getString("Principal.Name.must.be.surrounded.by.quotes"_s)));
			$throwNew($IllegalArgumentException, $$str(var$2));
		}
		if (!principalName->endsWith("\""_s)) {
			while (tokenizer->hasMoreTokens()) {
				$assign(principalName, $str({principalName, $(tokenizer->nextToken())}));
				if (principalName->endsWith("\""_s)) {
					break;
				}
			}
			if (!principalName->endsWith("\""_s)) {
				$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("permission.name.name.syntax.invalid."_s))));
				$var($ObjectArray, source, $new($ObjectArray, {name}));
				$var($StringBuilder, var$3, $new($StringBuilder));
				var$3->append($(form->format(source)));
				var$3->append($($ResourcesMgr::getString("Principal.Name.missing.end.quote"_s)));
				$throwNew($IllegalArgumentException, $$str(var$3));
			}
		}
		if (this->testing) {
			$nc($System::out)->println($$str({"\tprincipalName = \'"_s, principalName, "\'"_s}));
		}
		$assign(principalName, principalName->substring(1, principalName->length() - 1));
		bool var$4 = $nc(principalClass)->equals("*"_s);
		if (var$4 && !principalName->equals("*"_s)) {
			$throwNew($IllegalArgumentException, $($ResourcesMgr::getString("PrivateCredentialPermission.Principal.Class.can.not.be.a.wildcard.value.if.Principal.Name.is.not.a.wildcard.value"_s)));
		}
		if (this->testing) {
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
		$nc($System::out)->println($$str({"credential class comparison: "_s, thisC, "/"_s, thatC}));
	}
	if ($nc(thisC)->equals("*"_s)) {
		return true;
	}
	return thisC->equals(thatC);
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
	for (int32_t i = 0; i < thisP->length; ++i) {
		bool foundMatch = false;
		for (int32_t j = 0; j < thatP->length; ++j) {
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
	$useLocalObjectStack();
	$nc(s)->defaultReadObject();
	bool var$0 = $$nc(getName())->indexOf(u' ') == -1;
	if (var$0 && $$nc(getName())->indexOf(u'\"') == -1) {
		$set(this, credentialClass, getName());
		$set(this, credOwners, PrivateCredentialPermission::EMPTY_PRINCIPALS);
	} else {
		init($(getName()));
	}
}

void PrivateCredentialPermission::clinit$($Class* clazz) {
	$assignStatic(PrivateCredentialPermission::EMPTY_PRINCIPALS, $new($PrivateCredentialPermission$CredOwnerArray, 0));
}

PrivateCredentialPermission::PrivateCredentialPermission() {
}

$Class* PrivateCredentialPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrivateCredentialPermission, serialVersionUID)},
		{"EMPTY_PRINCIPALS", "[Ljavax/security/auth/PrivateCredentialPermission$CredOwner;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrivateCredentialPermission, EMPTY_PRINCIPALS)},
		{"credentialClass", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PrivateCredentialPermission, credentialClass)},
		{"principals", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/Principal;>;", $PRIVATE, $field(PrivateCredentialPermission, principals)},
		{"credOwners", "[Ljavax/security/auth/PrivateCredentialPermission$CredOwner;", nullptr, $PRIVATE | $TRANSIENT, $field(PrivateCredentialPermission, credOwners)},
		{"testing", "Z", nullptr, $PRIVATE, $field(PrivateCredentialPermission, testing)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/util/Set;)V", "(Ljava/lang/String;Ljava/util/Set<Ljava/security/Principal;>;)V", 0, $method(PrivateCredentialPermission, init$, void, $String*, $Set*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PrivateCredentialPermission, init$, void, $String*, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PrivateCredentialPermission, equals, bool, Object$*)},
		{"getActions", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrivateCredentialPermission, getActions, $String*)},
		{"getCredentialClass", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(PrivateCredentialPermission, getCredentialClass, $String*)},
		{"getPrincipals", "()[[Ljava/lang/String;", nullptr, $PUBLIC, $method(PrivateCredentialPermission, getPrincipals, $StringArray2*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PrivateCredentialPermission, hashCode, int32_t)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC, $virtualMethod(PrivateCredentialPermission, implies, bool, $Permission*)},
		{"impliesCredentialClass", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(PrivateCredentialPermission, impliesCredentialClass, bool, $String*, $String*)},
		{"impliesPrincipalSet", "([Ljavax/security/auth/PrivateCredentialPermission$CredOwner;[Ljavax/security/auth/PrivateCredentialPermission$CredOwner;)Z", nullptr, $PRIVATE, $method(PrivateCredentialPermission, impliesPrincipalSet, bool, $PrivateCredentialPermission$CredOwnerArray*, $PrivateCredentialPermission$CredOwnerArray*)},
		{"init", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(PrivateCredentialPermission, init, void, $String*)},
		{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC, $virtualMethod(PrivateCredentialPermission, newPermissionCollection, $PermissionCollection*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(PrivateCredentialPermission, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.PrivateCredentialPermission$CredOwner", "javax.security.auth.PrivateCredentialPermission", "CredOwner", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.security.auth.PrivateCredentialPermission",
		"java.security.Permission",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.security.auth.PrivateCredentialPermission$CredOwner"
	};
	$loadClass(PrivateCredentialPermission, name, initialize, &classInfo$$, PrivateCredentialPermission::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrivateCredentialPermission));
	});
	return class$;
}

$Class* PrivateCredentialPermission::class$ = nullptr;

		} // auth
	} // security
} // javax