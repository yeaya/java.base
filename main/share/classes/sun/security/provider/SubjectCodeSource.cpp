#include <sun/security/provider/SubjectCodeSource.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/Principal.h>
#include <java/security/cert/Certificate.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/ListIterator.h>
#include <java/util/Set.h>
#include <javax/security/auth/Subject.h>
#include <sun/security/provider/PolicyParser$PrincipalEntry.h>
#include <sun/security/provider/SubjectCodeSource$1.h>
#include <sun/security/provider/SubjectCodeSource$2.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/ResourcesMgr.h>
#include <jcpp.h>

#undef PARAMS
#undef WILDCARD_CLASS
#undef WILDCARD_NAME

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Constructor = ::java::lang::reflect::Constructor;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $Principal = ::java::security::Principal;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $ListIterator = ::java::util::ListIterator;
using $Subject = ::javax::security::auth::Subject;
using $PolicyParser$PrincipalEntry = ::sun::security::provider::PolicyParser$PrincipalEntry;
using $SubjectCodeSource$1 = ::sun::security::provider::SubjectCodeSource$1;
using $SubjectCodeSource$2 = ::sun::security::provider::SubjectCodeSource$2;
using $Debug = ::sun::security::util::Debug;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;

namespace sun {
	namespace security {
		namespace provider {

$ClassArray* SubjectCodeSource::PARAMS = nullptr;
$Debug* SubjectCodeSource::debug = nullptr;

void SubjectCodeSource::init$($Subject* subject, $LinkedList* principals, $URL* url, $CertificateArray* certs) {
	$beforeCallerSensitive();
	$CodeSource::init$(url, certs);
	$set(this, subject, subject);
	$set(this, principals, principals == nullptr ? $new($LinkedList) : $new($LinkedList, $cast($AbstractCollection, principals)));
	$set(this, sysClassLoader, $cast($ClassLoader, $AccessController::doPrivileged($$new($SubjectCodeSource$1, this))));
}

$LinkedList* SubjectCodeSource::getPrincipals() {
	return this->principals;
}

$Subject* SubjectCodeSource::getSubject() {
	return this->subject;
}

bool SubjectCodeSource::implies($CodeSource* codesource) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($LinkedList, subjectList, nullptr);
	if (codesource == nullptr || !($instanceOf(SubjectCodeSource, codesource)) || !($CodeSource::implies(codesource))) {
		if (SubjectCodeSource::debug != nullptr) {
			SubjectCodeSource::debug->println("\tSubjectCodeSource.implies: FAILURE 1"_s);
		}
		return false;
	}
	$var(SubjectCodeSource, that, $cast(SubjectCodeSource, codesource));
	if (this->principals == nullptr) {
		if (SubjectCodeSource::debug != nullptr) {
			SubjectCodeSource::debug->println("\tSubjectCodeSource.implies: PASS 1"_s);
		}
		return true;
	}
	bool var$0 = $nc(that)->getSubject() == nullptr;
	if (var$0 || $$nc($$nc(that->getSubject())->getPrincipals())->size() == 0) {
		if (SubjectCodeSource::debug != nullptr) {
			SubjectCodeSource::debug->println("\tSubjectCodeSource.implies: FAILURE 2"_s);
		}
		return false;
	}
	$var($ListIterator, li, $nc(this->principals)->listIterator(0));
	while ($nc(li)->hasNext()) {
		$var($PolicyParser$PrincipalEntry, pppe, $cast($PolicyParser$PrincipalEntry, li->next()));
		try {
			$Class* pClass = $Class::forName($nc(pppe)->principalClass, true, this->sysClassLoader);
			$load($Principal);
			if (!$Principal::class$->isAssignableFrom(pClass)) {
				$throwNew($ClassCastException, $$str({pppe->principalClass, " is not a Principal"_s}));
			}
			$var($Constructor, c, pClass->getConstructor(SubjectCodeSource::PARAMS));
			$var($Principal, p, $cast($Principal, $nc(c)->newInstance($$new($ObjectArray, {pppe->principalName}))));
			if (!$nc(p)->implies($(that->getSubject()))) {
				if (SubjectCodeSource::debug != nullptr) {
					SubjectCodeSource::debug->println("\tSubjectCodeSource.implies: FAILURE 3"_s);
				}
				return false;
			} else {
				if (SubjectCodeSource::debug != nullptr) {
					SubjectCodeSource::debug->println("\tSubjectCodeSource.implies: PASS 2"_s);
				}
				return true;
			}
		} catch ($Exception& e) {
			if (subjectList == nullptr) {
				if (that->getSubject() == nullptr) {
					if (SubjectCodeSource::debug != nullptr) {
						SubjectCodeSource::debug->println("\tSubjectCodeSource.implies: FAILURE 4"_s);
					}
					return false;
				}
				$var($Iterator, i, $$nc($$nc(that->getSubject())->getPrincipals())->iterator());
				$assign(subjectList, $new($LinkedList));
				while ($nc(i)->hasNext()) {
					$var($Principal, p, $cast($Principal, i->next()));
					$var($String, var$1, $nc(p)->getClass()->getName());
					$var($PolicyParser$PrincipalEntry, spppe, $new($PolicyParser$PrincipalEntry, var$1, $(p->getName())));
					subjectList->add(spppe);
				}
			}
			if (!subjectListImpliesPrincipalEntry(subjectList, pppe)) {
				if (SubjectCodeSource::debug != nullptr) {
					SubjectCodeSource::debug->println("\tSubjectCodeSource.implies: FAILURE 5"_s);
				}
				return false;
			}
		}
	}
	if (SubjectCodeSource::debug != nullptr) {
		SubjectCodeSource::debug->println("\tSubjectCodeSource.implies: PASS 3"_s);
	}
	return true;
}

bool SubjectCodeSource::subjectListImpliesPrincipalEntry($LinkedList* subjectList, $PolicyParser$PrincipalEntry* pppe) {
	$useLocalObjectStack();
	$var($ListIterator, li, $nc(subjectList)->listIterator(0));
	while ($nc(li)->hasNext()) {
		$var($PolicyParser$PrincipalEntry, listPppe, $cast($PolicyParser$PrincipalEntry, li->next()));
		$init($PolicyParser$PrincipalEntry);
		bool var$0 = $$nc($nc(pppe)->getPrincipalClass())->equals($PolicyParser$PrincipalEntry::WILDCARD_CLASS);
		if (var$0 || $$nc(pppe->getPrincipalClass())->equals($($nc(listPppe)->getPrincipalClass()))) {
			bool var$1 = $$nc(pppe->getPrincipalName())->equals($PolicyParser$PrincipalEntry::WILDCARD_NAME);
			if (var$1 || $$nc(pppe->getPrincipalName())->equals($($nc(listPppe)->getPrincipalName()))) {
				return true;
			}
		}
	}
	return false;
}

bool SubjectCodeSource::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if ($CodeSource::equals(obj) == false) {
		return false;
	}
	if (!($instanceOf(SubjectCodeSource, obj))) {
		return false;
	}
	$var(SubjectCodeSource, that, $cast(SubjectCodeSource, obj));
	try {
		if (this->getSubject() != $nc(that)->getSubject()) {
			return false;
		}
	} catch ($SecurityException& se) {
		return false;
	}
	if ((this->principals == nullptr && $nc(that)->principals != nullptr) || (this->principals != nullptr && $nc(that)->principals == nullptr)) {
		return false;
	}
	if (this->principals != nullptr && $nc(that)->principals != nullptr) {
		bool var$0 = !this->principals->containsAll($cast($AbstractCollection, that->principals));
		if (var$0 || !that->principals->containsAll($cast($AbstractCollection, this->principals))) {
			return false;
		}
	}
	return true;
}

int32_t SubjectCodeSource::hashCode() {
	return $CodeSource::hashCode();
}

$String* SubjectCodeSource::toString() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, returnMe, $CodeSource::toString());
	if (getSubject() != nullptr) {
		if (SubjectCodeSource::debug != nullptr) {
			$var($Subject, finalSubject, getSubject());
			$assign(returnMe, $str({returnMe, "\n"_s, $$cast($String, $AccessController::doPrivileged($$new($SubjectCodeSource$2, this, finalSubject)))}));
		} else {
			$assign(returnMe, $str({returnMe, "\n"_s, $($$nc(getSubject())->toString())}));
		}
	}
	if (this->principals != nullptr) {
		$var($ListIterator, li, this->principals->listIterator());
		while ($nc(li)->hasNext()) {
			$var($PolicyParser$PrincipalEntry, pppe, $cast($PolicyParser$PrincipalEntry, li->next()));
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append(returnMe);
			var$0->append($($ResourcesMgr::getAuthResourceString("NEWLINE"_s)));
			var$0->append($($nc(pppe)->getPrincipalClass()));
			var$0->append(" "_s);
			var$0->append($(pppe->getPrincipalName()));
			$assign(returnMe, $str(var$0));
		}
	}
	return returnMe;
}

void SubjectCodeSource::clinit$($Class* clazz) {
	$assignStatic(SubjectCodeSource::PARAMS, $new($ClassArray, {$String::class$}));
	$assignStatic(SubjectCodeSource::debug, $Debug::getInstance("auth"_s, "\t[Auth Access]"_s));
}

SubjectCodeSource::SubjectCodeSource() {
}

$Class* SubjectCodeSource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SubjectCodeSource, serialVersionUID)},
		{"subject", "Ljavax/security/auth/Subject;", nullptr, $PRIVATE, $field(SubjectCodeSource, subject)},
		{"principals", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Lsun/security/provider/PolicyParser$PrincipalEntry;>;", $PRIVATE, $field(SubjectCodeSource, principals)},
		{"PARAMS", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(SubjectCodeSource, PARAMS)},
		{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SubjectCodeSource, debug)},
		{"sysClassLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(SubjectCodeSource, sysClassLoader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/Subject;Ljava/util/LinkedList;Ljava/net/URL;[Ljava/security/cert/Certificate;)V", "(Ljavax/security/auth/Subject;Ljava/util/LinkedList<Lsun/security/provider/PolicyParser$PrincipalEntry;>;Ljava/net/URL;[Ljava/security/cert/Certificate;)V", 0, $method(SubjectCodeSource, init$, void, $Subject*, $LinkedList*, $URL*, $CertificateArray*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SubjectCodeSource, equals, bool, Object$*)},
		{"getPrincipals", "()Ljava/util/LinkedList;", "()Ljava/util/LinkedList<Lsun/security/provider/PolicyParser$PrincipalEntry;>;", 0, $virtualMethod(SubjectCodeSource, getPrincipals, $LinkedList*)},
		{"getSubject", "()Ljavax/security/auth/Subject;", nullptr, 0, $virtualMethod(SubjectCodeSource, getSubject, $Subject*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SubjectCodeSource, hashCode, int32_t)},
		{"implies", "(Ljava/security/CodeSource;)Z", nullptr, $PUBLIC, $virtualMethod(SubjectCodeSource, implies, bool, $CodeSource*)},
		{"subjectListImpliesPrincipalEntry", "(Ljava/util/LinkedList;Lsun/security/provider/PolicyParser$PrincipalEntry;)Z", "(Ljava/util/LinkedList<Lsun/security/provider/PolicyParser$PrincipalEntry;>;Lsun/security/provider/PolicyParser$PrincipalEntry;)Z", $PRIVATE, $method(SubjectCodeSource, subjectListImpliesPrincipalEntry, bool, $LinkedList*, $PolicyParser$PrincipalEntry*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SubjectCodeSource, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SubjectCodeSource$2", nullptr, nullptr, 0},
		{"sun.security.provider.SubjectCodeSource$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.SubjectCodeSource",
		"java.security.CodeSource",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.SubjectCodeSource$2,sun.security.provider.SubjectCodeSource$1"
	};
	$loadClass(SubjectCodeSource, name, initialize, &classInfo$$, SubjectCodeSource::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SubjectCodeSource);
	});
	return class$;
}

$Class* SubjectCodeSource::class$ = nullptr;

		} // provider
	} // security
} // sun