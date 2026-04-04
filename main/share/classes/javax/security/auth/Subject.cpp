#include <javax/security/auth/Subject.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/Principal.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/security/auth/AuthPermission.h>
#include <javax/security/auth/Subject$1.h>
#include <javax/security/auth/Subject$2.h>
#include <javax/security/auth/Subject$AuthPermissionHolder.h>
#include <javax/security/auth/Subject$ClassSet.h>
#include <javax/security/auth/Subject$SecureSet.h>
#include <sun/security/util/ResourcesMgr.h>
#include <jcpp.h>

#undef DO_AS_PERMISSION
#undef DO_AS_PRIVILEGED_PERMISSION
#undef GET_SUBJECT_PERMISSION
#undef NULL_PD_ARRAY
#undef PRINCIPAL_SET
#undef PRIV_CREDENTIAL_SET
#undef PUB_CREDENTIAL_SET
#undef SET_READ_ONLY_PERMISSION

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $Principal = ::java::security::Principal;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Subject$1 = ::javax::security::auth::Subject$1;
using $Subject$2 = ::javax::security::auth::Subject$2;
using $Subject$AuthPermissionHolder = ::javax::security::auth::Subject$AuthPermissionHolder;
using $Subject$ClassSet = ::javax::security::auth::Subject$ClassSet;
using $Subject$SecureSet = ::javax::security::auth::Subject$SecureSet;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;

namespace javax {
	namespace security {
		namespace auth {

$ProtectionDomainArray* Subject::NULL_PD_ARRAY = nullptr;

void Subject::init$() {
	$useLocalObjectStack();
	$set(this, principals, $Collections::synchronizedSet($$new($Subject$SecureSet, this, Subject::PRINCIPAL_SET)));
	$set(this, pubCredentials, $Collections::synchronizedSet($$new($Subject$SecureSet, this, Subject::PUB_CREDENTIAL_SET)));
	$set(this, privCredentials, $Collections::synchronizedSet($$new($Subject$SecureSet, this, Subject::PRIV_CREDENTIAL_SET)));
}

void Subject::init$(bool readOnly, $Set* principals, $Set* pubCredentials, $Set* privCredentials) {
	$useLocalObjectStack();
	$var($LinkedList, principalList, collectionNullClean(principals));
	$var($LinkedList, pubCredsList, collectionNullClean(pubCredentials));
	$var($LinkedList, privCredsList, collectionNullClean(privCredentials));
	$set(this, principals, $Collections::synchronizedSet($$new($Subject$SecureSet, this, Subject::PRINCIPAL_SET, principalList)));
	$set(this, pubCredentials, $Collections::synchronizedSet($$new($Subject$SecureSet, this, Subject::PUB_CREDENTIAL_SET, pubCredsList)));
	$set(this, privCredentials, $Collections::synchronizedSet($$new($Subject$SecureSet, this, Subject::PRIV_CREDENTIAL_SET, privCredsList)));
	this->readOnly = readOnly;
}

void Subject::setReadOnly() {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($Subject$AuthPermissionHolder);
		sm->checkPermission($Subject$AuthPermissionHolder::SET_READ_ONLY_PERMISSION);
	}
	this->readOnly = true;
}

bool Subject::isReadOnly() {
	return this->readOnly;
}

Subject* Subject::getSubject($AccessControlContext* acc) {
	$init(Subject);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($Subject$AuthPermissionHolder);
		sm->checkPermission($Subject$AuthPermissionHolder::GET_SUBJECT_PERMISSION);
	}
	$Objects::requireNonNull(acc, $($ResourcesMgr::getString("invalid.null.AccessControlContext.provided"_s)));
	return $cast(Subject, $AccessController::doPrivileged($$new($Subject$1, acc)));
}

$Object* Subject::doAs(Subject* subject, $PrivilegedAction* action) {
	$init(Subject);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($Subject$AuthPermissionHolder);
		sm->checkPermission($Subject$AuthPermissionHolder::DO_AS_PERMISSION);
	}
	$Objects::requireNonNull(action, $($ResourcesMgr::getString("invalid.null.action.provided"_s)));
	$var($AccessControlContext, currentAcc, $AccessController::getContext());
	return $AccessController::doPrivileged(action, $(createContext(subject, currentAcc)));
}

$Object* Subject::doAs(Subject* subject, $PrivilegedExceptionAction* action) {
	$init(Subject);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($Subject$AuthPermissionHolder);
		sm->checkPermission($Subject$AuthPermissionHolder::DO_AS_PERMISSION);
	}
	$Objects::requireNonNull(action, $($ResourcesMgr::getString("invalid.null.action.provided"_s)));
	$var($AccessControlContext, currentAcc, $AccessController::getContext());
	return $AccessController::doPrivileged(action, $(createContext(subject, currentAcc)));
}

$Object* Subject::doAsPrivileged(Subject* subject, $PrivilegedAction* action, $AccessControlContext* acc) {
	$init(Subject);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($Subject$AuthPermissionHolder);
		sm->checkPermission($Subject$AuthPermissionHolder::DO_AS_PRIVILEGED_PERMISSION);
	}
	$Objects::requireNonNull(action, $($ResourcesMgr::getString("invalid.null.action.provided"_s)));
	$var($AccessControlContext, callerAcc, acc == nullptr ? $new($AccessControlContext, Subject::NULL_PD_ARRAY) : acc);
	return $AccessController::doPrivileged(action, $(createContext(subject, callerAcc)));
}

$Object* Subject::doAsPrivileged(Subject* subject, $PrivilegedExceptionAction* action, $AccessControlContext* acc) {
	$init(Subject);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($Subject$AuthPermissionHolder);
		sm->checkPermission($Subject$AuthPermissionHolder::DO_AS_PRIVILEGED_PERMISSION);
	}
	$Objects::requireNonNull(action, $($ResourcesMgr::getString("invalid.null.action.provided"_s)));
	$var($AccessControlContext, callerAcc, acc == nullptr ? $new($AccessControlContext, Subject::NULL_PD_ARRAY) : acc);
	return $AccessController::doPrivileged(action, $(createContext(subject, callerAcc)));
}

$AccessControlContext* Subject::createContext(Subject* subject, $AccessControlContext* acc) {
	$init(Subject);
	$beforeCallerSensitive();
	return $cast($AccessControlContext, $AccessController::doPrivileged($$new($Subject$2, subject, acc)));
}

$Set* Subject::getPrincipals() {
	return this->principals;
}

$Set* Subject::getPrincipals($Class* c) {
	$Objects::requireNonNull(c, $($ResourcesMgr::getString("invalid.null.Class.provided"_s)));
	return $new($Subject$ClassSet, this, Subject::PRINCIPAL_SET, c);
}

$Set* Subject::getPublicCredentials() {
	return this->pubCredentials;
}

$Set* Subject::getPrivateCredentials() {
	return this->privCredentials;
}

$Set* Subject::getPublicCredentials($Class* c) {
	$Objects::requireNonNull(c, $($ResourcesMgr::getString("invalid.null.Class.provided"_s)));
	return $new($Subject$ClassSet, this, Subject::PUB_CREDENTIAL_SET, c);
}

$Set* Subject::getPrivateCredentials($Class* c) {
	$Objects::requireNonNull(c, $($ResourcesMgr::getString("invalid.null.Class.provided"_s)));
	return $new($Subject$ClassSet, this, Subject::PRIV_CREDENTIAL_SET, c);
}

bool Subject::equals(Object$* o) {
	$useLocalObjectStack();
	if (o == nullptr) {
		return false;
	}
	if ($equals(this, o)) {
		return true;
	}
	if ($instanceOf(Subject, o)) {
		$var(Subject, that, $cast(Subject, o));
		$var($Set, thatPrincipals, nullptr);
		$synchronized(that->principals) {
			$assign(thatPrincipals, $new($HashSet, that->principals));
		}
		if (!$nc(this->principals)->equals(thatPrincipals)) {
			return false;
		}
		$var($Set, thatPubCredentials, nullptr);
		$synchronized(that->pubCredentials) {
			$assign(thatPubCredentials, $new($HashSet, that->pubCredentials));
		}
		if (!$nc(this->pubCredentials)->equals(thatPubCredentials)) {
			return false;
		}
		$var($Set, thatPrivCredentials, nullptr);
		$synchronized(that->privCredentials) {
			$assign(thatPrivCredentials, $new($HashSet, that->privCredentials));
		}
		if (!$nc(this->privCredentials)->equals(thatPrivCredentials)) {
			return false;
		}
		return true;
	}
	return false;
}

$String* Subject::toString() {
	return toString(true);
}

$String* Subject::toString(bool includePrivateCredentials) {
	$useLocalObjectStack();
	$var($String, s, $ResourcesMgr::getString("Subject."_s));
	$var($String, suffix, ""_s);
	$synchronized(this->principals) {
		$var($Iterator, pI, this->principals->iterator());
		while ($nc(pI)->hasNext()) {
			$var($Principal, p, $cast($Principal, pI->next()));
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append(suffix);
			var$0->append($($ResourcesMgr::getString(".Principal."_s)));
			var$0->append($($nc(p)->toString()));
			var$0->append($($ResourcesMgr::getString("NEWLINE"_s)));
			$assign(suffix, $str(var$0));
		}
	}
	$synchronized(this->pubCredentials) {
		$var($Iterator, pI, this->pubCredentials->iterator());
		while ($nc(pI)->hasNext()) {
			$var($Object, o, pI->next());
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append(suffix);
			var$1->append($($ResourcesMgr::getString(".Public.Credential."_s)));
			var$1->append($($nc(o)->toString()));
			var$1->append($($ResourcesMgr::getString("NEWLINE"_s)));
			$assign(suffix, $str(var$1));
		}
	}
	if (includePrivateCredentials) {
		$synchronized(this->privCredentials) {
			$var($Iterator, pI, this->privCredentials->iterator());
			while ($nc(pI)->hasNext()) {
				try {
					$var($Object, o, pI->next());
					$var($StringBuilder, var$2, $new($StringBuilder));
					var$2->append($($ResourcesMgr::getString(".Private.Credential."_s)));
					var$2->append($($nc(o)->toString()));
					var$2->append($($ResourcesMgr::getString("NEWLINE"_s)));
					$plusAssign(suffix, $$str(var$2));
				} catch ($SecurityException& se) {
					$plusAssign(suffix, $($ResourcesMgr::getString(".Private.Credential.inaccessible."_s)));
					break;
				}
			}
		}
	}
	return $str({s, suffix});
}

int32_t Subject::hashCode() {
	$useLocalObjectStack();
	int32_t hashCode = 0;
	$synchronized(this->principals) {
		$var($Iterator, pIterator, this->principals->iterator());
		while ($nc(pIterator)->hasNext()) {
			$var($Principal, p, $cast($Principal, pIterator->next()));
			hashCode ^= $nc(p)->hashCode();
		}
	}
	$synchronized(this->pubCredentials) {
		$var($Iterator, pubCIterator, this->pubCredentials->iterator());
		while ($nc(pubCIterator)->hasNext()) {
			hashCode ^= getCredHashCode($(pubCIterator->next()));
		}
	}
	return hashCode;
}

int32_t Subject::getCredHashCode(Object$* o) {
	try {
		return $nc($of(o))->hashCode();
	} catch ($IllegalStateException& ise) {
		return $$nc($nc($of(o))->getClass()->toString())->hashCode();
	}
	$shouldNotReachHere();
}

void Subject::writeObject($ObjectOutputStream* oos) {
	$synchronized(this->principals) {
		$nc(oos)->defaultWriteObject();
	}
}

void Subject::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, gf, $nc(s)->readFields());
	this->readOnly = $nc(gf)->get("readOnly"_s, false);
	$var($Set, inputPrincs, $cast($Set, gf->get("principals"_s, nullptr)));
	$Objects::requireNonNull(inputPrincs, $($ResourcesMgr::getString("invalid.null.input.s."_s)));
	try {
		$var($LinkedList, principalList, collectionNullClean(inputPrincs));
		$set(this, principals, $Collections::synchronizedSet($$new($Subject$SecureSet, this, Subject::PRINCIPAL_SET, principalList)));
	} catch ($NullPointerException& npe) {
		$set(this, principals, $Collections::synchronizedSet($$new($Subject$SecureSet, this, Subject::PRINCIPAL_SET)));
	}
	$set(this, pubCredentials, $Collections::synchronizedSet($$new($Subject$SecureSet, this, Subject::PUB_CREDENTIAL_SET)));
	$set(this, privCredentials, $Collections::synchronizedSet($$new($Subject$SecureSet, this, Subject::PRIV_CREDENTIAL_SET)));
}

$LinkedList* Subject::collectionNullClean($Collection* coll) {
	$init(Subject);
	$useLocalObjectStack();
	$Objects::requireNonNull(coll, $($ResourcesMgr::getString("invalid.null.input.s."_s)));
	$var($LinkedList, output, $new($LinkedList));
	{
		$var($Iterator, i$, $nc(coll)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			{
				output->add($Objects::requireNonNull(e, $($ResourcesMgr::getString("invalid.null.input.s."_s))));
			}
		}
	}
	return output;
}

void Subject::clinit$($Class* clazz) {
	$assignStatic(Subject::NULL_PD_ARRAY, $new($ProtectionDomainArray, 0));
}

Subject::Subject() {
}

$Class* Subject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Subject, serialVersionUID)},
		{"principals", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/Principal;>;", 0, $field(Subject, principals)},
		{"pubCredentials", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Object;>;", $TRANSIENT, $field(Subject, pubCredentials)},
		{"privCredentials", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Object;>;", $TRANSIENT, $field(Subject, privCredentials)},
		{"readOnly", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Subject, readOnly)},
		{"PRINCIPAL_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Subject, PRINCIPAL_SET)},
		{"PUB_CREDENTIAL_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Subject, PUB_CREDENTIAL_SET)},
		{"PRIV_CREDENTIAL_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Subject, PRIV_CREDENTIAL_SET)},
		{"NULL_PD_ARRAY", "[Ljava/security/ProtectionDomain;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Subject, NULL_PD_ARRAY)},
		{}
	};
	$NamedAttribute doAsPrivilegedmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "17"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute doAsPrivilegedmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", doAsPrivilegedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute doAsPrivilegedmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "17"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute doAsPrivilegedmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", doAsPrivilegedmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute getSubjectmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "17"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute getSubjectmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getSubjectmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Subject, init$, void)},
		{"<init>", "(ZLjava/util/Set;Ljava/util/Set;Ljava/util/Set;)V", "(ZLjava/util/Set<+Ljava/security/Principal;>;Ljava/util/Set<*>;Ljava/util/Set<*>;)V", $PUBLIC, $method(Subject, init$, void, bool, $Set*, $Set*, $Set*)},
		{"collectionNullClean", "(Ljava/util/Collection;)Ljava/util/LinkedList;", "<E:Ljava/lang/Object;>(Ljava/util/Collection<+TE;>;)Ljava/util/LinkedList<TE;>;", $PRIVATE | $STATIC, $staticMethod(Subject, collectionNullClean, $LinkedList*, $Collection*)},
		{"createContext", "(Ljavax/security/auth/Subject;Ljava/security/AccessControlContext;)Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $STATIC, $staticMethod(Subject, createContext, $AccessControlContext*, Subject*, $AccessControlContext*)},
		{"doAs", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction<TT;>;)TT;", $PUBLIC | $STATIC, $staticMethod(Subject, doAs, $Object*, Subject*, $PrivilegedAction*)},
		{"doAs", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedExceptionAction;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/security/auth/Subject;Ljava/security/PrivilegedExceptionAction<TT;>;)TT;", $PUBLIC | $STATIC, $staticMethod(Subject, doAs, $Object*, Subject*, $PrivilegedExceptionAction*), "java.security.PrivilegedActionException"},
		{"doAsPrivileged", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction<TT;>;Ljava/security/AccessControlContext;)TT;", $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Subject, doAsPrivileged, $Object*, Subject*, $PrivilegedAction*, $AccessControlContext*), nullptr, nullptr, doAsPrivilegedmethodAnnotations$$},
		{"doAsPrivileged", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/security/auth/Subject;Ljava/security/PrivilegedExceptionAction<TT;>;Ljava/security/AccessControlContext;)TT;", $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Subject, doAsPrivileged, $Object*, Subject*, $PrivilegedExceptionAction*, $AccessControlContext*), "java.security.PrivilegedActionException", nullptr, doAsPrivilegedmethodAnnotations$$$1},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Subject, equals, bool, Object$*)},
		{"getCredHashCode", "(Ljava/lang/Object;)I", nullptr, $PRIVATE, $method(Subject, getCredHashCode, int32_t, Object$*)},
		{"getPrincipals", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/Principal;>;", $PUBLIC, $method(Subject, getPrincipals, $Set*)},
		{"getPrincipals", "(Ljava/lang/Class;)Ljava/util/Set;", "<T::Ljava/security/Principal;>(Ljava/lang/Class<TT;>;)Ljava/util/Set<TT;>;", $PUBLIC, $method(Subject, getPrincipals, $Set*, $Class*)},
		{"getPrivateCredentials", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC, $method(Subject, getPrivateCredentials, $Set*)},
		{"getPrivateCredentials", "(Ljava/lang/Class;)Ljava/util/Set;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/util/Set<TT;>;", $PUBLIC, $method(Subject, getPrivateCredentials, $Set*, $Class*)},
		{"getPublicCredentials", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Object;>;", $PUBLIC, $method(Subject, getPublicCredentials, $Set*)},
		{"getPublicCredentials", "(Ljava/lang/Class;)Ljava/util/Set;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/util/Set<TT;>;", $PUBLIC, $method(Subject, getPublicCredentials, $Set*, $Class*)},
		{"getSubject", "(Ljava/security/AccessControlContext;)Ljavax/security/auth/Subject;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Subject, getSubject, Subject*, $AccessControlContext*), nullptr, nullptr, getSubjectmethodAnnotations$$},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Subject, hashCode, int32_t)},
		{"isReadOnly", "()Z", nullptr, $PUBLIC, $method(Subject, isReadOnly, bool)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(Subject, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"setReadOnly", "()V", nullptr, $PUBLIC, $method(Subject, setReadOnly, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Subject, toString, $String*)},
		{"toString", "(Z)Ljava/lang/String;", nullptr, 0, $method(Subject, toString, $String*, bool)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(Subject, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.Subject$AuthPermissionHolder", "javax.security.auth.Subject", "AuthPermissionHolder", $STATIC | $FINAL},
		{"javax.security.auth.Subject$ClassSet", "javax.security.auth.Subject", "ClassSet", $PRIVATE},
		{"javax.security.auth.Subject$SecureSet", "javax.security.auth.Subject", "SecureSet", $PRIVATE | $STATIC},
		{"javax.security.auth.Subject$2", nullptr, nullptr, 0},
		{"javax.security.auth.Subject$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.security.auth.Subject",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.security.auth.Subject$AuthPermissionHolder,javax.security.auth.Subject$ClassSet,javax.security.auth.Subject$ClassSet$1,javax.security.auth.Subject$SecureSet,javax.security.auth.Subject$SecureSet$6,javax.security.auth.Subject$SecureSet$5,javax.security.auth.Subject$SecureSet$4,javax.security.auth.Subject$SecureSet$3,javax.security.auth.Subject$SecureSet$2,javax.security.auth.Subject$SecureSet$1,javax.security.auth.Subject$2,javax.security.auth.Subject$1"
	};
	$loadClass(Subject, name, initialize, &classInfo$$, Subject::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Subject);
	});
	return class$;
}

$Class* Subject::class$ = nullptr;

		} // auth
	} // security
} // javax