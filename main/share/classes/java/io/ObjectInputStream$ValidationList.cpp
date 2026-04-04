#include <java/io/ObjectInputStream$ValidationList.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$ValidationList$1.h>
#include <java/io/ObjectInputStream$ValidationList$Callback.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectInputValidation.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <jcpp.h>

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream$ValidationList$1 = ::java::io::ObjectInputStream$ValidationList$1;
using $ObjectInputStream$ValidationList$Callback = ::java::io::ObjectInputStream$ValidationList$Callback;
using $ObjectInputValidation = ::java::io::ObjectInputValidation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;

namespace java {
	namespace io {

void ObjectInputStream$ValidationList::init$() {
}

void ObjectInputStream$ValidationList::register$($ObjectInputValidation* obj, int32_t priority) {
	$useLocalObjectStack();
	if (obj == nullptr) {
		$throwNew($InvalidObjectException, "null callback"_s);
	}
	$var($ObjectInputStream$ValidationList$Callback, prev, nullptr);
	$var($ObjectInputStream$ValidationList$Callback, cur, this->list);
	while (cur != nullptr && priority < cur->priority) {
		$assign(prev, cur);
		$assign(cur, cur->next);
	}
	$var($AccessControlContext, acc, $AccessController::getContext());
	if (prev != nullptr) {
		$set(prev, next, $new($ObjectInputStream$ValidationList$Callback, obj, priority, cur, acc));
	} else {
		$set(this, list, $new($ObjectInputStream$ValidationList$Callback, obj, priority, this->list, acc));
	}
}

void ObjectInputStream$ValidationList::doCallbacks() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		while (this->list != nullptr) {
			$AccessController::doPrivileged($$new($ObjectInputStream$ValidationList$1, this), this->list->acc);
			$set(this, list, this->list->next);
		}
	} catch ($PrivilegedActionException& ex) {
		$set(this, list, nullptr);
		$throw($$cast($InvalidObjectException, ex->getException()));
	}
}

void ObjectInputStream$ValidationList::clear() {
	$set(this, list, nullptr);
}

ObjectInputStream$ValidationList::ObjectInputStream$ValidationList() {
}

$Class* ObjectInputStream$ValidationList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"list", "Ljava/io/ObjectInputStream$ValidationList$Callback;", nullptr, $PRIVATE, $field(ObjectInputStream$ValidationList, list)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ObjectInputStream$ValidationList, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(ObjectInputStream$ValidationList, clear, void)},
		{"doCallbacks", "()V", nullptr, 0, $virtualMethod(ObjectInputStream$ValidationList, doCallbacks, void), "java.io.InvalidObjectException"},
		{"register", "(Ljava/io/ObjectInputValidation;I)V", nullptr, 0, $virtualMethod(ObjectInputStream$ValidationList, register$, void, $ObjectInputValidation*, int32_t), "java.io.InvalidObjectException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputStream$ValidationList", "java.io.ObjectInputStream", "ValidationList", $PRIVATE | $STATIC},
		{"java.io.ObjectInputStream$ValidationList$Callback", "java.io.ObjectInputStream$ValidationList", "Callback", $PRIVATE | $STATIC},
		{"java.io.ObjectInputStream$ValidationList$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectInputStream$ValidationList",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectInputStream"
	};
	$loadClass(ObjectInputStream$ValidationList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputStream$ValidationList);
	});
	return class$;
}

$Class* ObjectInputStream$ValidationList::class$ = nullptr;

	} // io
} // java