#include <java/io/ObjectInputStream$ValidationList.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$ValidationList$1.h>
#include <java/io/ObjectInputStream$ValidationList$Callback.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectInputValidation.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
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
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace java {
	namespace io {

$FieldInfo _ObjectInputStream$ValidationList_FieldInfo_[] = {
	{"list", "Ljava/io/ObjectInputStream$ValidationList$Callback;", nullptr, $PRIVATE, $field(ObjectInputStream$ValidationList, list)},
	{}
};

$MethodInfo _ObjectInputStream$ValidationList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ObjectInputStream$ValidationList::*)()>(&ObjectInputStream$ValidationList::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"doCallbacks", "()V", nullptr, 0, nullptr, "java.io.InvalidObjectException"},
	{"register", "(Ljava/io/ObjectInputValidation;I)V", nullptr, 0, nullptr, "java.io.InvalidObjectException"},
	{}
};

$InnerClassInfo _ObjectInputStream$ValidationList_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$ValidationList", "java.io.ObjectInputStream", "ValidationList", $PRIVATE | $STATIC},
	{"java.io.ObjectInputStream$ValidationList$Callback", "java.io.ObjectInputStream$ValidationList", "Callback", $PRIVATE | $STATIC},
	{"java.io.ObjectInputStream$ValidationList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ObjectInputStream$ValidationList_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputStream$ValidationList",
	"java.lang.Object",
	nullptr,
	_ObjectInputStream$ValidationList_FieldInfo_,
	_ObjectInputStream$ValidationList_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputStream$ValidationList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$ValidationList($Class* clazz) {
	return $of($alloc(ObjectInputStream$ValidationList));
}

void ObjectInputStream$ValidationList::init$() {
}

void ObjectInputStream$ValidationList::register$($ObjectInputValidation* obj, int32_t priority) {
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		while (this->list != nullptr) {
			$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($ObjectInputStream$ValidationList$1, this)), $nc(this->list)->acc);
			$set(this, list, $nc(this->list)->next);
		}
	} catch ($PrivilegedActionException& ex) {
		$set(this, list, nullptr);
		$throw($cast($InvalidObjectException, $(ex->getException())));
	}
}

void ObjectInputStream$ValidationList::clear() {
	$set(this, list, nullptr);
}

ObjectInputStream$ValidationList::ObjectInputStream$ValidationList() {
}

$Class* ObjectInputStream$ValidationList::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$ValidationList, name, initialize, &_ObjectInputStream$ValidationList_ClassInfo_, allocate$ObjectInputStream$ValidationList);
	return class$;
}

$Class* ObjectInputStream$ValidationList::class$ = nullptr;

	} // io
} // java