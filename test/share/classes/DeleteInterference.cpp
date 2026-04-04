#include <DeleteInterference.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/StandardWatchEventKinds.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

#undef ENTRY_CREATE
#undef ENTRY_DELETE
#undef ENTRY_MODIFY
#undef ITERATIONS_COUNT

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardWatchEventKinds = ::java::nio::file::StandardWatchEventKinds;
using $WatchService = ::java::nio::file::WatchService;
using $Iterator = ::java::util::Iterator;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $Executors = ::java::util::concurrent::Executors;
using $Future = ::java::util::concurrent::Future;

class DeleteInterference$$Lambda$lambda$main$0 : public $Runnable {
	$class(DeleteInterference$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Path* dir) {
		$set(this, dir, dir);
	}
	virtual void run() override {
		DeleteInterference::lambda$main$0(dir);
	}
	$Path* dir = nullptr;
};
$Class* DeleteInterference$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dir", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(DeleteInterference$$Lambda$lambda$main$0, dir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(DeleteInterference$$Lambda$lambda$main$0, init$, void, $Path*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DeleteInterference$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DeleteInterference$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DeleteInterference$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeleteInterference$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* DeleteInterference$$Lambda$lambda$main$0::class$ = nullptr;

class DeleteInterference$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(DeleteInterference$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Path* dir) {
		$set(this, dir, dir);
	}
	virtual void run() override {
		DeleteInterference::lambda$main$1(dir);
	}
	$Path* dir = nullptr;
};
$Class* DeleteInterference$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dir", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(DeleteInterference$$Lambda$lambda$main$1$1, dir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(DeleteInterference$$Lambda$lambda$main$1$1, init$, void, $Path*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DeleteInterference$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DeleteInterference$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DeleteInterference$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeleteInterference$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* DeleteInterference$$Lambda$lambda$main$1$1::class$ = nullptr;

void DeleteInterference::init$() {
}

void DeleteInterference::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Path, testDir, $Paths::get($($System::getProperty("test.dir"_s, "."_s)), $$new($StringArray, 0)));
	$var($Path, dir, $Files::createTempDirectory(testDir, "DeleteInterference"_s, $$new($FileAttributeArray, 0)));
	$var($ExecutorService, pool, $Executors::newCachedThreadPool());
	$var($Throwable, var$0, nullptr);
	try {
		$var($Future, task1, $nc(pool)->submit($$new(DeleteInterference$$Lambda$lambda$main$0, dir)));
		$var($Future, task2, pool->submit($$new(DeleteInterference$$Lambda$lambda$main$1$1, dir)));
		$nc(task1)->get();
		$nc(task2)->get();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(pool)->shutdown();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void DeleteInterference::openAndCloseWatcher($Path* dir) {
	$useLocalObjectStack();
	$var($FileSystem, fs, $FileSystems::getDefault());
	for (int32_t i = 0; i < DeleteInterference::ITERATIONS_COUNT; ++i) {
		$nc($System::out)->printf("open %d begin%n"_s, $$new($ObjectArray, {$($Integer::valueOf(i))}));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($WatchService, watcher, $nc(fs)->newWatchService());
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$init($StandardWatchEventKinds);
						$nc(dir)->register$(watcher, $$new($WatchEvent$KindArray, {
							$StandardWatchEventKinds::ENTRY_CREATE,
							$StandardWatchEventKinds::ENTRY_DELETE,
							$StandardWatchEventKinds::ENTRY_MODIFY
						}));
					} catch ($Throwable& t$) {
						if (watcher != nullptr) {
							try {
								watcher->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					if (watcher != nullptr) {
						watcher->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			} catch ($IOException& ioe) {
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$System::out->printf("open %d end%n"_s, $$new($ObjectArray, {$($Integer::valueOf(i))}));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void DeleteInterference::deleteAndRecreateDirectory($Path* dir) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < DeleteInterference::ITERATIONS_COUNT; ++i) {
		$nc($System::out)->printf("del %d begin%n"_s, $$new($ObjectArray, {$($Integer::valueOf(i))}));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				deleteFileTree(dir);
				$var($Path, subdir, $Files::createDirectories($($nc(dir)->resolve("subdir"_s)), $$new($FileAttributeArray, 0)));
				$Files::createFile($($nc(subdir)->resolve("test"_s)), $$new($FileAttributeArray, 0));
			} catch ($IOException& ioe) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$System::out->printf("del %d end%n"_s, $$new($ObjectArray, {$($Integer::valueOf(i))}));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void DeleteInterference::deleteFileTree($Path* file) {
	$useLocalObjectStack();
	try {
		if ($Files::isDirectory(file, $$new($LinkOptionArray, 0))) {
			$var($DirectoryStream, stream, $Files::newDirectoryStream(file));
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($Iterator, i$, $nc(stream)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Path, pa, $cast($Path, i$->next()));
						{
							deleteFileTree(pa);
						}
					}
				} catch ($Throwable& t$) {
					if (stream != nullptr) {
						try {
							stream->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (stream != nullptr) {
					stream->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		$Files::delete$(file);
	} catch ($IOException& ioe) {
	}
}

void DeleteInterference::lambda$main$1($Path* dir) {
	deleteAndRecreateDirectory(dir);
}

void DeleteInterference::lambda$main$0($Path* dir) {
	openAndCloseWatcher(dir);
}

DeleteInterference::DeleteInterference() {
}

$Class* DeleteInterference::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DeleteInterference$$Lambda$lambda$main$0")) {
			return DeleteInterference$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("DeleteInterference$$Lambda$lambda$main$1$1")) {
			return DeleteInterference$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"ITERATIONS_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DeleteInterference, ITERATIONS_COUNT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DeleteInterference, init$, void)},
		{"deleteAndRecreateDirectory", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(DeleteInterference, deleteAndRecreateDirectory, void, $Path*)},
		{"deleteFileTree", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(DeleteInterference, deleteFileTree, void, $Path*)},
		{"lambda$main$0", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DeleteInterference, lambda$main$0, void, $Path*)},
		{"lambda$main$1", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DeleteInterference, lambda$main$1, void, $Path*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DeleteInterference, main, void, $StringArray*), "java.lang.Exception"},
		{"openAndCloseWatcher", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(DeleteInterference, openAndCloseWatcher, void, $Path*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DeleteInterference",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DeleteInterference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeleteInterference);
	});
	return class$;
}

$Class* DeleteInterference::class$ = nullptr;