#include <java/lang/ThreadDeath.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _ThreadDeath_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadDeath, serialVersionUID)},
	{}
};

$MethodInfo _ThreadDeath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ThreadDeath::*)()>(&ThreadDeath::init$))},
	{}
};

$ClassInfo _ThreadDeath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ThreadDeath",
	"java.lang.Error",
	nullptr,
	_ThreadDeath_FieldInfo_,
	_ThreadDeath_MethodInfo_
};

$Object* allocate$ThreadDeath($Class* clazz) {
	return $of($alloc(ThreadDeath));
}

void ThreadDeath::init$() {
	$Error::init$();
}

ThreadDeath::ThreadDeath() {
}

ThreadDeath::ThreadDeath(const ThreadDeath& e) {
}

ThreadDeath ThreadDeath::wrapper$() {
	$pendingException(this);
	return *this;
}

void ThreadDeath::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ThreadDeath::load$($String* name, bool initialize) {
	$loadClass(ThreadDeath, name, initialize, &_ThreadDeath_ClassInfo_, allocate$ThreadDeath);
	return class$;
}

$Class* ThreadDeath::class$ = nullptr;

	} // lang
} // java