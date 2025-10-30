#include <javax/security/auth/Subject$ClassSet.h>

#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/text/MessageFormat.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/security/auth/PrivateCredentialPermission.h>
#include <javax/security/auth/Subject$ClassSet$1.h>
#include <javax/security/auth/Subject.h>
#include <sun/security/util/ResourcesMgr.h>
#include <jcpp.h>

#undef PRINCIPAL_SET
#undef PRIV_CREDENTIAL_SET
#undef PUB_CREDENTIAL_SET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $PrivateCredentialPermission = ::javax::security::auth::PrivateCredentialPermission;
using $Subject = ::javax::security::auth::Subject;
using $Subject$ClassSet$1 = ::javax::security::auth::Subject$ClassSet$1;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _Subject$ClassSet_FieldInfo_[] = {
	{"this$0", "Ljavax/security/auth/Subject;", nullptr, $FINAL | $SYNTHETIC, $field(Subject$ClassSet, this$0)},
	{"which", "I", nullptr, $PRIVATE, $field(Subject$ClassSet, which)},
	{"c", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE, $field(Subject$ClassSet, c)},
	{"set", "Ljava/util/Set;", "Ljava/util/Set<TT;>;", $PRIVATE, $field(Subject$ClassSet, set)},
	{}
};

$MethodInfo _Subject$ClassSet_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/Subject;ILjava/lang/Class;)V", "(ILjava/lang/Class<TT;>;)V", 0, $method(static_cast<void(Subject$ClassSet::*)($Subject*,int32_t,$Class*)>(&Subject$ClassSet::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TT;)Z", $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TT;>;", $PUBLIC},
	{"populateSet", "()V", nullptr, $PRIVATE, $method(static_cast<void(Subject$ClassSet::*)()>(&Subject$ClassSet::populateSet))},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Subject$ClassSet_InnerClassesInfo_[] = {
	{"javax.security.auth.Subject$ClassSet", "javax.security.auth.Subject", "ClassSet", $PRIVATE},
	{"javax.security.auth.Subject$ClassSet$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Subject$ClassSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.Subject$ClassSet",
	"java.util.AbstractSet",
	nullptr,
	_Subject$ClassSet_FieldInfo_,
	_Subject$ClassSet_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/AbstractSet<TT;>;",
	nullptr,
	_Subject$ClassSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.Subject"
};

$Object* allocate$Subject$ClassSet($Class* clazz) {
	return $of($alloc(Subject$ClassSet));
}

void Subject$ClassSet::init$($Subject* this$0, int32_t which, $Class* c) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
	this->which = which;
	$set(this, c, c);
	$set(this, set, $new($HashSet));
	switch (which) {
	case $Subject::PRINCIPAL_SET:
		{
			$synchronized(this$0->principals) {
				populateSet();
			}
			break;
		}
	case $Subject::PUB_CREDENTIAL_SET:
		{
			$synchronized(this$0->pubCredentials) {
				populateSet();
			}
			break;
		}
	default:
		{
			$synchronized(this$0->privCredentials) {
				populateSet();
			}
			break;
		}
	}
}

void Subject$ClassSet::populateSet() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Iterator, iterator, nullptr);
	switch (this->which) {
	case $Subject::PRINCIPAL_SET:
		{
			$assign(iterator, $nc(this->this$0->principals)->iterator());
			break;
		}
	case $Subject::PUB_CREDENTIAL_SET:
		{
			$assign(iterator, $nc(this->this$0->pubCredentials)->iterator());
			break;
		}
	default:
		{
			$assign(iterator, $nc(this->this$0->privCredentials)->iterator());
			break;
		}
	}
	while ($nc(iterator)->hasNext()) {
		$var($Object, next, nullptr);
		if (this->which == $Subject::PRIV_CREDENTIAL_SET) {
			$assign(next, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Subject$ClassSet$1, this, iterator))));
		} else {
			$assign(next, iterator->next());
		}
		if ($nc(this->c)->isAssignableFrom($nc($of(next))->getClass())) {
			if (this->which != $Subject::PRIV_CREDENTIAL_SET) {
				$nc(this->set)->add(next);
			} else {
				$var($SecurityManager, sm, $System::getSecurityManager());
				if (sm != nullptr) {
					$var($String, var$0, $nc($of(next))->getClass()->getName());
					sm->checkPermission($$new($PrivateCredentialPermission, var$0, $(this->this$0->getPrincipals())));
				}
				$nc(this->set)->add(next);
			}
		}
	}
}

int32_t Subject$ClassSet::size() {
	return $nc(this->set)->size();
}

$Iterator* Subject$ClassSet::iterator() {
	return $nc(this->set)->iterator();
}

bool Subject$ClassSet::add(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->c)->isAssignableFrom($nc($of(o))->getClass())) {
		$var($MessageFormat, form, $new($MessageFormat, $($ResourcesMgr::getString("attempting.to.add.an.object.which.is.not.an.instance.of.class"_s))));
		$var($ObjectArray, source, $new($ObjectArray, {$($of($nc(this->c)->toString()))}));
		$throwNew($SecurityException, $(form->format(source)));
	}
	return $nc(this->set)->add(o);
}

Subject$ClassSet::Subject$ClassSet() {
}

$Class* Subject$ClassSet::load$($String* name, bool initialize) {
	$loadClass(Subject$ClassSet, name, initialize, &_Subject$ClassSet_ClassInfo_, allocate$Subject$ClassSet);
	return class$;
}

$Class* Subject$ClassSet::class$ = nullptr;

		} // auth
	} // security
} // javax