#include <sun/nio/fs/AbstractWatchKey$Event.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <sun/nio/fs/AbstractWatchKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WatchEvent = ::java::nio::file::WatchEvent;
using $WatchEvent$Kind = ::java::nio::file::WatchEvent$Kind;
using $AbstractWatchKey = ::sun::nio::fs::AbstractWatchKey;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _AbstractWatchKey$Event_FieldInfo_[] = {
	{"kind", "Ljava/nio/file/WatchEvent$Kind;", "Ljava/nio/file/WatchEvent$Kind<TT;>;", $PRIVATE | $FINAL, $field(AbstractWatchKey$Event, kind$)},
	{"context", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(AbstractWatchKey$Event, context$)},
	{"count", "I", nullptr, $PRIVATE, $field(AbstractWatchKey$Event, count$)},
	{}
};

$MethodInfo _AbstractWatchKey$Event_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/WatchEvent$Kind;Ljava/lang/Object;)V", "(Ljava/nio/file/WatchEvent$Kind<TT;>;TT;)V", 0, $method(static_cast<void(AbstractWatchKey$Event::*)($WatchEvent$Kind*,Object$*)>(&AbstractWatchKey$Event::init$))},
	{"context", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"count", "()I", nullptr, $PUBLIC},
	{"increment", "()V", nullptr, 0},
	{"kind", "()Ljava/nio/file/WatchEvent$Kind;", "()Ljava/nio/file/WatchEvent$Kind<TT;>;", $PUBLIC},
	{}
};

$InnerClassInfo _AbstractWatchKey$Event_InnerClassesInfo_[] = {
	{"sun.nio.fs.AbstractWatchKey$Event", "sun.nio.fs.AbstractWatchKey", "Event", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AbstractWatchKey$Event_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.AbstractWatchKey$Event",
	"java.lang.Object",
	"java.nio.file.WatchEvent",
	_AbstractWatchKey$Event_FieldInfo_,
	_AbstractWatchKey$Event_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/nio/file/WatchEvent<TT;>;",
	nullptr,
	_AbstractWatchKey$Event_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.AbstractWatchKey"
};

$Object* allocate$AbstractWatchKey$Event($Class* clazz) {
	return $of($alloc(AbstractWatchKey$Event));
}

void AbstractWatchKey$Event::init$($WatchEvent$Kind* type, Object$* context) {
	$set(this, kind$, type);
	$set(this, context$, context);
	this->count$ = 1;
}

$WatchEvent$Kind* AbstractWatchKey$Event::kind() {
	return this->kind$;
}

$Object* AbstractWatchKey$Event::context() {
	return $of(this->context$);
}

int32_t AbstractWatchKey$Event::count() {
	return this->count$;
}

void AbstractWatchKey$Event::increment() {
	++this->count$;
}

AbstractWatchKey$Event::AbstractWatchKey$Event() {
}

$Class* AbstractWatchKey$Event::load$($String* name, bool initialize) {
	$loadClass(AbstractWatchKey$Event, name, initialize, &_AbstractWatchKey$Event_ClassInfo_, allocate$AbstractWatchKey$Event);
	return class$;
}

$Class* AbstractWatchKey$Event::class$ = nullptr;

		} // fs
	} // nio
} // sun