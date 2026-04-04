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

void SerialCallbackContext::init$(Object$* obj, $ObjectStreamClass* desc) {
	$set(this, obj, obj);
	$set(this, desc, desc);
	$set(this, thread, $Thread::currentThread());
}

$Object* SerialCallbackContext::getObj() {
	checkAndSetUsed();
	return this->obj;
}

$ObjectStreamClass* SerialCallbackContext::getDesc() {
	return this->desc;
}

void SerialCallbackContext::check() {
	$useLocalObjectStack();
	if (this->thread != nullptr && this->thread != $Thread::currentThread()) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("expected thread: "_s);
		var$0->append(this->thread);
		var$0->append(", but got: "_s);
		var$0->append($($Thread::currentThread()));
		$throwNew($NotActiveException, $$str(var$0));
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
	$FieldInfo fieldInfos$$[] = {
		{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SerialCallbackContext, obj)},
		{"desc", "Ljava/io/ObjectStreamClass;", nullptr, $PRIVATE | $FINAL, $field(SerialCallbackContext, desc)},
		{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(SerialCallbackContext, thread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/io/ObjectStreamClass;)V", nullptr, $PUBLIC, $method(SerialCallbackContext, init$, void, Object$*, $ObjectStreamClass*)},
		{"check", "()V", nullptr, $PUBLIC, $method(SerialCallbackContext, check, void), "java.io.NotActiveException"},
		{"checkAndSetUsed", "()V", nullptr, $PUBLIC, $method(SerialCallbackContext, checkAndSetUsed, void), "java.io.NotActiveException"},
		{"getDesc", "()Ljava/io/ObjectStreamClass;", nullptr, $PUBLIC, $method(SerialCallbackContext, getDesc, $ObjectStreamClass*)},
		{"getObj", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(SerialCallbackContext, getObj, $Object*), "java.io.NotActiveException"},
		{"setUsed", "()V", nullptr, $PUBLIC, $method(SerialCallbackContext, setUsed, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.io.SerialCallbackContext",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SerialCallbackContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SerialCallbackContext);
	});
	return class$;
}

$Class* SerialCallbackContext::class$ = nullptr;

	} // io
} // java