#include <java/util/EventObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void EventObject::init$(Object$* source) {
	if (source == nullptr) {
		$throwNew($IllegalArgumentException, "null source"_s);
	}
	$set(this, source, source);
}

$Object* EventObject::getSource() {
	return this->source;
}

$String* EventObject::toString() {
	return $str({$($of(this)->getClass()->getName()), "[source="_s, this->source, "]"_s});
}

EventObject::EventObject() {
}

$Class* EventObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventObject, serialVersionUID)},
		{"source", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(EventObject, source)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(EventObject, init$, void, Object$*)},
		{"getSource", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(EventObject, getSource, $Object*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EventObject, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.EventObject",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EventObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventObject);
	});
	return class$;
}

$Class* EventObject::class$ = nullptr;

	} // util
} // java