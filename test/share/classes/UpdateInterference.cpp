#include <UpdateInterference.h>

#include <UpdateInterference$1.h>
#include <UpdateInterference$2.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardWatchEventKinds.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef ENTRY_CREATE
#undef SECONDS

using $UpdateInterference$1 = ::UpdateInterference$1;
using $UpdateInterference$2 = ::UpdateInterference$2;
using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileSystem = ::java::nio::file::FileSystem;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $StandardWatchEventKinds = ::java::nio::file::StandardWatchEventKinds;
using $WatchEvent = ::java::nio::file::WatchEvent;
using $WatchEvent$Kind = ::java::nio::file::WatchEvent$Kind;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$FieldInfo _UpdateInterference_FieldInfo_[] = {
	{"stop", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(UpdateInterference, stop)},
	{}
};

$MethodInfo _UpdateInterference_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UpdateInterference::*)()>(&UpdateInterference::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UpdateInterference::main)), "java.io.IOException,java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _UpdateInterference_InnerClassesInfo_[] = {
	{"UpdateInterference$2", nullptr, nullptr, 0},
	{"UpdateInterference$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UpdateInterference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UpdateInterference",
	"java.lang.Object",
	nullptr,
	_UpdateInterference_FieldInfo_,
	_UpdateInterference_MethodInfo_,
	nullptr,
	nullptr,
	_UpdateInterference_InnerClassesInfo_,
	nullptr,
	nullptr,
	"UpdateInterference$2,UpdateInterference$1"
};

$Object* allocate$UpdateInterference($Class* clazz) {
	return $of($alloc(UpdateInterference));
}

$volatile(bool) UpdateInterference::stop = false;

void UpdateInterference::init$() {
}

void UpdateInterference::main($StringArray* args) {
	$var($Path, root, $Files::createTempDirectory("test"_s, $$new($FileAttributeArray, 0)));
	$var($Path, foo, $nc(root)->resolve("foo"_s));
	$var($Path, bar, root->resolve("bar"_s));
	$var($Path, baz, root->resolve("baz"_s));
	$Files::createDirectory(foo, $$new($FileAttributeArray, 0));
	$Files::createDirectory(bar, $$new($FileAttributeArray, 0));
	$Files::createDirectory(baz, $$new($FileAttributeArray, 0));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($WatchService, watcher, $nc($(root->getFileSystem()))->newWatchService());
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$init($StandardWatchEventKinds);
						$var($WatchKey, fooKey, $nc(foo)->register$(watcher, $$new($WatchEvent$KindArray, {$StandardWatchEventKinds::ENTRY_CREATE})));
						$var($WatchKey, barKey, $nc(bar)->register$(watcher, $$new($WatchEvent$KindArray, {$StandardWatchEventKinds::ENTRY_CREATE})));
						$var($Thread, t1, nullptr);
						$var($Thread, t2, nullptr);
						{
							$var($Throwable, var$2, nullptr);
							try {
								$assign(t1, $new($UpdateInterference$1, foo));
								$assign(t2, $new($UpdateInterference$2, baz, watcher));
								t1->start();
								t2->start();
								int64_t time = $System::currentTimeMillis();
								while (($System::currentTimeMillis() - time) < 15000) {
									$init($TimeUnit);
									$var($WatchKey, key, $nc(watcher)->poll(60, $TimeUnit::SECONDS));
									if (key == nullptr) {
										continue;
									}
									if (key != fooKey) {
										$var($List, pollEvents, $nc(key)->pollEvents());
										{
											$var($Iterator, i$, $nc(pollEvents)->iterator());
											for (; $nc(i$)->hasNext();) {
												$var($WatchEvent, watchEvent, $cast($WatchEvent, i$->next()));
												{
													$var($String, var$5, $$str({$$str($nc(watchEvent)->count()), " "_s}));
													$var($String, var$4, $$concat(var$5, $(watchEvent->kind())));
													$var($String, var$3, $$concat(var$4, " "));
													$nc($System::out)->println($$concat(var$3, $(watchEvent->context())));
												}
											}
										}
										$throwNew($RuntimeException, "Event received for unexpected key"_s);
									}
									$nc(key)->reset();
								}
							} catch ($Throwable&) {
								$assign(var$2, $catch());
							} /*finally*/ {
								$init(UpdateInterference);
								UpdateInterference::stop = true;
								if (t1 != nullptr) {
									t1->join();
								}
								if (t2 != nullptr) {
									t2->join();
								}
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (watcher != nullptr) {
							try {
								watcher->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					if (watcher != nullptr) {
						watcher->close();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Files::delete$(foo);
			$Files::delete$(bar);
			$Files::delete$(baz);
			$Files::delete$(root);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

UpdateInterference::UpdateInterference() {
}

$Class* UpdateInterference::load$($String* name, bool initialize) {
	$loadClass(UpdateInterference, name, initialize, &_UpdateInterference_ClassInfo_, allocate$UpdateInterference);
	return class$;
}

$Class* UpdateInterference::class$ = nullptr;