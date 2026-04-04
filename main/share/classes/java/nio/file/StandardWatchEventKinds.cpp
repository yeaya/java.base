#include <java/nio/file/StandardWatchEventKinds.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardWatchEventKinds$StdWatchEventKind.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <jcpp.h>

#undef ENTRY_CREATE
#undef ENTRY_DELETE
#undef ENTRY_MODIFY
#undef OVERFLOW

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

$WatchEvent$Kind* StandardWatchEventKinds::OVERFLOW = nullptr;
$WatchEvent$Kind* StandardWatchEventKinds::ENTRY_CREATE = nullptr;
$WatchEvent$Kind* StandardWatchEventKinds::ENTRY_DELETE = nullptr;
$WatchEvent$Kind* StandardWatchEventKinds::ENTRY_MODIFY = nullptr;

void StandardWatchEventKinds::init$() {
}

void StandardWatchEventKinds::clinit$($Class* clazz) {
	$assignStatic(StandardWatchEventKinds::OVERFLOW, $new($StandardWatchEventKinds$StdWatchEventKind, "OVERFLOW"_s, $Object::class$));
	$load($Path);
	$assignStatic(StandardWatchEventKinds::ENTRY_CREATE, $new($StandardWatchEventKinds$StdWatchEventKind, "ENTRY_CREATE"_s, $Path::class$));
	$assignStatic(StandardWatchEventKinds::ENTRY_DELETE, $new($StandardWatchEventKinds$StdWatchEventKind, "ENTRY_DELETE"_s, $Path::class$));
	$assignStatic(StandardWatchEventKinds::ENTRY_MODIFY, $new($StandardWatchEventKinds$StdWatchEventKind, "ENTRY_MODIFY"_s, $Path::class$));
}

StandardWatchEventKinds::StandardWatchEventKinds() {
}

$Class* StandardWatchEventKinds::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OVERFLOW", "Ljava/nio/file/WatchEvent$Kind;", "Ljava/nio/file/WatchEvent$Kind<Ljava/lang/Object;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardWatchEventKinds, OVERFLOW)},
		{"ENTRY_CREATE", "Ljava/nio/file/WatchEvent$Kind;", "Ljava/nio/file/WatchEvent$Kind<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardWatchEventKinds, ENTRY_CREATE)},
		{"ENTRY_DELETE", "Ljava/nio/file/WatchEvent$Kind;", "Ljava/nio/file/WatchEvent$Kind<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardWatchEventKinds, ENTRY_DELETE)},
		{"ENTRY_MODIFY", "Ljava/nio/file/WatchEvent$Kind;", "Ljava/nio/file/WatchEvent$Kind<Ljava/nio/file/Path;>;", $PUBLIC | $STATIC | $FINAL, $staticField(StandardWatchEventKinds, ENTRY_MODIFY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StandardWatchEventKinds, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.StandardWatchEventKinds$StdWatchEventKind", "java.nio.file.StandardWatchEventKinds", "StdWatchEventKind", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.nio.file.StandardWatchEventKinds",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.nio.file.StandardWatchEventKinds$StdWatchEventKind"
	};
	$loadClass(StandardWatchEventKinds, name, initialize, &classInfo$$, StandardWatchEventKinds::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StandardWatchEventKinds);
	});
	return class$;
}

$Class* StandardWatchEventKinds::class$ = nullptr;

		} // file
	} // nio
} // java