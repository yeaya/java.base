#include <BlockDeviceSize.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/file/AccessDeniedException.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/StandardOpenOption.h>
#include <jcpp.h>

#undef BLK_FNAME
#undef BLK_PATH
#undef READ

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AccessDeniedException = ::java::nio::file::AccessDeniedException;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;

$String* BlockDeviceSize::BLK_FNAME = nullptr;
$Path* BlockDeviceSize::BLK_PATH = nullptr;

void BlockDeviceSize::init$() {
}

void BlockDeviceSize::main($StringArray* args) {
	$init(BlockDeviceSize);
	$useLocalObjectStack();
	try {
		$init($StandardOpenOption);
		$var($FileChannel, ch, $FileChannel::open(BlockDeviceSize::BLK_PATH, $$new($OpenOptionArray, {$StandardOpenOption::READ})));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($RandomAccessFile, file, $new($RandomAccessFile, BlockDeviceSize::BLK_FNAME, "r"_s));
				$var($Throwable, var$1, nullptr);
				try {
					try {
						int64_t size1 = $nc(ch)->size();
						int64_t size2 = file->length();
						if (size1 != size2) {
							$throwNew($RuntimeException, $$str({"size differs when retrieved in different ways: "_s, $$str(size1), " != "_s, $$str(size2)}));
						}
						$nc($System::out)->println("OK"_s);
					} catch ($Throwable& t$) {
						try {
							file->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					file->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			} catch ($Throwable& t$) {
				if (ch != nullptr) {
					try {
						ch->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			if (ch != nullptr) {
				ch->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($NoSuchFileException& nsfe) {
		$nc($System::err)->println($$str({"File "_s, BlockDeviceSize::BLK_FNAME, " not found. Skipping test"_s}));
	} catch ($AccessDeniedException& ade) {
		$nc($System::err)->println($$str({"Access to "_s, BlockDeviceSize::BLK_FNAME, " is denied. Run test as root."_s}));
	}
}

void BlockDeviceSize::clinit$($Class* clazz) {
	$assignStatic(BlockDeviceSize::BLK_FNAME, "/dev/sda1"_s);
	$assignStatic(BlockDeviceSize::BLK_PATH, $Paths::get(BlockDeviceSize::BLK_FNAME, $$new($StringArray, 0)));
}

BlockDeviceSize::BlockDeviceSize() {
}

$Class* BlockDeviceSize::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BLK_FNAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BlockDeviceSize, BLK_FNAME)},
		{"BLK_PATH", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BlockDeviceSize, BLK_PATH)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BlockDeviceSize, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BlockDeviceSize, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BlockDeviceSize",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BlockDeviceSize, name, initialize, &classInfo$$, BlockDeviceSize::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BlockDeviceSize);
	});
	return class$;
}

$Class* BlockDeviceSize::class$ = nullptr;