#include <java/io/SerialCallbackContext.h>

#include <java/io/NotActiveException.h>
#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $NotActiveException = ::java::io::NotActiveException;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _SerialCallbackContext_FieldInfo_[] = {
	{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SerialCallbackContext, obj)},
	{"desc", "Ljava/io/ObjectStreamClass;", nullptr, $PRIVATE | $FINAL, $field(SerialCallbackContext, desc)},
	{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(SerialCallbackContext, thread)},
	{}
};

$MethodInfo _SerialCallbackContext_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/io/ObjectStreamClass;)V", nullptr, $PUBLIC, $method(SerialCallbackContext, init$, void, Object$*, $ObjectStreamClass*)},
	{"check", "()V", nullptr, $PUBLIC, $method(SerialCallbackContext, check, void), "java.io.NotActiveException"},
	{"checkAndSetUsed", "()V", nullptr, $PUBLIC, $method(SerialCallbackContext, checkAndSetUsed, void), "java.io.NotActiveException"},
	{"getDesc", "()Ljava/io/ObjectStreamClass;", nullptr, $PUBLIC, $method(SerialCallbackContext, getDesc, $ObjectStreamClass*)},
	{"getObj", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(SerialCallbackContext, getObj, $Object*), "java.io.NotActiveException"},
	{"setUsed", "()V", nullptr, $PUBLIC, $method(SerialCallbackContext, setUsed, void)},
	{}
};

$ClassInfo _SerialCallbackContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.io.SerialCallbackContext",
	"java.lang.Object",
	nullptr,
	_SerialCallbackContext_FieldInfo_,
	_SerialCallbackContext_MethodInfo_
};

$Object* allocate$SerialCallbackContext($Class* clazz) {
	return $of($alloc(SerialCallbackContext));
}

void SerialCallbackContext::init$(Object$* obj, $ObjectStreamClass* desc) {
	$set(this, obj, obj);
	$set(this, desc, desc);
	$set(this, thread, $Thread::currentThread());
}

$Object* SerialCallbackContext::getObj() {
	checkAndSetUsed();
	return $of(this->obj);
}

$ObjectStreamClass* SerialCallbackContext::getDesc() {
	return this->desc;
}

void SerialCallbackContext::check() {
	$useLocalCurrentObjectStackCache();
	if (this->thread != nullptr && this->thread != $Thread::currentThread()) {
		$var($String, var$0, $$str({"expected thread: "_s, this->thread, ", but got: "_s}));
		$throwNew($NotActiveException, $$concat(var$0, $($Thread::currentThread())));
	}
}

void SerialCallbackContext::checkAndSetUsed() {
	if (this->thread != $Thread::currentThread()) {
		$throwNew($NotActiveException, "not in readObject invocation or fields already read"_s);
	}
	$set(this, thread, nullptr);
}

void SerialCallbackContext::setUsed() {
	$set(this, thread, nullptr);
}

SerialCallbackContext::SerialCallbackContext() {
}

$Class* SerialCallbackContext::load$($String* name, bool initialize) {
	$loadClass(SerialCallbackContext, name, initialize, &_SerialCallbackContext_ClassInfo_, allocate$SerialCallbackContext);
	return class$;
}

$Class* SerialCallbackContext::class$ = nullptr;

	} // io
} // java