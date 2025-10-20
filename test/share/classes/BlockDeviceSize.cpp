#include <BlockDeviceSize.h>

#include <java/io/PrintStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AccessDeniedException = ::java::nio::file::AccessDeniedException;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;

$FieldInfo _BlockDeviceSize_FieldInfo_[] = {
	{"BLK_FNAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BlockDeviceSize, BLK_FNAME)},
	{"BLK_PATH", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BlockDeviceSize, BLK_PATH)},
	{}
};

$MethodInfo _BlockDeviceSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BlockDeviceSize::*)()>(&BlockDeviceSize::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BlockDeviceSize::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _BlockDeviceSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BlockDeviceSize",
	"java.lang.Object",
	nullptr,
	_BlockDeviceSize_FieldInfo_,
	_BlockDeviceSize_MethodInfo_
};

$Object* allocate$BlockDeviceSize($Class* clazz) {
	return $of($alloc(BlockDeviceSize));
}

$String* BlockDeviceSize::BLK_FNAME = nullptr;
$Path* BlockDeviceSize::BLK_PATH = nullptr;

void BlockDeviceSize::init$() {
}

void BlockDeviceSize::main($StringArray* args) {
	$init(BlockDeviceSize);
	$useLocalCurrentObjectStackCache();
	try {
		$init($StandardOpenOption);
		$var($FileChannel, ch, $FileChannel::open(BlockDeviceSize::BLK_PATH, $$new($OpenOptionArray, {static_cast<$OpenOption*>($StandardOpenOption::READ)})));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($RandomAccessFile, file, $new($RandomAccessFile, BlockDeviceSize::BLK_FNAME, "r"_s));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								int64_t size1 = $nc(ch)->size();
								int64_t size2 = file->length();
								if (size1 != size2) {
									$throwNew($RuntimeException, $$str({"size differs when retrieved in different ways: "_s, $$str(size1), " != "_s, $$str(size2)}));
								}
								$init($System);
								$nc($System::out)->println("OK"_s);
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									file->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							file->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (ch != nullptr) {
						try {
							ch->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (ch != nullptr) {
					ch->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($NoSuchFileException&) {
		$var($NoSuchFileException, nsfe, $catch());
		$init($System);
		$nc($System::err)->println($$str({"File "_s, BlockDeviceSize::BLK_FNAME, " not found. Skipping test"_s}));
	} catch ($AccessDeniedException&) {
		$var($AccessDeniedException, ade, $catch());
		$init($System);
		$nc($System::err)->println($$str({"Access to "_s, BlockDeviceSize::BLK_FNAME, " is denied. Run test as root."_s}));
	}
}

void clinit$BlockDeviceSize($Class* class$) {
	$assignStatic(BlockDeviceSize::BLK_FNAME, "/dev/sda1"_s);
	$assignStatic(BlockDeviceSize::BLK_PATH, $Paths::get(BlockDeviceSize::BLK_FNAME, $$new($StringArray, 0)));
}

BlockDeviceSize::BlockDeviceSize() {
}

$Class* BlockDeviceSize::load$($String* name, bool initialize) {
	$loadClass(BlockDeviceSize, name, initialize, &_BlockDeviceSize_ClassInfo_, clinit$BlockDeviceSize, allocate$BlockDeviceSize);
	return class$;
}

$Class* BlockDeviceSize::class$ = nullptr;