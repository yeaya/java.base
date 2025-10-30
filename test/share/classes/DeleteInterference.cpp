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
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardWatchEventKinds = ::java::nio::file::StandardWatchEventKinds;
using $WatchEvent = ::java::nio::file::WatchEvent;
using $WatchEvent$Kind = ::java::nio::file::WatchEvent$Kind;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeleteInterference$$Lambda$lambda$main$0>());
	}
	$Path* dir = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DeleteInterference$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"dir", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(DeleteInterference$$Lambda$lambda$main$0, dir)},
	{}
};
$MethodInfo DeleteInterference$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(DeleteInterference$$Lambda$lambda$main$0::*)($Path*)>(&DeleteInterference$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeleteInterference$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DeleteInterference$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DeleteInterference$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(DeleteInterference$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DeleteInterference$$Lambda$lambda$main$1$1>());
	}
	$Path* dir = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DeleteInterference$$Lambda$lambda$main$1$1::fieldInfos[2] = {
	{"dir", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(DeleteInterference$$Lambda$lambda$main$1$1, dir)},
	{}
};
$MethodInfo DeleteInterference$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(DeleteInterference$$Lambda$lambda$main$1$1::*)($Path*)>(&DeleteInterference$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DeleteInterference$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DeleteInterference$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DeleteInterference$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(DeleteInterference$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DeleteInterference$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _DeleteInterference_FieldInfo_[] = {
	{"ITERATIONS_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DeleteInterference, ITERATIONS_COUNT)},
	{}
};

$MethodInfo _DeleteInterference_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeleteInterference::*)()>(&DeleteInterference::init$))},
	{"deleteAndRecreateDirectory", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Path*)>(&DeleteInterference::deleteAndRecreateDirectory))},
	{"deleteFileTree", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Path*)>(&DeleteInterference::deleteFileTree))},
	{"lambda$main$0", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Path*)>(&DeleteInterference::lambda$main$0))},
	{"lambda$main$1", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Path*)>(&DeleteInterference::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DeleteInterference::main)), "java.lang.Exception"},
	{"openAndCloseWatcher", "(Ljava/nio/file/Path;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Path*)>(&DeleteInterference::openAndCloseWatcher))},
	{}
};

$ClassInfo _DeleteInterference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DeleteInterference",
	"java.lang.Object",
	nullptr,
	_DeleteInterference_FieldInfo_,
	_DeleteInterference_MethodInfo_
};

$Object* allocate$DeleteInterference($Class* clazz) {
	return $of($alloc(DeleteInterference));
}

void DeleteInterference::init$() {
}

void DeleteInterference::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Path, testDir, $Paths::get($($System::getProperty("test.dir"_s, "."_s)), $$new($StringArray, 0)));
	$var($Path, dir, $Files::createTempDirectory(testDir, "DeleteInterference"_s, $$new($FileAttributeArray, 0)));
	$var($ExecutorService, pool, $Executors::newCachedThreadPool());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Future, task1, $nc(pool)->submit(static_cast<$Runnable*>($$new(DeleteInterference$$Lambda$lambda$main$0, dir))));
			$var($Future, task2, pool->submit(static_cast<$Runnable*>($$new(DeleteInterference$$Lambda$lambda$main$1$1, dir))));
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
}

void DeleteInterference::openAndCloseWatcher($Path* dir) {
	$useLocalCurrentObjectStackCache();
	$var($FileSystem, fs, $FileSystems::getDefault());
	for (int32_t i = 0; i < DeleteInterference::ITERATIONS_COUNT; ++i) {
		$nc($System::out)->printf("open %d begin%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($WatchService, watcher, $nc(fs)->newWatchService());
					{
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
					}
				} catch ($IOException& ioe) {
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				$nc($System::out)->printf("open %d end%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void DeleteInterference::deleteAndRecreateDirectory($Path* dir) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < DeleteInterference::ITERATIONS_COUNT; ++i) {
		$nc($System::out)->printf("del %d begin%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
		{
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
				$nc($System::out)->printf("del %d end%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void DeleteInterference::deleteFileTree($Path* file) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($Files::isDirectory(file, $$new($LinkOptionArray, 0))) {
			{
				$var($DirectoryStream, stream, $Files::newDirectoryStream(file));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							{
								$var($Iterator, i$, $nc(stream)->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Path, pa, $cast($Path, i$->next()));
									{
										deleteFileTree(pa);
									}
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
		if (name->equals(DeleteInterference$$Lambda$lambda$main$0::classInfo$.name)) {
			return DeleteInterference$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(DeleteInterference$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return DeleteInterference$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(DeleteInterference, name, initialize, &_DeleteInterference_ClassInfo_, allocate$DeleteInterference);
	return class$;
}

$Class* DeleteInterference::class$ = nullptr;