#include <java/nio/file/StandardWatchEventKinds.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardWatchEventKinds$StdWatchEventKind.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <jcpp.h>

#undef OVERFLOW
#undef ENTRY_CREATE
#undef ENTRY_MODIFY
#undef ENTRY_DELETE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $StandardWatchEventKinds$StdWatchEventKind = ::java::nio::file::StandardWatchEventKinds$StdWatchEventKind;
using $WatchEvent$Kind = ::java::nio::file::WatchEvent$Kind;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _StandardWatchEventKinds_FieldInfo_[] = {
	{"OVERFLOW", "Ljava/nio/file/WatchEvent$Kind;", "Ljava/nio/file/WatchEvent$Kind<Ljava/lang/Object;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardWatchEventKinds, OVERFLOW)},
	{"ENTRY_CREATE", "Ljava/nio/file/WatchEvent$Kind;", "Ljava/nio/file/WatchEvent$Kind<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardWatchEventKinds, ENTRY_CREATE)},
	{"ENTRY_DELETE", "Ljava/nio/file/WatchEvent$Kind;", "Ljava/nio/file/WatchEvent$Kind<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardWatchEventKinds, ENTRY_DELETE)},
	{"ENTRY_MODIFY", "Ljava/nio/file/WatchEvent$Kind;", "Ljava/nio/file/WatchEvent$Kind<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardWatchEventKinds, ENTRY_MODIFY)},
	{}
};

$MethodInfo _StandardWatchEventKinds_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StandardWatchEventKinds::*)()>(&StandardWatchEventKinds::init$))},
	{}
};

$InnerClassInfo _StandardWatchEventKinds_InnerClassesInfo_[] = {
	{"java.nio.file.StandardWatchEventKinds$StdWatchEventKind", "java.nio.file.StandardWatchEventKinds", "StdWatchEventKind", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StandardWatchEventKinds_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.nio.file.StandardWatchEventKinds",
	"java.lang.Object",
	nullptr,
	_StandardWatchEventKinds_FieldInfo_,
	_StandardWatchEventKinds_MethodInfo_,
	nullptr,
	nullptr,
	_StandardWatchEventKinds_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.file.StandardWatchEventKinds$StdWatchEventKind"
};

$Object* allocate$StandardWatchEventKinds($Class* clazz) {
	return $of($alloc(StandardWatchEventKinds));
}


$WatchEvent$Kind* StandardWatchEventKinds::OVERFLOW = nullptr;

$WatchEvent$Kind* StandardWatchEventKinds::ENTRY_CREATE = nullptr;

$WatchEvent$Kind* StandardWatchEventKinds::ENTRY_DELETE = nullptr;

$WatchEvent$Kind* StandardWatchEventKinds::ENTRY_MODIFY = nullptr;

void StandardWatchEventKinds::init$() {
}

void clinit$StandardWatchEventKinds($Class* class$) {
	$load($Object);
	$assignStatic(StandardWatchEventKinds::OVERFLOW, $new($StandardWatchEventKinds$StdWatchEventKind, "OVERFLOW"_s, $Object::class$));
	$load($Path);
	$assignStatic(StandardWatchEventKinds::ENTRY_CREATE, $new($StandardWatchEventKinds$StdWatchEventKind, "ENTRY_CREATE"_s, $Path::class$));
	$assignStatic(StandardWatchEventKinds::ENTRY_DELETE, $new($StandardWatchEventKinds$StdWatchEventKind, "ENTRY_DELETE"_s, $Path::class$));
	$assignStatic(StandardWatchEventKinds::ENTRY_MODIFY, $new($StandardWatchEventKinds$StdWatchEventKind, "ENTRY_MODIFY"_s, $Path::class$));
}

StandardWatchEventKinds::StandardWatchEventKinds() {
}

$Class* StandardWatchEventKinds::load$($String* name, bool initialize) {
	$loadClass(StandardWatchEventKinds, name, initialize, &_StandardWatchEventKinds_ClassInfo_, clinit$StandardWatchEventKinds, allocate$StandardWatchEventKinds);
	return class$;
}

$Class* StandardWatchEventKinds::class$ = nullptr;

		} // file
	} // nio
} // java