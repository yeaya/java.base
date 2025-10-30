#include <java/util/EventObject.h>

#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _EventObject_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventObject, serialVersionUID)},
	{"source", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(EventObject, source)},
	{}
};

$MethodInfo _EventObject_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(EventObject::*)(Object$*)>(&EventObject::init$))},
	{"getSource", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EventObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.EventObject",
	"java.lang.Object",
	"java.io.Serializable",
	_EventObject_FieldInfo_,
	_EventObject_MethodInfo_
};

$Object* allocate$EventObject($Class* clazz) {
	return $of($alloc(EventObject));
}

void EventObject::init$(Object$* source) {
	if (source == nullptr) {
		$throwNew($IllegalArgumentException, "null source"_s);
	}
	$set(this, source, source);
}

$Object* EventObject::getSource() {
	return $of(this->source);
}

$String* EventObject::toString() {
	return $str({$($of(this)->getClass()->getName()), "[source="_s, this->source, "]"_s});
}

EventObject::EventObject() {
}

$Class* EventObject::load$($String* name, bool initialize) {
	$loadClass(EventObject, name, initialize, &_EventObject_ClassInfo_, allocate$EventObject);
	return class$;
}

$Class* EventObject::class$ = nullptr;

	} // util
} // java