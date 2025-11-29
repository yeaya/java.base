#include <java/nio/file/StandardWatchEventKinds$StdWatchEventKind.h>

#include <java/nio/file/StandardWatchEventKinds.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _StandardWatchEventKinds$StdWatchEventKind_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(StandardWatchEventKinds$StdWatchEventKind, name$)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE | $FINAL, $field(StandardWatchEventKinds$StdWatchEventKind, type$)},
	{}
};

$MethodInfo _StandardWatchEventKinds$StdWatchEventKind_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<TT;>;)V", 0, $method(static_cast<void(StandardWatchEventKinds$StdWatchEventKind::*)($String*,$Class*)>(&StandardWatchEventKinds$StdWatchEventKind::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<TT;>;", $PUBLIC},
	{}
};

$InnerClassInfo _StandardWatchEventKinds$StdWatchEventKind_InnerClassesInfo_[] = {
	{"java.nio.file.StandardWatchEventKinds$StdWatchEventKind", "java.nio.file.StandardWatchEventKinds", "StdWatchEventKind", $PRIVATE | $STATIC},
	{"java.nio.file.WatchEvent$Kind", "java.nio.file.WatchEvent", "Kind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StandardWatchEventKinds$StdWatchEventKind_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.StandardWatchEventKinds$StdWatchEventKind",
	"java.lang.Object",
	"java.nio.file.WatchEvent$Kind",
	_StandardWatchEventKinds$StdWatchEventKind_FieldInfo_,
	_StandardWatchEventKinds$StdWatchEventKind_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/nio/file/WatchEvent$Kind<TT;>;",
	nullptr,
	_StandardWatchEventKinds$StdWatchEventKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.StandardWatchEventKinds"
};

$Object* allocate$StandardWatchEventKinds$StdWatchEventKind($Class* clazz) {
	return $of($alloc(StandardWatchEventKinds$StdWatchEventKind));
}

void StandardWatchEventKinds$StdWatchEventKind::init$($String* name, $Class* type) {
	$set(this, name$, name);
	$set(this, type$, type);
}

$String* StandardWatchEventKinds$StdWatchEventKind::name() {
	return this->name$;
}

$Class* StandardWatchEventKinds$StdWatchEventKind::type() {
	return this->type$;
}

$String* StandardWatchEventKinds$StdWatchEventKind::toString() {
	return this->name$;
}

StandardWatchEventKinds$StdWatchEventKind::StandardWatchEventKinds$StdWatchEventKind() {
}

$Class* StandardWatchEventKinds$StdWatchEventKind::load$($String* name, bool initialize) {
	$loadClass(StandardWatchEventKinds$StdWatchEventKind, name, initialize, &_StandardWatchEventKinds$StdWatchEventKind_ClassInfo_, allocate$StandardWatchEventKinds$StdWatchEventKind);
	return class$;
}

$Class* StandardWatchEventKinds$StdWatchEventKind::class$ = nullptr;

		} // file
	} // nio
} // java