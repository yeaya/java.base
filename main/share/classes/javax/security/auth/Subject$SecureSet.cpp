#include <javax/security/auth/Subject$SecureSet.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/Principal.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/security/auth/AuthPermission.h>
#include <javax/security/auth/PrivateCredentialPermission.h>
#include <javax/security/auth/Subject$AuthPermissionHolder.h>
#include <javax/security/auth/Subject$SecureSet$1.h>
#include <javax/security/auth/Subject$SecureSet$2.h>
#include <javax/security/auth/Subject$SecureSet$3.h>
#include <javax/security/auth/Subject$SecureSet$4.h>
#include <javax/security/auth/Subject$SecureSet$5.h>
#include <javax/security/auth/Subject$SecureSet$6.h>
#include <javax/security/auth/Subject.h>
#include <sun/security/util/ResourcesMgr.h>
#include <jcpp.h>

#undef MODIFY_PRINCIPALS_PERMISSION
#undef MODIFY_PRIVATE_CREDENTIALS_PERMISSION
#undef MODIFY_PUBLIC_CREDENTIALS_PERMISSION
#undef PRINCIPAL_SET
#undef PRIV_CREDENTIAL_SET
#undef PUB_CREDENTIAL_SET
#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $Principal = ::java::security::Principal;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $PrivateCredentialPermission = ::javax::security::auth::PrivateCredentialPermission;
using $Subject = ::javax::security::auth::Subject;
using $Subject$AuthPermissionHolder = ::javax::security::auth::Subject$AuthPermissionHolder;
using $Subject$SecureSet$1 = ::javax::security::auth::Subject$SecureSet$1;
using $Subject$SecureSet$2 = ::javax::security::auth::Subject$SecureSet$2;
using $Subject$SecureSet$3 = ::javax::security::auth::Subject$SecureSet$3;
using $Subject$SecureSet$4 = ::javax::security::auth::Subject$SecureSet$4;
using $Subject$SecureSet$5 = ::javax::security::auth::Subject$SecureSet$5;
using $Subject$SecureSet$6 = ::javax::security::auth::Subject$SecureSet$6;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;

namespace javax {
	namespace security {
		namespace auth {

$Object* Subject$SecureSet::clone() {
	 return this->$Set::clone();
}

$String* Subject$SecureSet::toString() {
	 return this->$Set::toString();
}

void Subject$SecureSet::finalize() {
	this->$Set::finalize();
}

$ObjectStreamFieldArray* Subject$SecureSet::serialPersistentFields = nullptr;

void Subject$SecureSet::init$($Subject* subject, int32_t which) {
	$set(this, subject, subject);
	this->which = which;
	$set(this, elements, $new($LinkedList));
}

void Subject$SecureSet::init$($Subject* subject, int32_t which, $LinkedList* list) {
	$set(this, subject, subject);
	this->which = which;
	$set(this, elements, list);
}

int32_t Subject$SecureSet::size() {
	return $nc(this->elements)->size();
}

$Iterator* Subject$SecureSet::iterator() {
	$var($LinkedList, list, this->elements);
	return $new($Subject$SecureSet$1, this, list);
}

bool Subject$SecureSet::add(Object$* o) {
	$useLocalObjectStack();
	$Objects::requireNonNull(o, $($ResourcesMgr::getString("invalid.null.input.s."_s)));
	if ($nc(this->subject)->isReadOnly()) {
		$throwNew($IllegalStateException, $($ResourcesMgr::getString("Subject.is.read.only"_s)));
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		switch (this->which) {
		case $Subject::PRINCIPAL_SET:
			$init($Subject$AuthPermissionHolder);
			sm->checkPermission($Subject$AuthPermissionHolder::MODIFY_PRINCIPALS_PERMISSION);
			break;
		case $Subject::PUB_CREDENTIAL_SET:
			$init($Subject$AuthPermissionHolder);
			sm->checkPermission($Subject$AuthPermissionHolder::MODIFY_PUBLIC_CREDENTIALS_PERMISSION);
			break;
		default:
			$init($Subject$AuthPermissionHolder);
			sm->checkPermission($Subject$AuthPermissionHolder::MODIFY_PRIVATE_CREDENTIALS_PERMISSION);
			break;
		}
	}
	switch (this->which) {
	case $Subject::PRINCIPAL_SET:
		if (!($instanceOf($Principal, o))) {
			$throwNew($SecurityException, $($ResourcesMgr::getString("attempting.to.add.an.object.which.is.not.an.instance.of.java.security.Principal.to.a.Subject.s.Principal.Set"_s)));
		}
		break;
	default:
		break;
	}
	if (!$nc(this->elements)->contains(o)) {
		return this->elements->add(o);
	} else {
		return false;
	}
}

bool Subject$SecureSet::remove(Object$* o) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Objects::requireNonNull(o, $($ResourcesMgr::getString("invalid.null.input.s."_s)));
	$var($Iterator, e, iterator());
	while ($nc(e)->hasNext()) {
		$var($Object, next, nullptr);
		if (this->which != $Subject::PRIV_CREDENTIAL_SET) {
			$assign(next, e->next());
		} else {
			$assign(next, $AccessController::doPrivileged($$new($Subject$SecureSet$2, this, e)));
		}
		if ($nc(next)->equals(o)) {
			e->remove();
			return true;
		}
	}
	return false;
}

bool Subject$SecureSet::contains(Object$* o) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Objects::requireNonNull(o, $($ResourcesMgr::getString("invalid.null.input.s."_s)));
	$var($Iterator, e, iterator());
	while ($nc(e)->hasNext()) {
		$var($Object, next, nullptr);
		if (this->which != $Subject::PRIV_CREDENTIAL_SET) {
			$assign(next, e->next());
		} else {
			$var($SecurityManager, sm, $System::getSecurityManager());
			if (sm != nullptr) {
				$var($String, var$0, $nc($of(o))->getClass()->getName());
				sm->checkPermission($$new($PrivateCredentialPermission, var$0, $($nc(this->subject)->getPrincipals())));
			}
			$assign(next, $AccessController::doPrivileged($$new($Subject$SecureSet$3, this, e)));
		}
		if ($nc(next)->equals(o)) {
			return true;
		}
	}
	return false;
}

bool Subject$SecureSet::addAll($Collection* c$renamed) {
	$useLocalObjectStack();
	$var($Collection, c, c$renamed);
	bool result = false;
	$assign(c, $cast($AbstractCollection, $Subject::collectionNullClean(c)));
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, item, i$->next());
			{
				result |= this->add(item);
			}
		}
	}
	return result;
}

bool Subject$SecureSet::removeAll($Collection* c$renamed) {
	$useLocalObjectStack();
	$var($Collection, c, c$renamed);
	$beforeCallerSensitive();
	$assign(c, $cast($AbstractCollection, $Subject::collectionNullClean(c)));
	bool modified = false;
	$var($Iterator, e, iterator());
	while ($nc(e)->hasNext()) {
		$var($Object, next, nullptr);
		if (this->which != $Subject::PRIV_CREDENTIAL_SET) {
			$assign(next, e->next());
		} else {
			$assign(next, $AccessController::doPrivileged($$new($Subject$SecureSet$4, this, e)));
		}
		$var($Iterator, ce, $nc(c)->iterator());
		while ($nc(ce)->hasNext()) {
			if ($nc(next)->equals($(ce->next()))) {
				e->remove();
				modified = true;
				break;
			}
		}
	}
	return modified;
}

bool Subject$SecureSet::containsAll($Collection* c$renamed) {
	$useLocalObjectStack();
	$var($Collection, c, c$renamed);
	$assign(c, $cast($AbstractCollection, $Subject::collectionNullClean(c)));
	{
		$var($Iterator, i$, $nc(c)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, item, i$->next());
			if (this->contains(item) == false) {
				return false;
			}
		}
	}
	return true;
}

bool Subject$SecureSet::retainAll($Collection* c$renamed) {
	$useLocalObjectStack();
	$var($Collection, c, c$renamed);
	$beforeCallerSensitive();
	$assign(c, $cast($AbstractCollection, $Subject::collectionNullClean(c)));
	bool modified = false;
	$var($Iterator, e, iterator());
	while ($nc(e)->hasNext()) {
		$var($Object, next, nullptr);
		if (this->which != $Subject::PRIV_CREDENTIAL_SET) {
			$assign(next, e->next());
		} else {
			$assign(next, $AccessController::doPrivileged($$new($Subject$SecureSet$5, this, e)));
		}
		if ($nc(c)->contains(next) == false) {
			e->remove();
			modified = true;
		}
	}
	return modified;
}

void Subject$SecureSet::clear() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Iterator, e, iterator());
	while ($nc(e)->hasNext()) {
		$var($Object, next, nullptr);
		if (this->which != $Subject::PRIV_CREDENTIAL_SET) {
			$assign(next, e->next());
		} else {
			$assign(next, $AccessController::doPrivileged($$new($Subject$SecureSet$6, this, e)));
		}
		e->remove();
	}
}

bool Subject$SecureSet::isEmpty() {
	return $nc(this->elements)->isEmpty();
}

$ObjectArray* Subject$SecureSet::toArray() {
	$var($Iterator, e, iterator());
	while ($nc(e)->hasNext()) {
		e->next();
	}
	return $nc(this->elements)->toArray();
}

$ObjectArray* Subject$SecureSet::toArray($ObjectArray* a) {
	$var($Iterator, e, iterator());
	while ($nc(e)->hasNext()) {
		e->next();
	}
	return $nc(this->elements)->toArray(a);
}

bool Subject$SecureSet::equals(Object$* o) {
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf($Set, o))) {
		return false;
	}
	$var($Collection, c, $cast($Collection, o));
	int32_t var$0 = $nc(c)->size();
	if (var$0 != size()) {
		return false;
	}
	try {
		return containsAll(c);
	} catch ($ClassCastException& unused) {
		return false;
	} catch ($NullPointerException& unused) {
		return false;
	}
	$shouldNotReachHere();
}

int32_t Subject$SecureSet::hashCode() {
	$useLocalObjectStack();
	int32_t h = 0;
	$var($Iterator, i, iterator());
	while ($nc(i)->hasNext()) {
		$var($Object, obj, i->next());
		if (obj != nullptr) {
			h += obj->hashCode();
		}
	}
	return h;
}

void Subject$SecureSet::writeObject($ObjectOutputStream* oos) {
	$useLocalObjectStack();
	if (this->which == $Subject::PRIV_CREDENTIAL_SET) {
		$var($Iterator, i, iterator());
		while ($nc(i)->hasNext()) {
			i->next();
		}
	}
	$var($ObjectOutputStream$PutField, fields, $nc(oos)->putFields());
	$nc(fields)->put("this$0"_s, this->subject);
	fields->put("elements"_s, this->elements);
	fields->put("which"_s, this->which);
	oos->writeFields();
}

void Subject$SecureSet::readObject($ObjectInputStream* ois) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, fields, $nc(ois)->readFields());
	$set(this, subject, $cast($Subject, $nc(fields)->get("this$0"_s, nullptr)));
	this->which = fields->get("which"_s, 0);
	$var($LinkedList, tmp, $cast($LinkedList, fields->get("elements"_s, nullptr)));
	$set(this, elements, $Subject::collectionNullClean($cast($AbstractCollection, tmp)));
}

void Subject$SecureSet::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$load($Subject);
	$load($LinkedList);
	$assignStatic(Subject$SecureSet::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "this$0"_s, $Subject::class$),
		$$new($ObjectStreamField, "elements"_s, $LinkedList::class$),
		$$new($ObjectStreamField, "which"_s, $Integer::TYPE)
	}));
}

Subject$SecureSet::Subject$SecureSet() {
}

$Class* Subject$SecureSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Subject$SecureSet, serialVersionUID)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Subject$SecureSet, serialPersistentFields)},
		{"subject", "Ljavax/security/auth/Subject;", nullptr, 0, $field(Subject$SecureSet, subject)},
		{"elements", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<TE;>;", 0, $field(Subject$SecureSet, elements)},
		{"which", "I", nullptr, $PRIVATE, $field(Subject$SecureSet, which)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljavax/security/auth/Subject;I)V", nullptr, 0, $method(Subject$SecureSet, init$, void, $Subject*, int32_t)},
		{"<init>", "(Ljavax/security/auth/Subject;ILjava/util/LinkedList;)V", "(Ljavax/security/auth/Subject;ILjava/util/LinkedList<TE;>;)V", 0, $method(Subject$SecureSet, init$, void, $Subject*, int32_t, $LinkedList*)},
		{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC, $virtualMethod(Subject$SecureSet, add, bool, Object$*)},
		{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC, $virtualMethod(Subject$SecureSet, addAll, bool, $Collection*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Subject$SecureSet, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Subject$SecureSet, contains, bool, Object$*)},
		{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Subject$SecureSet, containsAll, bool, $Collection*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Subject$SecureSet, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Subject$SecureSet, hashCode, int32_t)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Subject$SecureSet, isEmpty, bool)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(Subject$SecureSet, iterator, $Iterator*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(Subject$SecureSet, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Subject$SecureSet, remove, bool, Object$*)},
		{"removeAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Subject$SecureSet, removeAll, bool, $Collection*)},
		{"retainAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC, $virtualMethod(Subject$SecureSet, retainAll, bool, $Collection*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Subject$SecureSet, size, int32_t)},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Subject$SecureSet, toArray, $ObjectArray*)},
		{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC, $virtualMethod(Subject$SecureSet, toArray, $ObjectArray*, $ObjectArray*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(Subject$SecureSet, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.Subject$SecureSet", "javax.security.auth.Subject", "SecureSet", $PRIVATE | $STATIC},
		{"javax.security.auth.Subject$SecureSet$6", nullptr, nullptr, 0},
		{"javax.security.auth.Subject$SecureSet$5", nullptr, nullptr, 0},
		{"javax.security.auth.Subject$SecureSet$4", nullptr, nullptr, 0},
		{"javax.security.auth.Subject$SecureSet$3", nullptr, nullptr, 0},
		{"javax.security.auth.Subject$SecureSet$2", nullptr, nullptr, 0},
		{"javax.security.auth.Subject$SecureSet$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.Subject$SecureSet",
		"java.lang.Object",
		"java.util.Set,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Set<TE;>;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.Subject"
	};
	$loadClass(Subject$SecureSet, name, initialize, &classInfo$$, Subject$SecureSet::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Subject$SecureSet));
	});
	return class$;
}

$Class* Subject$SecureSet::class$ = nullptr;

		} // auth
	} // security
} // javax